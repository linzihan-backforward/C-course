/*验证哥德巴赫猜想：任何充分大（≥4）的偶数都可以用两个素数之和表示，将输入的偶数用两个素数之和的形式输出。
本题包含多组测试数据。
输入格式说明：第一行输入n表示测试样例的个数，后面紧接着有n行输入，每行输入包含1个偶数，偶数范围在4~100之间。
输出格式说明：每组测试样例的输出结果占一行,并以换行符结束。
样例输入
3
46
88
100
样例输出
46=3+43
88=5+83
100=3+97
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
int n;
int isprime[105];
void prime(){
	for(int i=2;i<=101;i++)	
		if(!isprime[i])
			for(int j=2;j*i<=101;j++)
				isprime[j*i]=1;

}
int main(){
	scanf("%d",&cases);
	prime();
	while(cases--){
		scanf("%d",&n);
		for(int i=2;i<=n;i++)
			if((!isprime[i])&&(!isprime[n-i])){
				printf("%d=%d+%d\n",n,i,n-i);
				break;
			}
	}
	
	return 0;
} 
