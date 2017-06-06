/*用递归实现标准库函数strlen(s)，并调用该函数计算字符串长度。
输入：第一行为正整数N，表示有N行输入，接下来的N行，每行为一个字符串。
输出：每行输入对应一行输出，输出字符串的长度。样例输入
5
hello  world !
hello world    
come    on
o
on
样例输出
14
15
10
1
2
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int n;
char c;
int main(){
	scanf("%d",&n);
	getchar();
	int cn1=0;
	for(int i=1;i<=n;i++){
		cn1=0;
		while(scanf("%c",&c)){
			if(c=='\n') {
				printf("%d\n",cn1);
				break;
			}
			cn1++;	
		}
		
		
	}
	
	
	
} 
