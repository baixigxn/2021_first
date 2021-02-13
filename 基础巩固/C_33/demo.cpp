#include<stdio.h>
#include<stdlib.h>
/*
	题目：打印出杨辉三角的前十行
	杨辉三角的前十行：
	                         1
                       1     1
                     1     2     1
                   1     3     3     1
                 1     4     6     4     1
               1     5    10    10     5     1
             1     6    15    20    15     6     1
           1     7    21    35    35    21     7     1
         1     8    28    56    70    56    28     8     1
       1     9    36    84   126   126    84    36     9     1
*/
int main(){
	int i,j,k;
	int a[14][14];//定义二维数组存储，控制行数不要太大，过大会显示不规范
	int h;
	printf("请输入你要打印的行数\n");
	scanf("%d",&h);
	printf("%d行的杨辉三角如下：\n",h);	
	for (i = 0; i <=h; i++)
	{
		a[i][1]=a[i][i]=1;//两边的数都是1
	}
	for (i = 3; i <=h; i++)
	{
		for (j = 2; j <= i-1; j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];//除两边外，其他的数都等于上两顶数之和
		}
	}
	for (i = 0; i <=h; i++)
	{
		for (k = 0; k <=h-i; k++)
		{
			printf("  ");//主要在输出的数前面输出空格，输出更美观
		}
		for (j = 1; j <=i; j++)
		{
			printf("%6d",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}