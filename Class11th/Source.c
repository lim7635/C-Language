#include <stdio.h>
#include <math.h> // 수학 관련 라이브러리

int main()
{
#pragma region 구조체
	// 여러개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

//	struct Player
//	{
//		// 구조체 크기의 경우 멤버 변수의 순서에 따라
//		// 메모리의 크기가 다르게 설정될 수 있습니다.
//		
//		char blood;     // 1 byte
//		int health;     // 4 byte
//		float attack;   // 4 byte
//		double defense; // 8 byte (크기가 작은 것부터 큰 순서대로)
//
//		// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로
//		// 구조체 내부에 있는 데이터를 초기화할 수 없습니다.
//
//	};
//
//	struct Player player = {'B', 75, 5.5f};
//
//	/*player.attack = 10.5f;
//	player.blood = 'A';
//	player.health = 100;*/
//
//	printf("player.attack의 값 : %f\n", player.attack);
//	printf("player.blood의 값 : %c\n", player.blood);
//	printf("player.health의 값 : %d\n", player.health);
//
//#pragma region 바이트 패딩
//	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
//	// 컴파일러가 레지스터의 블록에 맞추어
//	// 바이트를 패딩해주는 최적화 작업입니다.
//
//
//	printf("Player 구조체의 크기 : %d\n", sizeof(struct Player)); // 24 byte

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서
	// 크기가 가장 큰 자료형의 배수가 되도록 정렬합니다.

#pragma endregion

#pragma region 실습 문제 : 두 점 사이의 거리
	// ex) printf("루트 25 : %lf", sqrt(25));
	// ex) printf("2의 3제곱 : %lf", pow(2, 3));

	// 두 점 사이의 거리가 5.0 이하라면 공격 범위입니다.(아닐 경우 공격 범위가 아닙니다.)

	/*struct Character
	{
		int x;
		int y;
	};

	struct Enemy
	{
		int x;
		int y;
	};

	struct Character character = { 0, 0 };
	struct Enemy enemy = { 3, 4 };

	double D = sqrt(pow(character.x - enemy.x, 2) + pow(character.y - enemy.y, 2));

	if (D <= 5.0f)
	{
		printf("공격 범위입니다.");
	}
	else
	{
		printf("공격 범위가 아닙니다.");
	}*/

#pragma endregion

	return 0;
}