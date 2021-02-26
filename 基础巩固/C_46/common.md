# 题目：

编写一个函数，输入n为偶数时，调用函数求1/2+1/4+…+1/n,
当输入n为奇数时，调用函数1/1+1/3+…+1/n


### 程序分析

- 函数的调用



### 主要代码

main.c

```c
//n为奇数
double odd_Number(int n){
	double sum=0;
	int i;
	for (i = 1; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
//n为偶数
double even_Number(int n){
	double sum=0;
	int i;
	for (i = 2; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
int main()
{
	int n;
	double result=NULL;
	printf("请输入n的值：\n");
	scanf("%d",&n);
	if (n%2==0)
	{
		result=even_Number(n);
	}else
	{
		result=odd_Number(n);
	}
	printf("结果是：%.4lf",result);
	system("pause");
	return 0;
}
```

### 运行结果

![result1](D:\GitHub\2021_first\基础巩固\C_46\result1.PNG)

![result2](D:\GitHub\2021_first\基础巩固\C_46\result2.PNG)

### 今日巩固

1. 函数之间的调用
2. 输出double类型的数值，后面保留几位小数的方式



