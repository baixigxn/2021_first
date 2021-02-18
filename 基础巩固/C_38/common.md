# 题目：

写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度


### 程序分析

在C语言中，有两个函数可以在控制台（显示器）上输出字符串，它们分别是：

- puts()：输出字符串并自动换行，该函数只能输出字符串。
- printf()：通过格式控制符`%s`输出字符串，不能自动换行。除了字符串，printf() 还能输出其他类型的数据。



### 主要代码

main.c

```c
int fun(char *str){
	int len=0;
	while (*str!='\0')
	{
		len++;
		str++;
	}
	return len;
}
int main(void){
	char str[100];
	char *p=str;
	printf("请输入一个字符串\n");
	scanf("%s",p);
	//gets(str);
	puts(str);
	printf("\n长度是：%d",fun(p));
	system("pause");
	return 0;
}
```



### 今日巩固

1. int、char、float 等类型的变量用于 scanf() 时都要在前面添加&，而数组或者字符串用于 scanf() 时不用添加&，它们本身就会转换为地址

2. scanf() 和 gets() 是有区别的：

   - scanf() 读取字符串时以空格为分隔，遇到空格就认为当前字符串结束了，所以无法读取含有空格的字符串。

   - gets() 认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束，所以，不管输入了多少个空格，只要不按下回车键，对 gets() 来说就是一个完整的字符串。换句话说，gets() 用来读取一整行字符串。

     
