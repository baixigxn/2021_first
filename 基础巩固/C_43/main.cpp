#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ���������һ������
	��������������Ǵ��������ʱ��ʹ��ͷ�巨������������˳���������ģ����ǿ����ڸ�����Ļ����Ͻ�������
*/
typedef struct Node{
	int data;
	struct Node* next;
}Node,*LinkList;
//����ͷ����β�巨��������
LinkList creste(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	Node *p=head;
	Node *q;
	int i;
	printf("�����������Ԫ��ֵ��\n");
	for (i = 0; i < n; i++)
	{
		q=(Node*)malloc(sizeof(Node));
		scanf("%d",&q->data);
		p->next=q;
		p=q;
	}
	p->next=NULL;
	return head;
}
//ԭ�����ã������Ԫ��ʹ��ͷ�巨��ʹ������
LinkList reverse(LinkList L){
	Node *prep;
	Node *p,*q;
	p=L->next;
	q=p->next;
	p->next=NULL;
	while (q)
	{
		prep=q;
		q=q->next;
		prep->next=p;
		p=prep;
	}
	L->next=prep;
	return L;
}
void Print(LinkList L){
	L=L->next;
	while (L)
	{
		printf("%3d",L->data);
		L=L->next;
	}
	printf("\n");
}
int main(){
	printf("��������Ҫ������������:\n");
	int n;
	scanf("%d",&n);
	LinkList L=creste(n);
	printf("��ǰ������������£�\n");
	Print(L);
	printf("����Ԫ�����ú��ǣ�\n");
	Print(reverse(L));
	system("pause");
	return 0;
}