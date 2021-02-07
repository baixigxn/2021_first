#include<stdio.h>
#include<stdlib.h>
/*
	题目：求一个3*3的矩阵对角线元素之和
*/
int main(){
	int i,j;
	int a[3][3];
	int sum=0;
	printf("请输入矩阵\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum=sum+a[i][i];
	}
	printf("对角线元素之和是：%d",sum);
	system("pause");
	return 0;
}