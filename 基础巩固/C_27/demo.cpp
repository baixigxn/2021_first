#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����һ��3*3�ľ���Խ���Ԫ��֮��
*/
int main(){
	int i,j;
	int a[3][3];
	int sum=0;
	printf("���������\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum=sum+a[i][i];
	}
	printf("�Խ���Ԫ��֮���ǣ�%d",sum);
	system("pause");
	return 0;
}