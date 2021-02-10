# 题目：

static作用

### static作用

(1)隐藏。当我们编辑多个文件时，所有未加static前缀的全局变量和函数都具有全局课件性
(2)保持变量容量的持久。存储在静态数据区的变量会在程序刚开始运行时就完成初始化，也是唯一的一次初始化，共有两种变量存储在静态存储区：全局变量和static变量，只不过和全局变量比起来，static可以控制变量的可见范围，static是用来隐藏的
(3)默认初始化为0。其实全局变量也具备这一属性，因为全局变量也存储在静态数据区。在静态数据区，内存中所有的字节默认值都是0x00，某些时候这一特点可以减少程序员的工作量，比如在初始化一个稀疏矩阵，我们可以一个一个把所有元素都置0，然后把不是0的几个元素赋值。如果定义成静态的，就省去了一开始置0的操作，再比如要把一个字符数组当字符串来用，但又觉得每次在字符数组末尾加“\0”太麻烦，如果把字符串定义成静态的，就省去了这个麻烦

### 主要代码

test.h

```
#include<stdio.h>
void msg();
void display();
```

demo.c

```
#include<stdio.h>
char a='A';//全局变量
void msg(){//全局函数
	printf("Hello\n");
}
static int n;
void display(){
	n++;
	printf("%d\n",n);
}
```

main.c

```c
#include "stdio.h"
#include "stdlib.h"
#include "test.h"
int fun(){
	static int count=10;//static变量.只执行过一次
	return count--;
}
int count=1;//全局变量
int b;//全局变量b
int main(){
	//作用一
	extern char a;//扩展的变量必须在使用前声明
	printf("%c",a);
	msg();
	display();
	//作用二
	printf("全局变量\tstatic变量\n");
	for (; count<=10 ; count++)
	{
		printf("%d\t\t%d\n",count,fun());
	}
	//作用三
	static char str[10];
	printf("全局变量b:%d;静态数组:(begin)%s(end)",b,str);
	system("pause");
	return 0;
}
```



### 今日巩固

1. 在C语言中，static的作用
2. 怎么写头文件并调用