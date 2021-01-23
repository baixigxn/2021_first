# 题目：

输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数



### 程序分析

利用while语句，条件为输入的字符不为'\n'



### 主要代码

```c
void main(){
	char c;
	int letters=0,space=0,numbers=0,others=0;
	while ((c=getchar()) != '\n')
	{
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			letters++;
		} else if(c==' '){
			space++;
		} else if(c>='0'&&c<='9'){
			numbers++;
		} else{
			others++;
		}
	}
	printf("总共有字符：%d 空格：%d 数字:%d 其它字符：%d个",letters,space,numbers,others);
	system("pause");
}
```



### 今日巩固

1. getchar()函数，getchar函数从stdin更准确的说是从缓冲区中逐个读入字符，它是C语言专门为输入单个字符而提供的

2. getchar和putchar的区别： 

   1、getchar函数的目的是获取一个字符，属于读函数(输入函数)， putchar函数是输出一个字符，属于写函数(输出函数)。 

   2、getchar函数不需要参数，purchar函数需要一个整型的参数。 

   3、getchar函数在大多数情况下需要保存其返回值，作为后续使用。putchar函数除判断是否成功外，不需要关心其返回值。