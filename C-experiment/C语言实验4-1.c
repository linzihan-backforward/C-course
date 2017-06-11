/*用条件编译方法来编写程序。输入一行电报文字，可以任选两种输出：
一为原文输出；二为变换字母的大小写（如小写'a'变成大写'A'，大写'D'变成小写'd'），其他字符不变。
用#define命令控制是否变换字母的大小写。
例如，#define CHANGE 1 则输出变换后的文字，若#define CHANGE 0则原文输出。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
#define CHANGE c[0]%2
char c[1005];
int n; 
int main(){
	scanf("%d",&n);getchar();
	for(int i=1;i<=n;i++){
		fgets(c,1005,stdin);
		if(CHANGE){
			for(int j=0;j<strlen(c);j++){
				if(c[j]>='a'&&c[j]<='z') printf("%c",c[j]-32);
				else if(c[j]>='A'&&c[j]<='Z') printf("%c",c[j]+32);
				else printf("%c",c[j]);
			}
		}
		else{
			for(int j=0;j<strlen(c);j++)
				printf("%c",c[j]);
		}	
	}
	return 0;
} 
