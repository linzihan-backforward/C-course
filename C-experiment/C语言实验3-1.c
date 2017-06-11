/*编程让用户输入两个整数，计算两个数的最大公约数并且输出之（要求用递归函数实现求最大公约数）。
同时以单步方式执行该程序，观察递归过程。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int x,y;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	while(scanf("%d%d",&x,&y)){
		if(x==0) break;
		printf("%d\n",gcd(x,y));
	} 
	return 0;
} 

