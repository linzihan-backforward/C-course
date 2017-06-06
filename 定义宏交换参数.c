/*定义宏Swap(x,y)，用于交换两个参数x和y的值，并编写测试程序。
本题包含多组测试数据,组数小于10000组。
输入格式说明：每组测试数据输入占一行，包括两个整数，依次为x，y，整数范围皆在-10000~10000之间（闭区间），遇文件尾测试结束。
输出格式说明：对于每组测试数据，输出交换前x、y的值和交换后x、y的值。
需要在第i组测试数据结果输出前添加一行提示信息:“CASE i:”，表示是第i组测试数据对应的结果，相邻两组测试样例的输出结果之间空一行。
样例输入
10 20
45 145
样例输出
Case 1:
Before Swap:a=10 b=20
After Swap:a=20 b=10

Case 2:
Before Swap:a=45 b=145
After Swap:a=145 b=45
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

#define swap(x,y) int t=x,x=y,y=t
int cnt,a,b;
int main(){
	cnt=1;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(cnt>1) printf("\n");
		printf("Case %d:\n",cnt);
		printf("Before Swap:a=%d b=%d\n",a,b);
		swap(a,b);
		printf("After Swap:a=%d b=%d\n",a,b);
		cnt++; 
	}
	return 0;
} 
