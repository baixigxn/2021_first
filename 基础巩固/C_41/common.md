# 题目：

创建单链表（3）


### 程序分析

- 带头结点的头插法创建链表

  带有头结点的链表，头结点中的data中没有放置任何元素，头结点存储的地址就是链表首元素存储的地址。头插法顾名思义就是从链表的头部进行插入，因为从头部插入，所以是逆序的



### 主要代码

main.c

```c
//创建结点类型
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
LinkList CreateLinkList(int n){
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
```



### 今日巩固

1. 链表的带头结点头插法的创建以及打印

### 注意

打印出来的第一个地址元素不是程序错误，而是因为头结点的data中没有存放元素所致

