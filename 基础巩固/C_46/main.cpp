#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����дһ������������nΪż��ʱ�����ú�����1/2+1/4+��+1/n,
	������nΪ����ʱ�����ú���1/1+1/3+��+1/n
*/
//nΪ����
double odd_Number(int n){
	double sum=0;
	int i;
	for (i = 1; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
//nΪż��
double even_Number(int n){
	double sum=0;
	int i;
	for (i = 2; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
int main()
{
	int n;
	double result=NULL;
	printf("������n��ֵ��\n");
	scanf("%d",&n);
	if (n%2==0)
	{
		result=even_Number(n);
	}else
	{
		result=odd_Number(n);
	}
	printf("����ǣ�%.4lf",result);
	system("pause");
	return 0;
}
