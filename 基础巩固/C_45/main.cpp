#include<stdio.h>
#include<stdlib.h>
/*
	题目：连接两个链表
*/
//创建结点类型
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//打印链表
void print(LinkList L){
	L=L->next;
	while (L)
	{
		printf("%3d",L->data);
		L=L->next;
	}
	printf("\n");
}
LinkList create(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	Node *p=head,*q;
	int i;
	for (i = 0; i <n; i++)
	{
		q=(Node*)malloc(sizeof(Node));
		scanf("%d",&q->data);
		p->next=q;
		p=q;
	}
	p->next=NULL;
	return head;
}
//合并链表
LinkList combine(LinkList L1,LinkList L2){
	LinkList head=L1;
	while (head->next)
		head=head->next;
	head->next=L2->next;
	return L1;
}
int main(void){
	printf("请输入链表的值5个结点：\n");
	LinkList L1=create(5);
	printf("请输入链表的值4个结点：\n");
	LinkList L2=create(4);
	printf("目前的第一个链表是：\n");
	print(L1);
	printf("目前的第一个链表是：\n");
	print(L2);
	printf("合并后的链表是：\n");
	print(combine(L1,L2));
	system("pause");
	return 0;
}