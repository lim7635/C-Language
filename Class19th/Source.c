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
	// x, y ��ǥ ����
	COORD position = { x, y };

	// Ŀ�� �̵� �Լ�
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
	// 0 : �� ���� ("  ")
	// 1 : �� (��)
	// 2 : Ż�ⱸ (��)

	strcpy(maze[0], "0000000011");
	strcpy(maze[1], "1111101111");
	strcpy(maze[2], "1000101000");
	strcpy(maze[3], "1010100010");
	strcpy(maze[4], "1010011110");
	strcpy(maze[5], "0001000100");
	strcpy(maze[6], "0101110001");
	strcpy(maze[7], "0110001101");
	strcpy(maze[8], "0010100101");
	strcpy(maze[9], "1010110111");
	strcpy(maze[10], "1000100002");
}

void Keyboard(char map[WIDTH][HEIGHT], Player* player)
{
	char key = 0;

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
		case UP: if (maze[player->y - 1][player->x / 2] != '1' && player->y - 1 >= 0) { player->y--; }
			   break;

		case LEFT: if (maze[player->y][player->x / 2 - 1] != '1' && player->x / 2 - 1 >= 0) { player->x -= 2; }
				 break;

		case RIGHT: if (maze[player->y][player->x / 2 + 1] != '1') { player->x += 2; }
				  break;

		case DOWN: if (maze[player->y + 1][player->x / 2] != '1') { player->y++; }
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
				printf("��");
			}
			else if (maze[i][j] == '2')
			{
				printf("��");
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

	// ù ��° �Ű�����
	// ������� ���� �迭�� �־��ݴϴ�.

	// �� ��° �Ű�����
	// �����ų ���ڿ��� �־��ݴϴ�.
	/*strcpy(student.name, "KIM");

	printf("student.name�� �� : %s\n", student.name);

	strcpy(student.name, "G");

	printf("student.name�� �� : %s\n", student.name);*/

	// Player player = { 0, 0, "��" };

	// 1. �� �����͸� �����մϴ�.
	// CreateMaze();

	//while (1)
	//{

	//	// 2. �� �����Ϳ� �ִ� ������ ���� ����մϴ�.
	//	Render();

	//	Keyboard(maze, &player);

	//	GotoXY(player.x, player.y);
	//	printf("%s", player.shape);

	//	Sleep(100); // 0.1�� ������(1000 �� 1��)
	//	system("cls");

	//}

	return 0;
}