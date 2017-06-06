/*输入正整数n和k，输出n中从右端开始的第k个数字的值（k从1开始）。将求n中右端第k个数字定义成函数，如果k超过了n的位数，则函数返回-1；
否则返回n中第k个数字。
本题包含多组测试数据(由于平台的关系，建议不要采用pow()库函数)。
输入格式说明：每组测试数据输入占一行，包括两个正整数，依次为n，k，
n在1~4294967293之间（闭区间），遇文件尾测试结束。
输出格式说明：每组测试样例的输出结果占一行，输出函数返回结果。
样例输入
321 3
421 4
42 12
4294967293 10
4294967293 11
样例输出
3
-1
-1
4
-1
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char num[12];
int k;
int getk(char *s,int k){
	if(k>strlen(s)) return -1;
	return s[strlen(s)-k]-'0';
}
int main(){
	while(scanf("%s",num)!=EOF){
		scanf("%d",&k);
		printf("%d\n",getk(num,k));
	}
	return 0;
}
