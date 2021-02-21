#include<stdio.h>
#include<stdlib.h>
/*
	题目：创建单链表（3）
*/
typedef struct Node{
	int data;
	struct Node * next;
}Node,*LinkList;
//带有头结点的头插法创建链表
LinkList CreateLinkList(int n){
	printf("请输入节点元素值：\n");
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
	printf("请输入你要创建链表的节点数目：\n");
	scanf("%d",&n);
	LinkList L=CreateLinkList(n);
	printf("目前链表中元素为：\n");
	Print(L);
	system("pause");
	return 0;
}