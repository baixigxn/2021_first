# 题目：

反向输出一个链表-递归


### 程序分析

- 只需要反向输出即可，所以我们可以使用栈的特点，进行递归调用

![process](D:\GitHub\2021_first\基础巩固\C_44\process.PNG)

### 主要代码

main.c

```c
typedef struct Node{
	int data;
	struct Node *next;
}Node,*LinkList;
//带头结点的尾插法创建链表
LinkList create(int n){
	LinkList head=(Node*)malloc(sizeof(Node));
	Node *p=head,*q;
	int i;
	printf("请输入链表中的结点元素值：\n");
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
//递归
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
	printf("请输入你要创建的链表结点长度：\n");
	int n;
	scanf("%d",&n);
	LinkList L=create(n);
	printf("当前链表的结点元素为：\n");
	Print(L);
	printf("递归逆序后链表的结点元素为：\n");
	reverse_2(L->next);
	system("pause");
	return 0;
}
```

### 运行结果

![result](D:\GitHub\2021_first\基础巩固\C_44\result.PNG)

### 今日巩固

1. 递归函数的简单书写



