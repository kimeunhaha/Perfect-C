#include "20160607.h"  //������ ������ϸ�

LINK createNode(char *name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	char name[30];
	LINK head = NULL;
	LINK cur;

	printf("�̸��� �Է��ϰ� Enter�� ��������. >> \n");
	while(gets_s(name,30) != NULL)
	{
		cur = createNode(name);  //��� ���� �Ҵ�
		if(cur ==NULL)exit(1);   //�� �ڿ� ��� �߰�
		head = append(head, cur); //���� ����Ʈ ��� ���
		printList(head);
	}
	return 0;


}