#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region 자기 참조 구조체

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

	return 0;
}
