#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��ѧϰʹ��auto����������÷�
	auto���ã���C�����У�Ĭ�ϵı�����������������ڶ���auto�ģ����auto����ʡ��
			  ��cpp�У�auto�ĺ����Ǹ����ұ߱��ʽ���Զ��ƶϱ���������
			  ��C�У���������ȫ�ֺ;ֲ�֮�֣���������������ʱ��ȫ����Ч֮��
	��Ҫע����ǣ�auto��������ȫ�ֱ�������Ϊ�Զ�����ֻ�ܴ����ں�����
*/
int main(){
	int i;
	int num=2;
	for (i = 0; i < 3; i++)
	{
		printf("���num����%d\n",num);
		num++;
		{//�����
			auto num=1;
			printf("���������num����%d\n",num);
			num++;//�����䲻ִ��
		}
	}
	system("pause");
	return 0;
}