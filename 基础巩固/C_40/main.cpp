#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����������
*/
typedef struct Node{
	int data;
	struct Node* next;
}Node,*LinkList;
//����ͷ����β�巨��������
LinkList LinkListCreate(int n){
	printf("������ڵ�Ԫ��ֵ��\n");
	Node *p;
	Node *first=(Node*)malloc(sizeof(Node));
	scanf("%d",&first->data);
	Node *temp=first;
	int i=1;
	for (; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		temp->next=p;
		temp=p;
	}
	temp->next=NULL;
	return first;
}
void Print(LinkList L){
	while (L)
	{
		printf("%3d",L->data);
		L=L->next;
	}
}
int main(){
	printf("����������Ҫ����������Ľڵ���Ŀ��\n");
	int n;
	scanf("%d",&n);
	LinkList L=LinkListCreate(n);
	printf("���������еĽڵ�˳���ǣ�\n");
	Print(L);
	system("pause");
	return 0;
}