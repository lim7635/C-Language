#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� �������Դϴ�.

	//int data = 0;
	//int result = 0;

	//result = ++data;
	//result = data--;

	//printf("data�� �� : %d\n", data); // 0
	//printf("result�� �� : %d\n", result); // 1

	//result = data++;
	//result = --data;

	//printf("data�� �� : %d\n", data); // 0
	//printf("result�� �� : %d\n", result); // 0

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������ �����ϰ�
	// ���� ���� �����ڴ� ������ ������ ���� ���� ������ ���� ������ŵ�ϴ�.

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ
	// �ݺ��ϴ� �ݺ����Դϴ�.

	/*for (int i = 0; i < 5; i++)
	{
		printf("Hello World\n");
	}*/

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ���� �����ϰ� �Ǹ�
	// ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ������ �߻��մϴ�.

#pragma endregion

#pragma region for�� ���� ����
	
	// 1 ~ 5 ������ ���� ������� ����ϱ�(��������)
	/*for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", i);
	}*/
	
	// 1 ~ 5 ������ ���� ������� ����ϱ�(��������)
	/*for (int i = 5; i >= 1; i--)
	{
		printf("%d ", i);
	}*/

	// 1 ~ 10 ������ ��
	/*int value = 0;
	
	for (int i = 1; i <= 10; i++)
	{
		value = value + i;
	}

	printf("%d", value);*/

#pragma endregion

#pragma region ��ø for��

	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���ʿ� �ִ� �ݺ���\n");
		}

		printf("�ٱ��� �ִ� �ݺ���\n");
	}*/


#pragma endregion

#pragma region ������

	// 1 ~ 9��

	// 1 x 1 = 1
	// 2 x 3 = 6

	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}*/

#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	/*int count = 5;

	while (count > 0)
	{
		printf("Excution\n");
		count--;
	}*/

	// while���� ��� ������ �Ʒ��� ����Ǹ�,
	// �Ʒ��� �ִ� ��ɹ��� ������ �� ������ �ٽ� ���� �ִ�
	// ��ɹ����� ���ư��� �ݺ��ϴ� �����Դϴ�.

#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	/*int count = 0;

	do
	{
		printf("Login\n");
	}
	while (count > 3);*/

#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� ������� �ʰ�, �ݺ����� �̾ �����ϴ� ����Դϴ�.
	
	/*for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			continue;
		}

		printf("i�� �� : %d\n", i);

	}*/

	// �ݺ������� continue���� ������ �Ǹ�
	// �ٽ� ���������� ���ʴ�� �����մϴ�.

#pragma endregion

#pragma endregion

}