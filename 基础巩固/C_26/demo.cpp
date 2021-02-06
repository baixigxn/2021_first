#include<stdio.h>
#include<stdlib.h>
/*
	题目：对10个数进行排序(1)-直接选择排序
*/
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void selection_sort(int a[],int len){
	int i,j;
	for (i = 0; i < len-1; i++)
	{
		int min=i;
		for (j = i+1; j < len; j++)
		{
			if (a[min]>a[j])
			{
				min=j;
			}
			swap(&a[min],&a[i]);
		}
	}
}
int main(){
	int i;
	int a[10];
	printf("请输入你要排序的10个数，以空格隔开\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%3d",&a[i]);
	}
	printf("\n你输入的十个数是：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d",a[i]);
	}
	selection_sort(a,10);
	printf("\n排序后的十个数是：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d",a[i]);
	}
	system("pause");
	return 0;
}