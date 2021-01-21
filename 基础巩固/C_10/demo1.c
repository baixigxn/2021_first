#include<stdio.h>
#include<stdlib.h>
/*
	题目：输入两个正整数m和n，求其最大公约数和最小公倍数
*/
void fun1(int m,int n);//辗转相除法
void fun2(int m,int n);//遍历法
void main(){
	int a,b;
	printf("请输入两个正整数，用逗号隔开\n");
	scanf("%d,%d",&a,&b);
	fun1(a,b);
	fun2(a,b);
	system("pause");
}
void fun1(int m,int n){
	int a,b;
	if(m<n){//先将较大的数字放到m处
        int t=m;
        m=n;
        n=t;
    }
    a=m;
    b=n;
    while(b != 0){//利用辗转相除法，直到余数b是0
        int c=a%b;
        a=b;
        b=c;
    }
    printf("最大公约数是：%d\n",a);
    printf("最小公倍数是：%d\n",m*n/a);
}
void fun2(int m,int n){
	int x=1,y;//最大公约数x设置为1,最小公倍数y
    int min,max;
    int i;
    
    min=m>n?n:m;
    max=m>n?m:n;
    
    if(max%min==0){//两个数是倍数关系
        printf("最大公约数：%d\n最小公倍数：%d\n",min,max);
    } else{//不成倍数
		//寻找最大公约数
        for(i=1;i<=min;i++){//从1找到min
            if(max%i==0 && min%i==0) x=i;
        }
        while(max%m!=0 || max%n!=0){//当有一方不能被整除时，继续往后找
            max++;
        }
        y=max;
        printf("最大公约数：%d\n最小公倍数：%d\n",x,y);
    }
}