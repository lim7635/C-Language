#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11
char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	// 0 : �� ���� (" ")
	// 1 : �� (��)
	// 2 : Ż�ⱸ (��)

	strcpy(maze[0],  "0000001111");
	strcpy(maze[1],  "1111101000");
	strcpy(maze[2],  "1111101010");
	strcpy(maze[3],  "1111100010");
	strcpy(maze[4],  "1111111110");
	strcpy(maze[5],  "1111000000");
	strcpy(maze[6],  "1000011111");
	strcpy(maze[7],  "1011100001");
	strcpy(maze[8],  "0010001101");
	strcpy(maze[9],  "0110111101");
	strcpy(maze[10], "0000111102");
}

void Render(int j)
{
	for (int i = 0; i < 11; i++)
	{
		printf("%s\n", maze[i]);
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

	CreateMaze();
	Render(0);

	return 0;
}