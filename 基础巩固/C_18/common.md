# 题目：

有一分数序列：2/1,3/2,5/3,8/5,13/8,21/13……求出这个数列的前20项之和



### 程序分析

1. 找出分子和分母之前的关系：下一个的分母是上一个的分子，下一个的分子是上一个分子与分母之和
2. 利用for循环来控制这个数列有多少项



### 主要代码

```c
int main(){
    double fenzi=2;
    double fenmu=1;
    double s=0;
    int i;
    for(i=1;i<=20;i++){
        printf("第%d个分数为：%d\/%d\n",i,(int)fenzi,(int)fenmu);
        s=s+fenzi/fenmu;
        int t=fenmu;
        fenmu=fenzi;//下一个分母是上一个的分子
        fenzi=t+fenzi;//下一个分子是上一个分子与分母之和
    }
    printf("这个序列的前20项和为：%f",s);
    system("pause");
    return 0;
}
```



### 今日巩固

1. 在printf函数输出格式上今天出现了纠结，归其原因还是对printf函数的了解不到位，具体情况如下：

   ```c
   double a=2;
   printf("%f",a);//打印出来的是float型的a的值
   printf("%d",a);//打印出来的是0
   神奇的是为什么a明明等于2，怎么转变成int型打印出来，就成0了，正确的int型转变成float型应该是如下：
   printf("%d",(int)a);//这样打印出来的是2
   ```