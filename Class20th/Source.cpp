#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// ������ ũ��
int width = 100;
int height = 60;

// ���۸� �����մϴ�.
HANDLE screen[2];
// screen[0] front buffer
// screen[1] back buffer

// HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ����
int screenIndex = 0;

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x, y };

	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void InitScreen()
{
	CONSOLE_CURSOR_INFO cursor;

	// ������ ���� ������, ���� ������
	COORD size = { width, height };

	// left, top, right, bottom
	SMALL_RECT rect{ 0,0, width - 1, height - 1 };

	// ȭ�� 2���� �����մϴ�.
	// front buffer
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	// ������ ����� �����ϴ� �Լ�
	SetConsoleScreenBufferSize(screen[0], size);

	SetConsoleWindowInfo(screen[0], TRUE, &rect);

	// back buffer
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	// ������ ����� �����ϴ� �Լ�
	SetConsoleScreenBufferSize(screen[1], size);

	SetConsoleWindowInfo(screen[1], TRUE, &rect);

	// Ŀ���� Ȱ��ȭ ����
	// false : ���� (0)
	// true  : �� (1)

	cursor.bVisible = false;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}

// ���۸� ��ü�ϴ� �Լ�
void FlipScreen()
{
	// ���۴� �ϳ��� Ȱ��ȭ��ų �� �ֽ��ϴ�.
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;
}

// ��ü�� ���۸� �����ִ� �Լ�
void ClearScreen()
{
	COORD coord = { 0,0 };

	DWORD dw;

	FillConsoleOutputCharacter
	(
		screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

// ���۸� �����ϴ� �Լ�
void ReleaseScreen()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}

// ���� ���۸��� ����ؼ� ����ϴ� �Լ�
void PrintfScreen(int x, int y, const char* string)
{
	COORD cursorPosition = { x, y };

	DWORD dw;

	SetConsoleCursorPosition(screen[screenIndex], cursorPosition);

	WriteFile
	(
		screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);
}

// ������ �����ϴ� �Լ�
enum Color
{
	Black,  // 0 = ����
	Blue,   // 1 = �Ķ�
	Green,  // 2 = �ʷ�
	Sky,    // 3 = ����
	Red,    // 4 = ����
	Purple, // 5 = ����
	Yellow, // 6 = ���
	White,  // 7 = ���
	Gray    // 8 = ȸ��
};

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

	// 1. ���۸� �ʱ�ȭ�մϴ�.
	InitScreen();

	while (1)
	{
		PrintfScreen(5, 5, "A");

		// 2. ���۸� ��ü�մϴ�.
		FlipScreen();

		// 3. ��ü�� ������ ������ �����մϴ�.
		ClearScreen();
	}

	// 4. ������ ����Ǿ��� �� ���۸� �����մϴ�.
	ReleaseScreen();

	return 0;
}