# 题目：

找到年龄最大的人，并输出


### 程序分析

- 结构体的定义



### 主要代码

main.c

```c
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
  for (i=0;i<N;i++,p++)//这里要加上p++，否则前面比后面大就不再进行循环
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
```



### 今日巩固

1. for循环的多个条件



