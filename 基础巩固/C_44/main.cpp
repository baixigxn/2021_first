#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ���������һ������-�ݹ�
	���������ֻ��Ҫ����������ɣ��������ǿ���ʹ��ջ���ص㣬���еݹ����
*/
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//��ͷ����β�巨��������
LinkList create(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	Node *p=head,*q;
	int i;
	printf("�����������еĽ��Ԫ��ֵ��\n");
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
//�ݹ�
void reverse_2(LinkList L){
	if (L->next!=NULL)
	{
		reverse_2(L->next);
	}
	printf("%3d",L->data);
}
void Print(LinkList L){
	L=L->next;
	while(L){
		printf("%3d",L->data);
		L=L->next;
	}
	printf("\n");
}
int main(){
	printf("��������Ҫ�����������㳤�ȣ�\n");
	int n;
	scanf("%d",&n);
	LinkList L=create(n);
	printf("��ǰ����Ľ��Ԫ��Ϊ��\n");
	Print(L);
	printf("�ݹ����������Ľ��Ԫ��Ϊ��\n");
	reverse_2(L->next);
	system("pause");
	return 0;
}