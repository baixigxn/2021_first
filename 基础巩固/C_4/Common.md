# 题目

打印出乘法口诀表的五种形式

1. 长方形形式

   ### 代码

   ```c
   for(int i=1;i<=9;i++){
   	for(int j=1;j<=9;j++){
   		printf("%d*%d=%2d\t",i,j,i*j);
   	}
       printf("\n");
   }
   ```

   

2. 左下三角

   ### 代码

   ```c
   for(int i=1;i<=9;i++){
   	for(int j=1;j<=i;j++){
   		printf("%d*%d=%2d\t",i,j,i*j);
   	}
       printf("\n");
   }
   ```

   

3. 左上三角

   ### 代码

   ```c
   for(int i=1;i<=9;i++){
   	for(int j=i;j<=9;j++){
   		printf("%d*%d=%2d\t",i,j,i*j);
   	}
       printf("\n");
   }
   ```

   

4. 右下三角

   ### 代码

   ```c
   for(int i=1;i<=9;i++){
   	for(int j=1;j<=9;j++){
           while(j<i){
               printf("\t");
               j++;
           }
   		printf("%d*%d=%2d\t",i,j,i*j);
   	}
       printf("\n");
   }
   ```

   

5. 右上三角

   ### 代码

   ```c
   for(int i=1;i<=9;i++){
       for(int j=1;j<=9-i;j++){
           printf("\t");
       }
   	for(int j=1;j<=9;j++){
   		printf("%d*%d=%2d\t",i,j,i*j);
   	}
       printf("\n");
   }
   ```

   

## 总结：

实际上就是观察行和列的大小关系，来控制图形的样子

## 今日巩固

1. 对于printf函数有了进一步的了解，%2d表示控制宽度为2字符，并且右对齐，%-2d表示控制宽度为2字符并且左对齐，-t表示tab键
2. 对于for循环的使用了解的更加深入了