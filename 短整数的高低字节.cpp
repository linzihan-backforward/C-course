/*从终端输入短整数，以字符形式输出该短整数的高字节和低字节。

输入：第一行为正整数N，表示输入数据组数。接下的N行是程序需要处理的N个短整数。  

输出：对每行输入对应一行输出，高、低字节用逗号“,”隔开。
样例输入
4
24929
8554
19567
9523
样例输出
a,a
!,j
L,o
%,3
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int cases;
unsigned short n;
int main(){
	scanf("%d",&cases); 
	while(cases--){
		scanf("%hu",&n);	
		printf("%c,%c\n",(n>>8),(n&0x00ff));
	}
	return 0;
}
