#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��809*??=800*??+9*??+1  ����??������λ����8*??�Ľ��Ϊ��λ����
	9*??�Ľ����3λ������??�������λ������809*??��Ľ��
*/
int main(void){
	long int a,b,i;
	a=809;
	for (i = 10; i < 100; i++)
	{
		b=i*a+1;
		if (b>=1000 && b<=10000 && 8*i<100 && 9*i>=100)
		{
			printf("%ld/%ld=809*%ld+%ld",b,i,i,b%i);
		}
	}
	system("pause");
	return 0;
}