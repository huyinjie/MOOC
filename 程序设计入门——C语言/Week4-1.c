/*
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入格式:
两个整数，第一个表示n，第二个表示m。

输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入样例：
2 4

输出样例：
15
*/

#include <stdio.h>
int primer_number(int a);

int main(void)
{
	int n, m;
	int x = 1, sub = 0, sum = 0;
	scanf("%d %d", &n, &m);
	int a[200];
	if(n<=m && n>0 && m<=200){
		for (x = 1, sub = 0; sub != m + 1; x++) {
			if (primer_number(x) == 1) {
				a[sub] = x;
				sub++;
			}
		}
		for (int i = n - 1; i <= m - 1; i++) {
			sum = sum + a[i];
		}
	}

	printf("%d\n", sum);
	return 0;
}

int primer_number(int a)
{
	int i, m = 1;
	if (a == 1) return m = -1;
	//for(i=2;i<(int)sqrt(a);i++)	
	for (i = 2; i*i <= a; i++)
	{
		if (a%i == 0) return m = -1;
	}
	return m;
}

