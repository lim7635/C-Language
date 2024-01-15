#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // 키(key) 이동을 할 수 있도록 도와주는 헤더 파일
#include <Windows.h> // 좌표(coordinate) 이동을 할 수 있도록 도와주는 헤더 파일

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 2;
	int y = 5;
	GotoXY(x, y);
	printf("☆");

	while (1) // 입력한 키보드 방향에 맞게 별 이동
	{
		if (_kbhit()) // 키보드 입력 확인 함수(true / false)
		{
			key = _getch(); // key 입력을 받아주는 함수
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
			printf("☆");
		}
	}

	return 0;
}