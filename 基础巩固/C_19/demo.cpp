#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����1+2!+3!+����+20!�ĺ�
*/
long long int fun(int n);//��׳˺���
int main(){
	int i;
	long long int sum=0;
	for (i = 1; i <= 20; i++)
	{
		sum=sum+fun(i);
	}
	printf("���ǣ�%lld",sum);
	system("pause");
	return 0;
}
long long int fun(int n){
	int i=1;
	long long int s=1;
	while (i<=n)
	{
		s=s*i;
		i++;
	}
	printf("%d�Ľ׳��ǣ�%lld\n",n,s);
	return s;
	
}