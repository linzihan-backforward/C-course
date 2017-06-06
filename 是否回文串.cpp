/*编写一个测试一个串是否为回文的递归函数，是回文，返回1；不是，返回0。
并在主函数调用该函数，判断输入的字符串是否为回文串。回文是正读和反读都一样的串。
输入：第一行为正整数N，表示有N组输入数据；每组输入对应一行，为一个字符串。
输出：每组输入对应一行输出，若输入的字符串是回文则输出“Yes!”，否则输出“No” 
注意：用递归，否则作 未通过 处理。

样例输入
3
abccccbccccba
12345654232
hijkkjih
样例输出
Yes!
No!
Yes!
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n;
char a[100];
int gets(){
	int t=0;
	while(scanf("%c",&a[t])){
		if(a[t]=='\n') break;
		t++;
	}	 
	//printf("%c",a[t-1]);
	//printf("%d\n",t-1);
	return t-1;
}
int judge(char a[],int begin,int end){
	if(begin>=end) return 1;
	if(a[begin]!=a[end]) return 0;
	return judge(a,begin+1,end-1);
}
int main(){
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		int len=gets();	
		if(judge(a,0,len)) printf("Yes!\n");
		else printf("No!\n");

	
	} return 0;
}
