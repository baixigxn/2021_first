# 题目：

一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1+2+3，找出1000以内的所有完数



### 程序分析

利用for语句，外层循环控制1000这个范围，内层循环控制数据的从1开始查找，找出所有的因子求和，若满足因子和等于这个数，则将这个数输出



### 主要代码

```c
void fun(int n){
    cout<<n<<"以内的完数是："<<endl;
    for(int i=1;i<n+1;i++){
        int sum=0;
        for(int j=1;j<n/2+1;j++){
            if((i%j)==0){
                sum+=j;
            	if(sum==i){
                	cout<<i<<" "<<endl;
            	}
            }
            
        }
    }
}
```



### 今日巩固

1. C++语言的基础使用，C++语言写程序基本代码

   ```c++
   #include<iostream>
   using namespace std;
   int main(){
       //主要代码
       return 0;
   }
   ```

   

2. 完数的求法