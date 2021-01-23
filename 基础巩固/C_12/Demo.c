#include<stdio.h>
#include<stdlib.h>
/*
	题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
	程序分析：利用while语句，条件为输入的字符不为'\n'
*/
void main(){
	char c;
	int letters=0,space=0,numbers=0,others=0;
	while ((c=getchar()) != '\n')
	{
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			letters++;
		} else if(c==' '||c=='\t'){
			space++;
		} else if(c>='0'&&c<='9'){
			numbers++;
		} else{
			others++;
		}
	}
	printf("总共有字符：%d 空格：%d 数字:%d 其它字符：%d个",letters,space,numbers,others);
	system("pause");
}