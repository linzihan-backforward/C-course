/*（2）	IP地址通常是4个用句点分隔的小整数，如32.55.1.102。这些地址在机器中用无符号长整形表示。
编写一个程序，以机器存储的形式读入一个32位的互联网IP地址，对其译码，然后用常见的句点分隔的4部分的形式输出。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
unsigned int n;
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%u",&n);
		int A=0x000000ff;
		printf("%d.",(A&n));
		A=0x0000ff00;
		printf("%d.",(A&n)>>8);
		A=0x00ff0000;
		printf("%d.",(A&n)>>16);
		A=0xff000000;
		printf("%d\n",(A&n)>>24);
	}
} 
