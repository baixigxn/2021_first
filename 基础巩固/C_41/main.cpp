#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������������3��
*/
typedef struct Node{
	int data;
	struct Node * next;
}Node,*LinkList;
//����ͷ����ͷ�巨��������
LinkList CreateLinkList(int n){
	printf("������ڵ�Ԫ��ֵ��\n");
	LinkList head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	Node *p;
	int i;
	for (i = 0; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		p->next=head->next;
		head->next=p;
	}
	return head;
}
void Print(LinkList L){
	while (L)
	{
		printf("%3d",L->data);
		L=L->next;
	}
}
int main(){
	int n;
	printf("��������Ҫ��������Ľڵ���Ŀ��\n");
	scanf("%d",&n);
	LinkList L=CreateLinkList(n);
	printf("Ŀǰ������Ԫ��Ϊ��\n");
	Print(L);
	system("pause");
	return 0;
}