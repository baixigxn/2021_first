#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����һ�������У�2/1,3/2,5/3,8/5,13/8,21/13�������������е�ǰ20��֮��
*/
int main(){
	double fenzi=2;
	double fenmu=1;
	int i;
	double s=0;
	for (i = 1; i <= 20; i++)
	{
		printf("��%d��������%d\/%d\n",i,(int)fenzi,(int)fenmu);
		s=s+fenzi/fenmu;
		int t=fenmu;
		fenmu=fenzi;
		fenzi=t+fenmu;
	}
	printf("����������еĺ���%f\n",s);
	system("pause");
	return 0;
}