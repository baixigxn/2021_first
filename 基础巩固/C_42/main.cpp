#include<stdio.h>
#include<stdlib.h>
/*
	题目：创建一个链表（4）
*/
typedef struct Node{
	int data;
	struct Node * next;
}Node,*LinkList;
//带有头结点的尾插法创建链表
LinkList CreateLinkList(int n){
	printf("请输入链表中各节点的元素值：\n");
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
	printf("请输入你要创建链表的节点数目：\n");
	scanf("%d",&n);
	LinkList L=CreateLinkList(n);
	printf("当前链表中存储的元素是：\n");
	Print(L);
	system("pause");
	return 0;
}