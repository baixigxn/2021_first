# 题目：

创建单链表（4）


### 程序分析

- 带头结点的尾插法创建链表

  尾插法顾名思义就是从节点的尾部进行插入，头结点不动，后面的元素依次加入，因为头结点的data中没有存放任何元素，故打印出来是任意存放的值



### 主要代码

main.c

```c
//创建结点类型
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//带有头结点的尾插法创建链表
LinkList CreateLinkList(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	Node *p;
	Node *temp=head;
	int i;
	for (i = 0; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		temp->next=p;
		temp=p;
	}
	temp->next=NULL;
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

1. 链表的带头结点尾插法的创建以及打印

### 注意

打印出来的第一个地址元素不是程序错误，而是因为头结点的data中没有存放元素所致

