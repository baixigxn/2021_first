#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����ӡ������ͼ�������Σ�
				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*
		*	*	*	*	*
			*	*	*
				*
	������������԰�ͼ�ηֳ�������������������ǰ����һ�����ɣ�������һ������
			  ����˫��forѭ������һ������У��ڶ��������
*/
void PrintLine(int blank_num,int star_num);
void PrintStar(int n);
int main(){
	PrintStar(4);
	system("pause");
	return 0;
}
void PrintLine(int blank_num,int star_num){
	int i=0;
	for (; i < blank_num; i++)
	{
		printf("\t");
	}
	for (i = 0; i < star_num; i++)
	{
		printf("*");
		printf("\t");
	}
	printf("\n");
}
void PrintStar(int n){
	int i=1;
	//�ϰ벿��
	for (i=1; i <= n; i++)
	{
		PrintLine(n-i,2*i-1);
	}
	//�°벿��
	for (i=n-1; i >0; i--)
	{
		PrintLine(n-i,2*i-1);
	}
}