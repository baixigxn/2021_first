#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ������������
*/
int main(){
	int a[10];
	int i;
	printf("�����������10��Ԫ��:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	int N_max=0,N_min=0;
	for (i = 1; i < 10; i++)
	{
		if (max<a[i])
		{
			max=a[i];
			N_max=i;//��¼���Ԫ�ص�λ��
		}
		if (min>a[i])
		{
			min=a[i];
			N_min=i;//��¼��СԪ�ص�λ��
		}
	}
	int t=a[0];//�����������һ��Ԫ��
	a[0]=a[N_max];
	a[N_max]=t;
	int s=a[9];//������С�������һ��Ԫ��
	a[9]=a[N_min];
	a[N_min]=s;
	printf("�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d",a[i]);
	}
	system("pause");
	return 0;
}