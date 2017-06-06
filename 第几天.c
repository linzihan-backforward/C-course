/*输入一个日期（年、月、日），计算并输出该日期是这一年的第几天。
输入：第一行为正整数N，表示有N组输入；接下来的N行，每行有3个正整数，分别表示年、月、日（正确的日期）。
输出：每行输入对应一行输出：表示第几天的正整数。
样例输入
6
1604 5 1
1900 5 1
1600 5 1
2015 12 31
1600 2 20
2015 1 5
样例输出
122
121
122
365
51
5
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int year,month,day;
int a_normal_year_month_have_day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int a_run_year_month_have_day[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int flag;
int cases;
int calc(int f){
	int count=0;
	if(f==0) {
		for(int i=1;i<month;i++)
			count+=a_normal_year_month_have_day[i];
		count+=day;
	}
	else {
		for(int i=1;i<month;i++)
			count+=a_run_year_month_have_day[i];
		count+=day;
	}
	return count;
}
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%d%d%d",&year,&month,&day);
		if((year%4==0&&year%100!=0)||year%400==0) flag=1;
		else flag=0;
		printf("%d\n",calc(flag));
	}
}
