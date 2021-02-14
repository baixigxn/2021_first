# 题目：

输入三个数a,b,c，按大小顺序输出，利用指针方法

## 程序分析

int *p;

表示这是int型的指针

int a;

*p=&a;//将变量a的地址赋值给指针p

&a表示取int型变量a的地址



### 主要代码

main.c

```c
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a,b,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	scanf("%d,%d,%d",p1,p2,p3);
	if (*p1>*p2)
	{
		swap(p1,p2);
	}
	if (a>c)
	{
		swap(p1,p3);
	}
	if(b>c)
	{
		swap(p2,p3);
	}
	printf("%d  %d  %d",a,b,c);
	system("pause");
	return 0;
}
```



### 今日巩固

1. 指针的基本使用：&表示取地址，*表示取指针存储的地址指向的值

