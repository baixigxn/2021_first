#define N 4
#include "stdio.h"
#include "stdlib.h"
/*
	题目：找到年龄最大的人，并输出
*/
static struct man
{
  char name[20];
  int age;
}person[N]={"li",18,"wang",19,"zhang",20,"sun",22};
int main()
{
  struct man *q,*p;
  int i,m=0;
  p=person;
  for (i=0;i<N;i++,p++)
  {
    if(m<p->age)
	{
		q=p++;
		m=q->age;
	}
  }
  printf("%s,%d",(*q).name,(*q).age);
  system("pause");
  return 0;
}