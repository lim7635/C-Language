#include <stdio.h>
#include <time.h>

void UpdateHPBar(int Life)
{
	for (int i = 0; i < Life; i++)
	{
		printf("��");
	}
}

void UpdateUI()
{
	printf("\n ��ǻ�Ͱ� ������ �ִ� �� : ");
}

int main()
{
#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� �����ϰ� ��ȯ�ϴ� �Լ��Դϴ�.

	// seed ������ ���� �ð��� ������
	// �ʴ� seed ���� ����ؼ� ��ȭ�Ǳ� ������
	// ������ ������ ������ ������ ���� ���� �� �ֽ��ϴ�.
	//srand(time(NULL)); // �ʴ� �������� ����

	//for (int i = 0; i < 5; i++)
	//{
	//	int seed = rand() % 10;
	//	{
	//		printf("seed�� �� : %d\n", seed);
	//	}
	//}

#pragma endregion

#pragma region UP DOWN GAME

	int Life = 5;

	srand(time(NULL));

	// 1. ��ǻ�� ������ 0 ~ 50 ������ ���� ���� �־��ݴϴ�.
	int Computer = rand() % 51;

	// 2. ��ǻ�Ͱ� ������ �ִ� ���� ���߱� ���� ���� ����
	int Answer = 0;

	while (1)
	{
		UpdateHPBar(Life); // HPBar�� ����ϴ� �Լ�
		UpdateUI(); // �Է��� ���� �� �ִ� �ؽ�Ʈ�� ����ϴ� �Լ�
		
		// ��ǻ�Ͱ� ������ �ִ� ���� �Է��մϴ�.
		scanf_s("%d", &Answer);

		system("cls");

		if (Answer == Computer)
		{
			printf("\n V i c t o r y");
			break;
		}
		else if (Answer < Computer)
		{
			Life--;
			printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
		}
		else if (Answer > Computer)
		{
			Life--;
			printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
		}
		
		if (Life <= 0)
		{
			printf("\nDefeat");
			break;
		}
	}

#pragma endregion

	return 0;
}
