#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // Ű(key) �̵��� �� �� �ֵ��� �����ִ� ��� ����
#include <Windows.h> // ��ǥ(coordinate) �̵��� �� �� �ֵ��� �����ִ� ��� ����

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x, y };

	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 2;
	int y = 5;
	GotoXY(x, y);
	printf("��");

	while (1) // �Է��� Ű���� ���⿡ �°� �� �̵�
	{
		if (_kbhit()) // Ű���� �Է� Ȯ�� �Լ�(true / false)
		{
			key = _getch(); // key �Է��� �޾��ִ� �Լ�
			system("cls");

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: if (y - 1 >= 0) { y--; }
				break;

			case LEFT: if (x - 2 >= 0) { x -= 2; }
				break;

			case RIGHT: x += 2;
				break;

			case DOWN: y++;
				break;

			default:
				break;
			}
			GotoXY(x, y);
			printf("��");
		}
	}

	return 0;
}