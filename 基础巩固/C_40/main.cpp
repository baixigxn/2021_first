#include<stdio.h>
#include<stdlib.h>
/*
	题目：创建链表
*/
typedef struct Node{
	int data;
	struct Node* next;
}Node,*LinkList;
//不带头结点的尾插法创建链表
LinkList LinkListCreate(int n){
	printf("请输入节点元素值：\n");
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
	printf("请输入你想要创建的链表的节点数目：\n");
	int n;
	scanf("%d",&n);
	LinkList L=LinkListCreate(n);
	printf("现在链表中的节点顺序是：\n");
	Print(L);
	system("pause");
	return 0;
}