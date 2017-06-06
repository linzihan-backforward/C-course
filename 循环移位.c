/*设计程序，将整数x向右循环移位n位。
注：int型的大小与机器有关，故需先使用sizeof()函数判断int型所占字节数，再分别处理。
输入：整数x和移位数n。
输出：输出移位后的结果,并以换行符‘\n’结束。
样例输入 5 33
样例输出 -2147483646
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int x,n;
int intlength;
int main(){
	intlength=sizeof(int);
	scanf("%d%d",&x,&n);
	n%=(intlength*8);
	unsigned int temp=(unsigned)x>>n;
	int ans=temp|(x<<(intlength*8-n));
	printf("%d\n",ans);
	return 0;
} 
