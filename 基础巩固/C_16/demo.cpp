#include<iostream>
using namespace std;
/*
	题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
	      以抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他
		  不和x,z比，请编程序找出三对赛手的名单
	程序分析：不难发现，甲乙两队中队员都是顺序编号的，我们可以以此来写循环
*/
int main(){
	int i,j,k;//分别对应a,b,c三人的对手
	for(i='x';i<='z';i++){
		for (j = 'x'; j <= 'z'; j++){
			for (int k = 'x'; k <= 'z'; k++){
				if (i=='x'||j==i||k=='x'||k=='z'||j==k||i==k){
					continue;
				}
				/*cout<<"a对"<<i<<endl;
				cout<<"b对"<<j<<endl;
				cout<<"c对"<<k<<endl;*/
				printf("a对%c,b对%c,c对%c",i,j,k);
			}
		}
	}
	system("pause");
	return 0;
}