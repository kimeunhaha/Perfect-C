#include"20160607.h"

//노드를 생성하는 함수
LINK createNode(char *name)
{
	LINK cur;
	cur = (NODE *) malloc(sizeof(NODE));
	if(cur == NULL)
	{
		printf("노드 생성을 위한 메모리 할당에 문제가 있습니다.\n");
		return NULL;
	}
	//언어 이름을 저장할 문자 배열을 동적 할당하여 name에 저장
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
		printf("%3d번째 노드는 %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;
	}
	return cnt;
}