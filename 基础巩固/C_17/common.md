# 题目：

打印出如下图案（菱形）
![image-20210128200223741](C:\Users\lenovo\AppData\Roaming\Typora\typora-user-images\image-20210128200223741.png)



### 程序分析

1. 可以把图形分成上下两部分来看待，前四行一个规律，后三行一个规律，利用双重for循环，第一层控制行，第二层控制列
2. 我们可以把行的打印单独通过函数写出来，把图形分解，分行打印出来



### 主要代码

```c
void PrintLine(int blank_num,int star_num);
void PrintStar(int n);
int main(){
	PrintStar(4);
	system("pause");
	return 0;
}
void PrintLine(int blank_num,int star_num){
	int i=0;
	for (; i < blank_num; i++)
	{
		printf("\t");
	}
	for (i = 0; i < star_num; i++)
	{
		printf("*");
		printf("\t");
	}
	printf("\n");
}
void PrintStar(int n){
	int i=1;
	//上半部分
	for (i=1; i <= n; i++)
	{
		PrintLine(n-i,2*i-1);
	}
	//下半部分
	for (i=n-1; i >0; i--)
	{
		PrintLine(n-i,2*i-1);
	}
}
```



### 今日巩固

1. 如何把复杂的图形分解化，找规律解决问题
2. 写函数的时候也可以分功能实现，这样的效果更好