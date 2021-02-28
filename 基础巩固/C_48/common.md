# 题目：

字符串排序


### 程序分析

- 使用二维数组来实现



### 主要代码

main.c

```c
int main(void){
	int i,j,index;
	char str[5][80],p[80]; 
	printf("Please input five chars\n");
 	scanf("%s",&str[0]);
	scanf("%s",&str[1]);
	scanf("%s",&str[2]);
	scanf("%s",&str[3]);
	scanf("%s",&str[4]);
	for(i=0;i<4;i++)
	{
		index=i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(str[index],str[j])>0)
			{
				index=j;
			}
		} 
		strcpy(p,str[index]);  
		strcpy(str[index],str[i]);
		strcpy(str[i],p);
	}
	printf("After sorted:\n");
 	for(i=0;i<5;i++)
	{
 		printf("%s\n",str[i]);
	}

	system("pause");
	return 0;
}
```



### 今日巩固

1. 原型：int strcmp(const char* str1,const char* str2)

   strcmp函数，存在于头文件string.h中，会根据ASCII编码一次比较str1和str2的每一个字符，直至出现不相等的字符，或者字符串末尾（遇见\0）

2. 原型：char *strcpy(char *dst,const char *src)

   strcpy函数，存在于头文件string.h中，用于复制字符串，并且它不仅复制字符串内容之外，还会复制字符串的结束字符，const修饰：源字符串参数用const修饰，防止修改源字符串

   



