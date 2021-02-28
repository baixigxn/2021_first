#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	ÌâÄ¿£º×Ö·û´®ÅÅÐò
*/
int main(void){
	int i,j,index;
	char str[5][80],p[80]; 
	printf("Please input five chars\n");
 	scanf("%s",&str[0]);
	scanf("%s",&str[1]);
	scanf("%s",&str[2]);
	scanf("%s",&str[3]);
	scanf("%s",&str[4]);
	for(i=0;i<4;i++)
	{
		index=i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(str[index],str[j])>0)
			{
				index=j;
			}
		} 
		strcpy(p,str[index]);  
		strcpy(str[index],str[i]);
		strcpy(str[i],p);
	}
	printf("After sorted:\n");
 	for(i=0;i<5;i++)
	{
 		printf("%s\n",str[i]);
	}

	system("pause");
	return 0;
}