# 题目：

反向输出一个链表-原地逆置


### 程序分析

- 在我们创建链表的时候使用头插法创建的链表，其顺序就是逆序的，我们可以在该链表的基础上进行逆置



### 主要代码

main.c

```c
typedef struct Node{
	int data;
	struct Node* next;
}Node,*LinkList;
//带有头结点的尾插法创建链表
LinkList creste(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	Node *p=head;
	Node *q;
	int i;
	printf("请输入个结点的元素值：\n");
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
//原地逆置（后面的元素使用头插法，使其逆序）
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
	printf("请输入你要创建的链表长度:\n");
	int n;
	scanf("%d",&n);
	LinkList L=creste(n);
	printf("当前链表的数据如下：\n");
	Print(L);
	printf("链表元素逆置后是：\n");
	Print(reverse(L));
	system("pause");
	return 0;
}
```



### 今日巩固

1. 再次巩固了链表的头插法的创建过程



