#include <stdio.h>

void main()
{
#pragma region ������
	// �޸��� �ּҰ��� ������ �� �ִ� �����Դϴ�.

	//int data = 10;
	//float pi = 3.14f;

	//int* ptr = NULL;
	//// 8 byte ������ [NULL]�� ���� ( * ptr = 8 byte, NULL = �ʱ�ȭ)

	//// ������ ������ �ڽ��� �޸� ������ ������ ������
	//// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ�
	//// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	//ptr = &data;
	//// ptr ���� �� = data ���� �޸� �ּ�

	//// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	//// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	//// �����Ͱ� ����Ű�� �޸��� �ڷ������� �������־�� �մϴ�.

	//printf("data ������ �޸� �ּ� : %p\n", &data);
	//printf("ptr ������ �� : %p\n", ptr);
	//printf("ptr ������ �޸� �ּ� : %p\n", &ptr);

	//printf("data ������ �� : %d\n", data);
	//printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

	//// ������ ������ ������ �����ϱ� ���� �ּҰ��� ������
	//// ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	//ptr = &pi;

	//printf("pi ������ �� : %f\n", pi);
	//printf("ptr ������ ����Ű�� �� : %f\n", *ptr);

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������
	// �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region sizeof ������
	// �ǿ������� ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� �������Դϴ�.

	int* pointer = NULL;

	printf("char �ڷ����� ũ�� : %d\n",    sizeof(char));
	printf("short �ڷ����� ũ�� : %d\n",   sizeof(short));
	printf("int �ڷ����� ũ�� : %d\n",     sizeof(int));
	printf("long �ڷ����� ũ�� : %d\n",    sizeof(long));
	printf("float �ڷ����� ũ�� : %d\n",   sizeof(float));
	printf("double �ڷ����� ũ�� : %d\n",  sizeof(double));
	printf("pointer �ڷ����� ũ�� : %d\n", sizeof(pointer));

#pragma endregion

}