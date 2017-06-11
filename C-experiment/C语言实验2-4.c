/*编写一个程序，将输入的一行字符复制到输出，复制过程中将一个以上的空格字符用一个空格代替。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int n,cnt;
char c;
int main(){
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		while(scanf("%c",&c)){
			if(c=='\n') break;
			if(c==' '){
				cnt++;
				if(cnt==1) printf(" ");
			}
			else {
				cnt=0;
				printf("%c",c);
			}
		}
		printf("\n");
		cnt=0;
	}
	return 0;
} 
