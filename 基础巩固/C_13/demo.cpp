#include<iostream>
using namespace std;
/*
	题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1+2+3，找出1000以内的所有完数
*/
void fun(int n);
int main(){
	int n=1000;
	fun(n);
	system("pause");
}
void fun(int n){
	cout<<n<<"以内的完数："<<endl;
	for (int i = 1; i < n+1; i++)
	{
		int sum=0;
		for (int j = 1; j < i/2+1; j++)
		{
			if ((i%j)==0)
			{
				sum+=j;
				if (sum==i)
				{
					cout<<i<<" "<<endl;
				}
			}
		}
	}
}