#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����10������������(1)-ֱ��ѡ������
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
	printf("��������Ҫ�����10�������Կո����\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%3d",&a[i]);
	}
	printf("\n�������ʮ�����ǣ�\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d",a[i]);
	}
	selection_sort(a,10);
	printf("\n������ʮ�����ǣ�\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d",a[i]);
	}
	system("pause");
	return 0;
}