#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������һ������4��
*/
typedef struct Node{
	int data;
	struct Node * next;
}Node,*LinkList;
//����ͷ����β�巨��������
LinkList CreateLinkList(int n){
	printf("�����������и��ڵ��Ԫ��ֵ��\n");
	LinkList head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	Node *p;
	Node *temp=head;
	int i;
	for (i = 0; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		temp->next=p;
		temp=p;
	}
	temp->next=NULL;
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
	printf("��ǰ�����д洢��Ԫ���ǣ�\n");
	Print(L);
	system("pause");
	return 0;
}