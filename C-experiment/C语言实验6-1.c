/*一个长整型变量占4个字节，其中每个字节又分成高4位和低4位。
试从该长整型变量的高字节开始，依次取出每个字节的高4位和低4位并以数字字符的形式进行显示。*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[30];
void sol(unsigned int x){
	unsigned mask=0xf0000000;
	//printf("%x\n",mask);
	printf("%X ",(mask&x)>>28);
	for(int i=1;i<=6;i++){
		mask>>=4;
		printf("%X ",(mask&x)>>(28-4*i));
	}
	mask>>=4;
	printf("%X\n",mask&x);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	for(int i=1;i<=n;i++)
		sol((unsigned)*(a+i));
	return 0;
}
