#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����s=a+aa+aaa+aaaa+aa��a��ֵ������a��һ�����֣�����2+22+222+2222+22222����ʱ����5������ӣ�������������ɼ��̿���
*/
void fun(int a,int n);
void main(){
	int a,n;
	printf("������a��n��ֵ���м��ö��Ÿ���\n");
	scanf("%d,%d",&a,&n);
	fun(a,n);
	system("pause");
}
void fun(int a,int n){
	int count=1;
	long int sn=0,tn=0;
	printf("a=%d,n=%d",a,n);
	while (count<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		count++;
	}
	printf("\na+aa+aaa+aaaa+aa��a=%ld\n",sn);
}