#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
	��������������ƽ����㷨���ö�ά�������洢�·ݺ�����
*/
void fun(int year,int month,int day);
main(){
	int year,month,day;
	printf("\nplease input year,month,day\n");
	scanf("%d,%d,%d",&year,&month,&day);
	fun(year,month,day);
	system("pause");
}
void fun(int year,int month,int day){
	int s=0;
	int a[2][12]={0,31,59,90,120,151,181,212,243,273,303,334,0,31,60,91,121,152,182,212,244,274,305,335};
	if(year<0 || month >12 || month<0 || day<0 || day>31) {
		printf("����������ڲ���ȷ");
	} else if((year%400==0)||(year%4==0&&year%100!=0)){
		s=a[1][month-1]+day;
		printf("%d��%d��%d����%d��ĵ�%d��\n",year,month,day,year,s);
	} else {
		s=a[0][month-1]+day;
		printf("%d��%d��%d����%d��ĵ�%d��\n",year,month,day,year,s);
	}
}