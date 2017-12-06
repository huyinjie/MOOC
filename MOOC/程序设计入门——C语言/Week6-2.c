/*
题目内容：
一个正整数的因子是所有可以整除它的正整数。而一个数如果恰好等于除它本身外的因子之和，这个数就称为完数。例如6=1＋2＋3(6的因子是1,2,3)。

现在，你要写一个程序，读入两个正整数n和m（1<=n<m<1000），输出[n,m]范围内所有的完数。

提示：可以写一个函数来判断某个数是否是完数。

输入格式:
两个正整数，以空格分隔。

输出格式：
其间所有的完数，以空格分隔，最后一个数字后面没有空格。如果没有，则输出一行文字：
NIL
（输出NIL三个大写字母加回车）。

输入样例：
1 10

输出样例：
6
*/
//false
#include <stdio.h>
int finished_number(int x) {
	int i, sum = 0;
	for (i = 1; i<x; i++) {
		if (x%i == 0) sum += i;
	}
	if (sum == x) return 1;
	else return 0;
}

int main(void)
{
	int n, m, k = 0;
	int a[3];
	scanf("%d %d", &n, &m);
	if (n < m && n >= 1 && m < 1000) {
		for (int i = n; i <= m; i++) {
			if (finished_number(i) == 1) {
				a[k] = i;
				k++;
			}
		}
		if (k == 0) printf("NIL\n");
		else {
			for (int j = 0; j < k; j++) {
				printf("%d", a[j]);
				if (j != k-1) printf(" ");
			}
		}
	}
	return 0;
}

//correct
#include<stdio.h>
int main(void)
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    for(;n<=m;n++){
        int sum=0;
        for(int i=1;i<n;i++){             
            if (n%i==0)    sum+=i;
        }
        if (sum==n){
            if (count==0)  printf("%d",n);
            else    printf(" %d",n);
            count++;
        }
    }
    if (count==0) printf("NIL\n");
    return 0;
}