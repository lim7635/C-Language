#include <stdio.h>
#include <math.h> // ���� ���� ���̺귯��

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region ����ü
	// �������� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

//	struct Player
//	{
//		// ����ü ũ���� ��� ��� ������ ������ ����
//		// �޸��� ũ�Ⱑ �ٸ��� ������ �� �ֽ��ϴ�.
//		
//		char blood;     // 1 byte
//		int health;     // 4 byte
//		float attack;   // 4 byte
//		double defense; // 8 byte (ũ�Ⱑ ���� �ͺ��� ū �������)
//
//		// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�
//		// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
//
//	};
//
//	struct Player player = {'B', 75, 5.5f};
//
//	/*player.attack = 10.5f;
//	player.blood = 'A';
//	player.health = 100;*/
//
//	printf("player.attack�� �� : %f\n", player.attack);
//	printf("player.blood�� �� : %c\n", player.blood);
//	printf("player.health�� �� : %d\n", player.health);
//
//#pragma region ����Ʈ �е�
//	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
//	// �����Ϸ��� ���������� ��Ͽ� ���߾�
//	// ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.
//
//
//	printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player)); // 24 byte

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿���
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion

#pragma region �ǽ� ���� : �� �� ������ �Ÿ�
	// ex) printf("��Ʈ 25 : %lf", sqrt(25));
	// ex) printf("2�� 3���� : %lf", pow(2, 3));

	// �� �� ������ �Ÿ��� 5.0 ���϶�� ���� �����Դϴ�.(�ƴ� ��� ���� ������ �ƴմϴ�.)

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
		printf("���� �����Դϴ�.");
	}
	else
	{
		printf("���� ������ �ƴմϴ�.");
	}*/

#pragma endregion

#pragma region �ڱ� ���� ����ü

	//struct Node* currentNode = NULL;
	//
	//struct Node node1 = { 10, NULL };
	//struct Node node2 = { 20, NULL };
	//struct Node node3 = { 30, NULL };
	//
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;

	///*printf("node1.data : %d\n", node1.data);
	//printf("node2.data : %d\n", node2.data);
	//printf("node3.data : %d\n", node3.data);*/

	//currentNode = &node1;

	//while (currentNode != NULL)
	//{
	//	printf("currentNode.data = %d\n", currentNode->data);
	//	currentNode = currentNode->next;
	//}

#pragma endregion


#pragma endregion

	return 0;
}