#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11
char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	// 0 : 빈 공간 (" ")
	// 1 : 벽 (□)
	// 2 : 탈출구 (◎)

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

	// 첫 번째 매개변수
	// 복사받을 문자 배열을 넣어줍니다.

	// 두 번째 매개변수
	// 복사시킬 문자열을 넣어줍니다.
	/*strcpy(student.name, "KIM");

	printf("student.name의 값 : %s\n", student.name);

	strcpy(student.name, "G");

	printf("student.name의 값 : %s\n", student.name);*/

	CreateMaze();
	Render(0);

	return 0;
}