#include <stdio.h>

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ �Ѿ ������ �����ϴ� �����Դϴ�.

	/*
	char data = 127 + 3;

	printf("data ������ �� : %d", data);
	*/

	// �����÷ο�� �ִ񰪺��� �� ���� ���� �����ϰ� �Ǹ�
	// �ּڰ����� �ִ��� �Ѿ ��ŭ �ٽ� ����մϴ�.



#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �Ѿ ������ �����ϴ� �����Դϴ�.

	// char alphabet = -128 - 1;

	// printf("alphabet ������ �� : %d", alphabet);

	// ����÷ο�� �ּڰ����� �� ���� ���� �����ϰ� �Ǹ� �ִ񰪺���
	// �ּڰ��� �Ѿ ��ŭ �ٽ� ����մϴ�.
#pragma endregion

#pragma region �Ǽ��� �����ϴ� ���
	
	//// �ε� �Ҽ����̶�?
	//// �Ҽ����� ��ġ�� �������� �ʰ�, �Ҽ����� ��ġ�� ��Ÿ���� ����Դϴ�.
	//float attack = 6.25f;

	//printf("attack ������ �� : %.16f\n", attack);

	//// �����ο� �ִ� ��Ʈ �߿��� ���� ���ʿ� �ִ� ���� ǥ������ �ʽ��ϴ�.
	//double health = 6.1333333333333333;

	//printf("health ������ �� : %.16lf\n", health);

	//// <�Ǽ� ������ 10 ������ 2 ������ ��ȯ�ϴ� ����>
	//// 10 ���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ���� ����
	// ���� ����� ���� �κ��� ������ �Ʒ��� ������� �����մϴ�.

#pragma endregion

#pragma region ���ǹ��̶�?
	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�.


#pragma region ���� ������
	// �ΰ��� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	// int result1 = 10 >  5; // 10�� 5���� ũ��. (��)
	// int result2 = 10 <  5; // 10�� 5���� �۴�. (����)
	// int result3 = 10 >= 5; // 10�� 5���� ũ�ų� ����. (��)
	// int result4 = 10 <= 5; // 10�� 5���� �۰ų� ����. (����)
	// int result5 = 10 == 5; // 10�� 5�� ����. (����)
	// int result6 = 10 != 5; // 10�� 5�� ���� �ʴ�. (��)

	// printf("result1 ������ �� : %d\n", result1);
	// printf("result2 ������ �� : %d\n", result2);
	// printf("result3 ������ �� : %d\n", result3);
	// printf("result4 ������ �� : %d\n", result4);
	// printf("result5 ������ �� : %d\n", result5);
	// printf("result6 ������ �� : %d\n", result6);

	// A < B  : A�� B���� �۴�.
	// A > B  : A�� B���� ũ��.
	// A <= B : A�� B���� �۰ų� ����.
	// A >= B : A�� B���� ũ�ų� ����.
	// A == B : A�� B�� ����.
	// A != B : A�� B�� ���� �ʴ�.

#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	/*int monsterHP = 0;

	if (monsterHP <= 0)
	{
		printf("Monster Destroy\n");
	}*/

	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�.

#pragma endregion

#pragma region else if��
	// if���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	/*int level = 98;

	if (level == 99)
	{
		printf("�±� ����");
	}
	else if (level != 99)
	{
		printf("�±� �Ұ���");
	}*/
	
	// else if���� ��� ���� ���� �� �߰��ؼ� ����� �� �ֽ��ϴ�.

#pragma endregion

#pragma region else��
	// if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ��Դϴ�.
	
	/*char grade = 'C';

	if (grade == 'A')
	{
		printf("A ���");
	}
	else if (grade == 'B')
	{
		printf("B ���");
	}
	else
	{
		printf("���� ���");
	}*/

	// if���� ����� ��� ���ǹ��� ������ ���� �� ����
	// ���� �ִ� ���ǹ��� ����˴ϴ�.

#pragma endregion

#pragma region ���� ������(�ǽ� ���� : ��и�)
	// AND ������ : if(����1 && ����2)
	// OR  ������ : if(����1 || ����2)
	// NOT ������ : if(!����)
	
	/*int x = 6;
	int y = 1;
	
	if (x > 0 && y > 0)
	{
		printf("�� 1 ��и�");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2 ��и�");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3 ��и�");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4 ��и�");
	}
	else if (y == 0 && x != 0)
	{
		printf("x ����");
	}
	else if (x == 0 && y != 0)
	{
		printf("y ����");
	}
	else
	{
		printf("����");
	}*/

#pragma endregion

#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.
	
	// case    : ���
	// default : ����

	//int select = 1;

	//// break���̶�?
	//// Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.
	//
	//switch (select)
	//{
	//case 0: printf("Ÿ��Ʋ ȭ��\n");
	//	break;
	//case 1: printf("���� �̵�\n");
	//	break;
	//case 2: printf("���� �̵�\n");
	//	break;
	//default: printf("�߸��� ���� ���Խ��ϴ�.\n");
	//	
	//// switch���� �ش� ������ �Ϸ�Ǿ��� ��, break���� ������
	//// ������ �ؿ� �ִ� case������ ��� �����Ű�ٰ� �����մϴ�.
	//}

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵��մϴ�.

	/*float time = 5.75f;

	switch (time)
	{
		case 5.75f: printf("time : %d", time);
	}*/

	// switch������ ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ����� �� �����ϴ�.(�ε� �Ҽ��� ����)

#pragma endregion


#pragma endregion

}