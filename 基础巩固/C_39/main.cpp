#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������һ������
*/
//�����������
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//����ͷ����ͷ�巨��������
LinkList LinkListCreate(int n){
	int i=0;
	LinkList head=NULL;
	Node *p;
	printf("������%d������������Ϊ�����������:\n",n);
	for (;i<n;i++)
	{
		p=(Node*)malloc(sizeof(Node));
		if (NULL==p)
		{
			return 0;
		}
		scanf("%d",&p->data);
		p->next=head;
		head=p;
	}
	return head;
}
//��ӡ����
void print(Node* L){
	while (L)
	{
		printf("%5d",L->data);
		L=L->next;
	}
}
int main(){
	int n;
	printf("�����봴������Ľڵ���Ŀ��");
	scanf("%d",&n);
	LinkList L=LinkListCreate(n);
	printf("�������Ľڵ��������£�\n");
	print(L);
	system("pause");
	return 0;
}