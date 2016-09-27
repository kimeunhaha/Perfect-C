#include "20160607.h"  //생성한 헤더파일명

LINK createNode(char *name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	char name[30];
	LINK head = NULL;
	LINK cur;

	printf("이름을 입력하고 Enter를 누르세요. >> \n");
	while(gets_s(name,30) != NULL)
	{
		cur = createNode(name);  //노드 동적 할당
		if(cur ==NULL)exit(1);   //맨 뒤에 노드 추가
		head = append(head, cur); //연결 리스트 모두 출력
		printList(head);
	}
	return 0;


}