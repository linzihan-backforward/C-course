/*输入一个十六进制字符串，将其转换成为对应的整数并输出转换结果。
输入：第一行为正整数N，表示有N组输入数据；每组输入对应一行，为一个十六进制字符串，其形式为0xXXX
输出：每组输入对应一行输出，输出转换后的十进制整数
样例输入
5
0x111
0x1Af
0xBcD
0x259
0x3fFF
样例输出
273
431
3021
601
16383
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,x;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%x",&x);
		printf("%d\n",x);
	}
	
	return 0;
} 

