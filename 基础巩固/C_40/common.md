# 题目：

创建一个链表（2）


### 程序分析

- 不带头结点的尾插法创建链表

  这个是按照顺序插入的，尾插法，顾名思义就是从第一个节点的尾部插入，创建第一个节点之后，在循环中让前面的节点的next指针存储后面节点的地址，最后别忘了设置尾节点的next指针为NULL



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
	printf("请输入节点元素值：\n");
	Node *p;
	Node *first=(Node*)malloc(sizeof(Node));
	scanf("%d",&first->data);
	Node *temp=first;
	int i=1;
	for (; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		temp->next=p;
		temp=p;
	}
	temp->next=NULL;
	return first;
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

1. 链表的不带头结点尾插法的创建以及打印

