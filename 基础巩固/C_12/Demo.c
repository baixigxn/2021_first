#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
	�������������while��䣬����Ϊ������ַ���Ϊ'\n'
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
	printf("�ܹ����ַ���%d �ո�%d ����:%d �����ַ���%d��",letters,space,numbers,others);
	system("pause");
}