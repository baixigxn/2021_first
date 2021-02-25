# 题目：

连接两个链表


### 程序分析

- 可以将后面的链表直接接在第一个链表后面，但是注意，删除第二个链表的头结点再进行删除



### 主要代码

main.c

```c
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
```

### 运行结果

![result](D:\GitHub\2021_first\基础巩固\C_45\result.PNG)

### 今日巩固

1. 链表的简单直接连接



