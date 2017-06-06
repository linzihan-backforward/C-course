/*编写程序，如果整数能被整除且个位数字是5，则结果为1，否则为0。
注：本题需循环输入整数a，当输入非整数时，程序结束运行。输出结果用换行符‘\n’隔开。用scanf()返回值做循环判断条件。
样例输入
15
3
10
45
q
样例输出
1
0
0
1
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n;
int main(){
	while(scanf("%d",&n)){
		int flag=0;
		if(n%3==0&&n%10==5) flag=1;
		printf("%d\n",flag);
	}	
}
