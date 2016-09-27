#include"20160607.h"

//��带 �����ϴ� �Լ�
LINK createNode(char *name)
{
	LINK cur;
	cur = (NODE *) malloc(sizeof(NODE));
	if(cur == NULL)
	{
		printf("��� ������ ���� �޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		return NULL;
	}
	//��� �̸��� ������ ���� �迭�� ���� �Ҵ��Ͽ� name�� ����
	cur->name = (char *) malloc(sizeof(char) * (strlen(name)+1));
	strcpy(cur->name, name);
	cur->next = NULL;

	return cur;
}
LINK append(LINK head, LINK cur)
{
	LINK nextNode = head;
	if(head == NULL)
	{
		head = cur;
		return head;
	}
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	return head;

}
int printList(LINK head)
{
	int cnt = 0;
	LINK nextNode = head;
	while(nextNode != NULL)
	{
		printf("%3d��° ���� %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;
	}
	return cnt;
}