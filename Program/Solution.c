#include <stdio.h>

void main()
{
	// main 함수는 프로그램의 진입점 역할을 수행합니다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를
	// 정해주는 것입니다.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며,
	// 자료형의 크기는 바이트 단위로 이루어져 있습니다.

	// char  -> 1 byte 문자형
	// short -> 2 byte 정수형
	// int   -> 4 byte 정수형
	// long  -> 4 byte 정수형

	// float  -> 4 byte 실수형
	// double -> 8 byte 실수형
	// long double -> 8 ~ 16 byte 실수형

	// 자료형의 경우 자료형에 따라 저장할 수 있는 값의 종류와
	// 범위가 결정되어 있습니다.
#pragma endregion

#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

	// ;(세미 콜론) : 하나의 문장의 끝내는 기호입니다.
	int data = 100;

	// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀌며, 여러 개의
	// 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.

	data = 999;
	// 변수는 값이 계속 바뀔 수 있으며, 변수를 선언하고 해당하는 변수에
	// 값을 저장하려면 대입 연산자(=)를 통해 값을 저장할 수 있습니다.
#pragma endregion

#pragma region 단축키
	// Ctrl + [K] + [C] = 주석 추가
	// Ctrl + [K] + [U] = 주석 해제
	// Alt + 화살표 위 or 아래 = 줄 위치 변경
#pragma endregion

#pragma region 변수의 이름 규칙
	 // 1. 변수의 이름은 숫자로 시작할 수 없습니다.
	 // ex) int 5day;

	 // 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	 // ex) int float;

	 // 3. 변수의 경우 이미 중복된 변수의 이름을 허용하지 않지만,
	 // 변수의 이름을 대문자와 소문자로 구별하여 사용할 수 있습니다.
	 // ex) int hp = 100;
	 // ex) int HP = 200;

	 // 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	 // ex) int count Down;

	 // 5. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있습니다.
	 // ex) int count_Down = 5;
	 // ex) int money$ = 100;
#pragma endregion

#pragma region printf() 함수
	 // 일련의 데이터를 형식 문자열에 지정되어 있는
	 // 형태로 출력되는 함수입니다.

	char grade = 'A';
	int attack = 45;
	// 표준 출력 함수의 경우 출력할 문자열 사이에 변수를
	// 출력하려면 서식이라는 특수한 문자를 받도록 설정해야합니다.
	printf("Hello World~\n");

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	// 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서부터 시작합니다.
	printf("%c\n", grade);

	printf("%c %d\n", grade, attack);

	// "%c" : 하나의 문자를 표현하는 서식 지정자
	// "%d" : 하나의 정수를 표현하는 서식 지정자
#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간입니다.

	//const int data = 100;

	//// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며
	//// 한 번 저장된 값은 더 이상 변경할 수 없습니다.

	//// ex) data = 999;

	//// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	//// 리터럴 상수라고 하며, 메모리 공간을 가지고 있는 상수를
	//// 심볼릭 상수라고 합니다.

	//const float pi = 3.14f;

	//printf("pi의 값 : %f\n", pi);

	//// %f : 실수(float)를 표현하는 서식 지정자

	//// 정수형 리터럴 상수는 저장하는 값의 범위가 크지 않으면
	//// int 자료형으로 저장되며, 실수형 리터럴 상수는 double
	//// 자료형으로 저장됩니다.

	//float value = 3.1415926535;

	//printf("value의 값 : %.10lf\n", value);

	// "%lf" : 실수(double)를 표현하는 서식 지정자

	// printf() 함수로 소수를 출력할 때
	// 4 byte 크기의 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// 8 byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기합니다.

#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로
	// 논리 계산을 수행하는 단위입니다.

	char character = 10;

	// <10 진수를 2 진수로 변환하는 과정?

	// 10 진수를 1이 될 때까지 2로 계속 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬해줍니다.

	// 10 ----> [0][0][0][0][1][0][1][0]

	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.

	// <2 진수를 10 진수로 변환하는 과정>
	// 1 byte에 2 진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10 진수로 나타냅니다.

#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.

	// <AND 연산자>
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	char x = 10; // 0000 1010
	char y = 6;  // 0000 0110

	printf("x와 y를 AND 연산한 결과 : %d\n", x & y); // 2

	// <OR 연산자>
	// 두 개의 피연산 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.
	printf("x와 y를 OR 연산한 결과 : %d\n", x | y); // 14


	// <XOR 연산자>
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자입니다.
	printf("x와 y를 XOR 연산한 결과 : %d\n", x ^ y); // 12

	// <NOT 연산자>
	// 한 개의 비트를 반전하는 연산자입니다.
	printf("x 변수를 NOT 연산한 결과 : %d\n", ~x); // 1111 0101

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에 1이 있다면 값은 음수가 됩니다.

#pragma endregion

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정입니다.

	/*
	char data = 127 + 3;

	printf("data 변수의 값 : %d", data);
	*/

	// 오버플로우는 최댓값보다 더 많은 값을 저장하게 되면
	// 최솟값부터 최댓값을 넘어간 만큼 다시 계산합니다.



#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정입니다.

	// char alphabet = -128 - 1;

	// printf("alphabet 변수의 값 : %d", alphabet);

	// 언더플로우는 최솟값보다 더 작은 값을 저장하게 되면 최댓값부터
	// 최솟값을 넘어간 만큼 다시 계산합니다.
#pragma endregion

#pragma region 실수를 저장하는 방법

	//// 부동 소수점이란?
	//// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법입니다.
	//float attack = 6.25f;

	//printf("attack 변수의 값 : %.16f\n", attack);

	//// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않습니다.
	//double health = 6.1333333333333333;

	//printf("health 변수의 값 : %.16lf\n", health);

	//// <실수 형태의 10 진수를 2 진수로 변환하는 과정>
	//// 10 진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한 다음
	// 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬합니다.

#pragma endregion

#pragma region 조건문이란?
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.


#pragma region 관계 연산자
	// 두개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타내는 연산자입니다.

	// int result1 = 10 >  5; // 10이 5보다 크다. (참)
	// int result2 = 10 <  5; // 10이 5보다 작다. (거짓)
	// int result3 = 10 >= 5; // 10이 5보다 크거나 같다. (참)
	// int result4 = 10 <= 5; // 10이 5보다 작거나 같다. (거짓)
	// int result5 = 10 == 5; // 10이 5와 같다. (거짓)
	// int result6 = 10 != 5; // 10이 5와 같지 않다. (참)

	// printf("result1 변수의 값 : %d\n", result1);
	// printf("result2 변수의 값 : %d\n", result2);
	// printf("result3 변수의 값 : %d\n", result3);
	// printf("result4 변수의 값 : %d\n", result4);
	// printf("result5 변수의 값 : %d\n", result5);
	// printf("result6 변수의 값 : %d\n", result6);

	// A < B  : A가 B보다 작다.
	// A > B  : A가 B보다 크다.
	// A <= B : A가 B보다 작거나 같다.
	// A >= B : A가 B보다 크거나 같다.
	// A == B : A와 B가 같다.
	// A != B : A와 B가 같지 않다.

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다.

	/*int monsterHP = 0;

	if (monsterHP <= 0)
	{
		printf("Monster Destroy\n");
	}*/

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.

#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문입니다.

	/*int level = 98;

	if (level == 99)
	{
		printf("승급 가능");
	}
	else if (level != 99)
	{
		printf("승급 불가능");
	}*/

	// else if문의 경우 여러 개를 더 추가해서 사용할 수 있습니다.

#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면 실행되는 명령문입니다.

	/*char grade = 'C';

	if (grade == 'A')
	{
		printf("A 등급");
	}
	else if (grade == 'B')
	{
		printf("B 등급");
	}
	else
	{
		printf("예외 등급");
	}*/

	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장
	// 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region 조건 연산자(실습 문제 : 사분면)
	// AND 연산자 : if(조건1 && 조건2)
	// OR  연산자 : if(조건1 || 조건2)
	// NOT 연산자 : if(!조건)

	/*int x = 6;
	int y = 1;

	if (x > 0 && y > 0)
	{
		printf("제 1 사분면");
	}
	else if (x < 0 && y > 0)
	{
		printf("제 2 사분면");
	}
	else if (x < 0 && y < 0)
	{
		printf("제 3 사분면");
	}
	else if (x > 0 && y < 0)
	{
		printf("제 4 사분면");
	}
	else if (y == 0 && x != 0)
	{
		printf("x 절편");
	}
	else if (x == 0 && y != 0)
	{
		printf("y 절편");
	}
	else
	{
		printf("원점");
	}*/

#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	// case    : 경우
	// default : 예외

	//int select = 1;

	//// break문이란?
	//// 특정한 지점에서 분기를 탈출하는 제어문입니다.
	//
	//switch (select)
	//{
	//case 0: printf("타이틀 화면\n");
	//	break;
	//case 1: printf("마을 이동\n");
	//	break;
	//case 2: printf("던전 이동\n");
	//	break;
	//default: printf("잘못된 값이 들어왔습니다.\n");
	//	
	//// switch문은 해당 조건이 완료되었을 때, break문이 없으면
	//// 나머지 밑에 있는 case문까지 계속 실행시키다가 종료합니다.
	//}

	// switch문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동합니다.

	/*float time = 5.75f;

	switch (time)
	{
		case 5.75f: printf("time : %d", time);
	}*/

	// switch문에는 조건식으로 실수형 변수와 실수형 상수를 사용할 수 없습니다.(부동 소수점 때문)

#pragma endregion


#pragma endregion

}