/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

提示：可以用一个函数来判断某数是否是素数。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。abcd这样的数字一定是从小到大排列的。

输入样例：
18

输出样例：
18=2x3x3
*/
//correct
#include <stdio.h>
int isPrime(int i);
int main(void) {
	int i;
	scanf("%d", &i);
	printf("%d=", i);
	do{
		for (int j = 2; j<i; j++){
			if (isPrime(j) && i%j == 0){
				printf("%dx", j);
				i = i / j;
				break;
			}
		}
	} while (!isPrime(i));
	printf("%d\n", i);

}
int isPrime(int i)
{
	int prime;
	int b = 1;
	for (int j = 2; j<i; j++){
		if (i%j == 0){
			b = 0;
			break;
		}
	}
	if (b){
		prime = i;
	}
	else{
		prime = 0;
	}
	return prime;
}


//error
#include <stdio.h>
int primer_number(int a);
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>=2 && x<=100000){
        
    }
}

int primer_number(int a)
{
	int i, m = 1;
	if (a == 1) return m = -1;
	//for(i=2;i<(int)sqrt(a);i++)	
	for (i = 2; i*i <= a; i++){
		if (a%i == 0) return m = -1;
	}
	return m;
}