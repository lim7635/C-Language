#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef int INT64;

typedef struct Vector2
{
	int x;
	int y;
}Vector2;

int main()
{
#pragma region ������ �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	//int array2D[3][3] = // array2D[��][��]
	//{
	//	{0,1,2},
	//	{3,4,5},
	//	{6,7,8}
	//};

	//// 2���� �迭�� ��� ���� ���еǸ�
	//// �տ� �ִ� �迭�� ���� �ǹ��ϰ� �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("array2D[%d][%d] = %d\n", i, j, array2D[i][j]);
	//	}
	//}

	// 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ֽ��ϴ�.

#pragma endregion

#pragma region typedef
	/*INT64 integer = 100;

	Vector2 vector2;

	vector2.x = 10;
	vector2.y = 5;

	Vector2* structPtr = &vector2;

	structPtr->x = 99;
	structPtr->y = 100;

	printf("integer ������ �� : %d\n", integer);
	printf("vector2.x ������ �� : %d\n", vector2.x);
	printf("vector2.y ������ �� : %d\n", vector2.y);*/

#pragma endregion

	return 0;
}