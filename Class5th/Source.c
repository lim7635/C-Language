#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소값을 반환하는 연산자입니다.

	//int data = 10;

	//// %p : 메모리의 주소값을 나타내는 연산자입니다.
	//printf("data 변수의 주솟값 : %p\n", &data);
	//// [ 1 byte ] [ 2 byte ] [ 3 byte ] [ 4 byte ] 제일 왼쪽 값 출력(1 byte)


	//// 데이터의 주소값은 해당 데이터가 저장된 메모리의 시작 주소를 의미하며
	//// 메모리의 공간은 1 byte의 크기로 나누어 표현합니다.


	//// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀌며
	//// 여러 개의 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.

#pragma endregion

#pragma region scanf_s() 함수
	//// 표준 입력 함수로, 여러 종류의 데이터를
	//// 다양한 서식에 맞추어 입력해주는 함수입니다.

	//int count = 0;

	//printf("count 변수를 입력해주세요.\n");
	//scanf_s("%d", &count);

	//// 표준 입력 함수로 데이터를 입력하게 되면
	//// 버퍼에 데이터를 보관하였다가 입력하는 순간
	//// 버퍼 안의 내용을 프로그램에 전송합니다.

	//printf("\ncount 변수의 : 값 %d", count);

	//// 표준 입력 함수는 입력을 수행할 때까지
	//// 다음 작업으로 넘어갈 수 없습니다.

#pragma endregion

#pragma region 실습 문제 : Star Tower
	// 입력 -> 5

	// *
	// **
	// ***
	// ****
	// ***** (입력한 개수만큼 Star Tower 층이 하나씩 생김)

	/*int count = 0;

	printf("입력 -> ");
	scanf_s("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}*/

#pragma endregion


}