#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	题目：判断101-200之间有多少个素数，并输出所有素数
	程序分析：大于1的自然数，除了1和它本身外不能被其他数整除的数叫做素数
*/
void fun(int n,int m);
void main(){
	fun(101,200);
	system("pause");
}
void fun(int n,int m){
	if(n<m && n>1 && m>1){
		int i;
		int j;
		for (i = n; i < m; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i%j == 0)//一旦出现一个能让i整除的数就跳出循环
				{
					break;
				}else
				{
					if (j==i-1)//除完最后一个数还不跳出循环，就可以判断该数为素数
					{
						printf("%5d",i);
					}
				}
			}
			
		}
	} else
	{
		printf("您输入的范围有误，请重新输入");
	}
}