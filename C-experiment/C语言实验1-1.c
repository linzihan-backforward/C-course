/*（1）	编写一个程序，
输入无符号短整数x，ｍ，ｎ（0 ≤ｍ≤ 15, 1 ≤ ｎ≤ 16-ｍ）,
取出x从第ｍ位开始向左的ｎ位（ｍ从右至左编号为0～15），并使其向左端（第15位）靠齐。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
unsigned short x;
int m,n;
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%hu%d%d",&x,&m,&n);
		x>>=m;
		x<<=(16-n);
		printf("%hu\n",x);
	}
	
	
	return 0;
} 

