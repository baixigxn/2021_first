#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��ȡһ������a���Ҷ˿�ʼ��4-7λ
	��������һ��ʮ������123456789�����Ϊ��6543			
*/
int main(){
	int num;//���������Ҫ����7λ
	printf("������һ������7λ������:\n");
	scanf("%d",&num);
	int k=0;//��¼������ÿһλ��
	while (true)
	{
		k++;
		if (k>3 & k<8)//�����Ӧ��λ���������֮ǰ�����������λ����һ��
		{
			printf("%d",num%10);
			num=num/10;
		}else
		{
			num=num/10;
		}
		if (k==8)
		{
			break;
		}
	}
	system("pause");
	return 0;
}