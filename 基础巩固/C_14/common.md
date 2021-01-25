# 题目：

一球从100米高度自由落下，每次落地后反跳回原来高度的一半，再落下，求它在第10次落地时，共经过过少米？第10次反弹多高？



### 程序分析

1. 第一次落地之后开始进行弹起落下的来回循环

   即 for(int i=2;i<=10;i++)

2. 循环时，弹起高度为上一次高度的一半

   height=height/2

3.   每一次循环时所历经的长度为高度的两倍

   sum+=height*2

4. 最后的总长度是循环体内的长度再加上球的初始高度

   sum+100



### 主要代码

```c
void fun(float n,int m){
	float height=n;
	float sum=n;
	for (int i = 2; i <= m; i++)
	{
		height=height/2;
		sum=2*height+sum;
	}
	height=height/2;
	cout<<"共经过"<<sum<<"米"<<endl;
	cout<<"第"<<m<<"次反弹"<<height<<"米"<<endl;
}
```



### 今日巩固

1. C++语言的输出方法

2. 解题的思路如何转变为代码的输出