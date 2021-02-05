#include<stdio.h>
#include<stdlib.h>
/*
	题目：求100以内的素数
	程序分析：大于1的自然数，除了1和它本身外不能被其他数整除的数叫素数
*/
int main(){
	int i;
	int j;
	printf("100以内的素数是：\n");
	for (i = 1; i <=100; i++)//外层循环确定查找的范围
	{
		for (j = 2; j < i; j++)//确定因数的范围
		{
			if (i%j==0)//如果出现可以整除的因数，那么跳出循环，继续判断下一个数
			{
				break;
			}else
			{
				if (j==i-1)//如果除完最后一个数还不跳出循环，那么就是素数
				{
					printf("%d\t",i);
				}
			}
		}
	}
	system("pause");
	return 0;
}