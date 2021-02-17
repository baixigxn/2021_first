#include<stdio.h>
#include<stdlib.h>
/*
	题目：有n个人围城一圈，顺序排好。从第一个人开始报数（从1到3报数），凡是报到3的人退出圈子，问最后留下的是原来的第几号的那位
*/
int main(){
	int a[50], i, n, flag=0;
	scanf("%d", &n);
	int count=n;
	for (i=1; i<=n; i++)
		a[i]=1;//所有人都在圈内，为1 
	for (i=1; ;i++){
		if (i==n+1)
			i=1;//如果i超出了n个人，让他重新回到1 
		
		if (a[i]!=0)	flag++;
		else	continue;
		
		if (flag%3==0){
			a[i]=0;
			count--;
		}
		
		if (count==1)//表示只剩下一个人在圈内 
			break;
	}
	for (i=1; i<=n; i++)
		if (a[i]!=0)
			printf("%d", i);
	system("pause");
	return 0;
}