#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮���ͬѧ��B��ʾ��60�����µ�ͬѧ��C��ʾ
	���������(a>b)?a:b��������������Ļ�������
*/
void main(){
	double score;
	char grade;
	while (1)
	{
		printf("������һ��ͬѧ�Ŀ��Է���\n");
		scanf("%lf",&score);
		grade=score>=90?'A':(score>=60?'B':'C');
		printf("%.2f ����%c�ķ�Χ",score,grade);
	}
	
	system("pause");
}