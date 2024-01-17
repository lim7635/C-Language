#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

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

#define WIDTH 11
#define HEIGHT 11
char maze[WIDTH][HEIGHT];

typedef struct Player
{
	int x;
	int y;
	const char* shape;
}Player;

void CreateMaze()
{
	// 0 : 빈 공간 ("  ")
	// 1 : 벽 (▥)
	// 2 : 탈출구 (◎)

	strcpy(maze[0],  "0000000011");
	strcpy(maze[1],  "1111101111");
	strcpy(maze[2],  "1000101000");
	strcpy(maze[3],  "1010100010");
	strcpy(maze[4],  "1010011110");
	strcpy(maze[5],  "0001000100");
	strcpy(maze[6],  "0101110001");
	strcpy(maze[7],  "0110001101");
	strcpy(maze[8],  "0010100101");
	strcpy(maze[9],  "1010110111");
	strcpy(maze[10], "1000100002");
}

void Keyboard(char maze[WIDTH][HEIGHT], Player* player)
{
	char key = 0;

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
	}
}

void Render()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
			{

				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("▥");
			}
			else if (maze[i][j] == '2')
			{
				printf("◎");
			}
		}
		printf("\n");
	}
}

typedef struct Student
{
	char name[10];
}Student;

int main()
{
	/*Student student;

	student.name;*/

	// 첫 번째 매개변수
	// 복사받을 문자 배열을 넣어줍니다.

	// 두 번째 매개변수
	// 복사시킬 문자열을 넣어줍니다.
	/*strcpy(student.name, "KIM");

	printf("student.name의 값 : %s\n", student.name);

	strcpy(student.name, "G");

	printf("student.name의 값 : %s\n", student.name);*/

	Player player = { 0, 0, "★" };

	// 1. 맵 데이터를 생성합니다.
	CreateMaze();

	while (1)
	{

		// 2. 맵 데이터에 있는 정보를 토대로 출력합니다.
		Render();

		GotoXY(player.x, player.y);
		printf("%s", player.shape);
		Keyboard();

		Sleep(100); // 0.1초 딜레이(1000 당 1초)
		system("cls");


	}
	return 0;
}
