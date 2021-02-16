#include<stdio.h>
#include<stdlib.h>
/*
	题目：有n个整数，使其前面各数顺序向后移动m个位置，最后m个数变成最前面的m个数
	程序分析：新建一个数组b，先将前面要移动的数据放到数组b中（想要移动的位置），然后将后面没有移动的元素移动到数组b中的前面位置
*/
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10];
	int i,m,k=0;
	printf("原始的数组：\n");
	for (i = 0; i < 10; i++)//打印出开始的数据
	{
		printf("%5d",a[i]);
	}
	printf("\n请输入要移动多少个位置：\n");
	scanf("%d",&m);
	for (i = 10-m; i < 10; i++)//将前面要移动的元素放到数组b中
	{
		b[k]=a[i];
		k++;
	}
	for (i = 0; i < 10-m; i++)//将后面未移动的元素放到数组b中
	{
		b[k]=a[i];
		k++;
	}
	for (i = 0; i < 10; i++)//打印出结果
	{
		printf("%5d",b[i]);
	}
	system("pause");
	return 0;
}