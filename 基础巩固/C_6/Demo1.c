#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	��Ŀ���ж�101-200֮���ж��ٸ��������������������
	�������������1����Ȼ��������1���������ⲻ�ܱ�����������������������
*/
void fun(int n,int m);
void main(){
	fun(101,200);
	system("pause");
}
void fun(int n,int m){
	if(n<m && n>1 && m>1){
		int i;
		int j;
		for (i = n; i < m; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i%j == 0)//һ������һ������i��������������ѭ��
				{
					break;
				}else
				{
					if (j==i-1)//�������һ������������ѭ�����Ϳ����жϸ���Ϊ����
					{
						printf("%5d",i);
					}
				}
			}
			
		}
	} else
	{
		printf("������ķ�Χ��������������");
	}
}