/*编程验证歌德巴赫猜想：一个大于等于4的偶数都是两个素数之和。
编写一个程序证明对于在符号常量BEGIN和END之间的偶数这一猜测成立。例如，如果BEGIN为10，END为20，程序的输出应为：
GOLDBACH'S CONJECTURE:
Every even number n>=4 is the sum of two primes.
10=3+7
12=5+7
……
20=3+17

*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int begin,end;
int prime[101];
void is_prime(){
	for(int i=2;i<=100;i++)
		if(!prime[i]){
			for(int j=2;j*i<=100;j++)
				prime[j*i]=1;
		}
} 
int main(){
	is_prime();
	while(scanf("%d%d",&begin,&end)){
		if(begin==0) break;
		printf("GOLDBACH'S CONJECTURE:\nEvery even number n>=4 is the sum of two primes\n");
		for(int i=begin;i<=end;i++)
			if(i%2==0)
				for(int j=2;j<=i;j++)
					if(!prime[j]&&(!prime[i-j])){
						printf("%d=%d+%d\n",i,j,i-j);
						break;
					}
		printf("\n");			
	} 
	return 0;
}

