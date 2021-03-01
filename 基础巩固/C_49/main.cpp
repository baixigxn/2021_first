#include<stdio.h>
#include<stdlib.h>
/*
	题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为
	五份，多了一个，这只猴子把多的一个仍入大海中，拿走了一份。第二只猴
	子把剩下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入大海，
	拿走了一份，第三，第四，第五只猴子都是这样做的，问海滩上原来最少有
	多少个桃子？
	程序分析：最少的可能就是剩下4个桃子
*/

int main(void){
	int i, j, m, count, k;		//m表示猴子拿走后剩余的桃子
 //j表示桃子数目
	//count来限制k（猴子数目）的增加
	for (i = 4; i < 10000; i+=4)
	{
		count = 1;
		m = i;
		for (k = 0; k < 5; k++)
		{
			j = m / 4 * 5 + 1;
			m = j;
			if (j % 4 == 0)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count == 5)
		{
			printf("最少有%d个桃子\n", j);
			break;
		}
	}

	system("pause");
	return 0;
}