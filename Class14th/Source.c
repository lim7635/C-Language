#include <stdio.h>
#include <stdlib.h>

enum Unit
{
	// 열거형은 값을 따로 지정하지 않으며
	// 가장 위에 있는 값은 0이라는 값으로 설정됩니다.
	SKELETON, // 0
	SLIME = 15, // 15
	GOBLIN // 16

	// 열거형에서 중간에 있는 값을 변경하게 되면
	// 변경된 값부터 그 다음에 있는 모든 값이 +1이 됩니다.
};

void CreateUnit(enum Unit unit)
{
	switch (unit)
	{
	case SKELETON: printf("Create Skeleton\n");
		break;
	case SLIME: printf("Create Slime\n");
		break;
	case GOBLIN: printf("Create Goblin\n");
		break;
	default:
		break;
	}
}

int main()
{
#pragma region 포인터 배열

	//const char* string[3];
	//
	//// 8 byte 8 byte 8 byte
	//// [    ] [    ] [    ]

	//// "Blue" "Black" "Green"

	//string[0] = "Blue";
	//string[1] = "Black";
	//string[2] = "Green";

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("string[%d] : %p\n", i, string[i]);
	//	printf("string[%d] : %c\n", i, *string[i]);
	//	printf("string[%d] : %s\n\n", i, string[i]);
	//}

#pragma endregion

#pragma region 열거형

	/*CreateUnit(SKELETON);
	CreateUnit(SLIME);
	CreateUnit(GOBLIN);*/

#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	//int* ptr = malloc(sizeof(4));

	//*ptr = 999; // 값 넣기

	//printf("*ptr의 값 : %d\n", *ptr); // 999 출력
	//
	//free(ptr); // 초기화

	//printf("*ptr의 값 : %d\n", *ptr); // 쓰레기값 출력

	//ptr = NULL;

	//if (ptr == NULL)
	//{
	//	ptr = malloc(sizeof(4));
	//}

	//*ptr = 235;
	//// (주의) 초기화 후 값을 숫자를 넣으면 에러가 발생하지 않지만 해제된 HEAP에 값이 들어가게 되어 위험하다.
	//// NULL을 작성하여 문제를 예방한다.

	//printf("*ptr의 값 : %d\n", *ptr);

	//free(ptr);

#pragma endregion

	return 0;
}