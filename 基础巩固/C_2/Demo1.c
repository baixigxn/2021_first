#include<stdio.h>
#include<stdlib.h>
/*
	题目：输入某年某月某日，判断这一天是这一年的第几天？
	程序分析：闰年和平年的算法，用二维数组来存储月份和天数
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
		printf("您输入的日期不正确");
	} else if((year%400==0)||(year%4==0&&year%100!=0)){
		s=a[1][month-1]+day;
		printf("%d年%d月%d日是%d年的第%d天\n",year,month,day,year,s);
	} else {
		s=a[0][month-1]+day;
		printf("%d年%d月%d日是%d年的第%d天\n",year,month,day,year,s);
	}
}