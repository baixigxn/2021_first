#include<stdio.h>
#include<stdlib.h>
/*
	题目：学习使用auto定义变量的用法
	auto作用：在C语言中，默认的变量作用域和声明周期都是auto的，因而auto可以省略
			  在cpp中，auto的含义是根据右边表达式，自动推断变量的类型
			  在C中，作用域有全局和局部之分，声明周期有运行时和全程有效之分
	需要注意的是，auto不能修饰全局变量，因为自动变量只能存在于函数内
*/
int main(){
	int i;
	int num=2;
	for (i = 0; i < 3; i++)
	{
		printf("这个num等于%d\n",num);
		num++;
		{//代码块
			auto num=1;
			printf("这个代码块的num等于%d\n",num);
			num++;//这个语句不执行
		}
	}
	system("pause");
	return 0;
}