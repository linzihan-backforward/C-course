/*输入两个整数，求它们的最大公约数和最小公倍数。
输入：有多组输入，每行两个整数，当两个整数均为0时，程序结束运行。
输出：每行输入对应一行输出(以换行符结束)。最大公约数 最小公倍数
样例输入
1 20
5 15
20 30
88 88
16 100
0 0
样例输出
1 20
5 15
10 60
88 88
4 400
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int gcd(int x,int y){
	if(y==0) return x;
	return gcd(y,x%y);
} 
int a,b;
int main(){
	while(scanf("%d%d",&a,&b)){
		if(a==0&&b==0) break;
		int ans=gcd(a,b);
		printf("%d %d\n",ans,a*b/ans);
	}
	return 0;
}

