#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
*/
int main(){
	int s[5];
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("�����������λ���ĵ�%dλ��\n",i+1);
		scanf("%d",&s[i]);
	}
	printf("���������λ����:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d",s[i]);
	}
	if (s[0]==s[4]&&s[1]==s[3])
	{
		printf("\n���ǻ�����");
	} else
	{
		printf("\n�����ǻ�����");
	}
	system("pause");
	return 0;
}