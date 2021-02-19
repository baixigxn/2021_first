# 题目：

创建一个链表（1）


### 程序分析

- 不带头结点的头插法创建链表

  首先创建的结点会出现在整个链表的最末端，所以数据的写入是逆序的



### 主要代码

main.c

```c
//创建结点类型
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//不带头结点的头插法创建链表
LinkList LinkListCreate(int n){
	int i=0;
	LinkList head=NULL;
	Node *p;
	printf("请输入%d个整型数据作为链表结点的数据:\n",n);
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
//打印链表
void print(Node* L){
	while (L)
	{
		printf("%5d",L->data);
		L=L->next;
	}
}
int main(){
	int n;
	printf("请输入创建链表的节点数目：");
	scanf("%d",&n);
	LinkList L=LinkListCreate(n);
	printf("您创建的节点数据如下：\n");
	print(L);
	system("pause");
	return 0;
}
```



### 今日巩固

1. 链表的不带头结点的创建以及打印

