#include<stdio.h>
#include<stdlib.h>
/*
	题目：有一分数序列：2/1,3/2,5/3,8/5,13/8,21/13……求出这个数列的前20项之和
*/
int main(){
	double fenzi=2;
	double fenmu=1;
	int i;
	double s=0;
	for (i = 1; i <= 20; i++)
	{
		printf("第%d个分数是%d\/%d\n",i,(int)fenzi,(int)fenmu);
		s=s+fenzi/fenmu;
		int t=fenmu;
		fenmu=fenzi;
		fenzi=t+fenmu;
	}
	printf("这个分数数列的和是%f\n",s);
	system("pause");
	return 0;
}