#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��������������
*/
//�����������
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//��ӡ����
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
//�ϲ�����
LinkList combine(LinkList L1,LinkList L2){
	LinkList head=L1;
	while (head->next)
		head=head->next;
	head->next=L2->next;
	return L1;
}
int main(void){
	printf("�����������ֵ5����㣺\n");
	LinkList L1=create(5);
	printf("�����������ֵ4����㣺\n");
	LinkList L2=create(4);
	printf("Ŀǰ�ĵ�һ�������ǣ�\n");
	print(L1);
	printf("Ŀǰ�ĵ�һ�������ǣ�\n");
	print(L2);
	printf("�ϲ���������ǣ�\n");
	print(combine(L1,L2));
	system("pause");
	return 0;
}