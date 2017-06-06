/*输入两个实数和一个四则运算符（+，-，*，/），根据运算符执行相应的运算并输出运算结果，要求分别用if语句和switch语句来实现。
本题包含多组测试数据。
输入格式说明：每组测试数据输入占一行，包括处理方式（t），两个实数(均不为零)和一个四则运算符号，四者之间用空格隔开，遇文件尾测试结束。当t=0时，输出用if语句处理后的结果；当t=1时，输出用switch语句处理后的结果；当t=2时，同时输出两种语句处理后的结果。<br />
实数范围在-100000~100000之间；
输出格式说明：每组测试样例的输出结果占一行，结果保留两位小数，相邻两组测试样例的输出结果之间空一行。
样例输入
1 -6.2 -9.3 +
2 2 -2 -
2 8 5 /
0 4 7.2 *
样例输出
After switch processing,the result is : -15.50

After if-else processing,the result is : 4.00
After switch processing,the result is : 4.00

After if-else processing,the result is : 1.60
After switch processing,the result is : 1.60

After if-else processing,the result is : 28.80
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int t,cnt;
double x,y;
char c;
void if_go(){
	double ans;
	if(c=='+') ans=x+y;
	else if(c=='-') ans=x-y;
	else if(c=='*') ans=x*y;
	else ans=x/y;
	printf("After if-else processing,the result is : %.2lf\n",ans);
}
void switch_go(){
	double ans;
	switch(c){
		case('+'): {ans=x+y;break;} 
		case('-'): {ans=x-y;break;} 
		case('*'): {ans=x*y;break;} 
		default: ans=x/y;
	}
	printf("After switch processing,the result is : %.2lf\n",ans);
}
int main(){
	while(scanf("%d",&t)!=EOF){
		if(cnt!=0) printf("\n");
		scanf("%lf%lf",&x,&y);
		getchar();
		scanf("%c",&c); 
		if(t==0) if_go();
		if(t==1) switch_go();
		if(t==2){
			if_go();
			switch_go();
		}
		cnt++;
	}
	return 0;
} 
