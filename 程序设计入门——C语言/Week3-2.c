/*
题目内容：
对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。对于一个整数，从个位开始对每一位数字编号，个位是1号，十位是2号，以此类推。这个整数在第n位上的数字记作x，如果x和n的奇偶性相同，则记下一个1，否则记下一个0。按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，就形成了一个二进制数字。比如，对于342315，这个二进制数字就是001101。

你的程序要读入一个非负整数，整数的范围是[0,1000000]，然后按照上述算法计算出表示奇偶性的那个二进制数字，输出它对应的十进制值。

提示：将整数从右向左分解，数位每次加1，而二进制值每次乘2。

输入格式:
一个非负整数，整数的范围是[0,1000000]。

输出格式：
一个整数，表示计算结果。

输入样例：
342315

输出样例：
13
*/

//Way 1
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    int count=0;
    int a=0;
    int dig=0;
    scanf("%d",&x);
    do{
        count ++;
        a=x%10;
        if((a+count)%2==0){
            dig=dig+pow(2,count-1);
        }
        x /=10;
    }while(x>0);
    printf("%d",dig);
    return 0;
}

//Way 2
#include<stdio.h>
int main()
{
    int n=1;
    int h=1;
    int num;
    int flag=0;
    scanf("%d",&num);
 
    while(num != 0)
    {
        if((num+n)%2==0)
        {
            flag = flag + h;
        }
        n++;
        num = num / 10;//删去最后一位数
        h=h*2;
    }
    printf("%d/n",flag);
    return 0;
}