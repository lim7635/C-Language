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


#pragma endregion

}