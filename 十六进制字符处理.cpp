/*编写一个程序，从终端输入一个字符，如果该字符时十六进制数字，则输出它对应的整数，否则输出它的字符码。
注：十六进制字符：0~9，a~f，A~F。
输入：第一行是正整数N，表示数据组数，接下来的N行是输入数据
输出：每行输入对应一行输出
样例输入5
A
b
9
m
f
样例输出
10
11
9
109
15
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
char c;
int main(){
	scanf("%d",&cases);
	while(cases--){
		getchar(); 
		scanf("%c",&c);
		if(c>='0'&&c<='9'){
			printf("%d\n",c-'0');
			continue;
		}
		if(c>='A'&&c<='F'){
			printf("%d\n",c-'A'+10);
			continue;
		}
		if(c>='a'&&c<='f'){
			printf("%d\n",c-'a'+10);
			continue;
		}
		printf("%d\n",c);
	}
	return 0;
} 
