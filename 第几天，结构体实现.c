/*设计一个含有年、月、日的日期结构类型，输入一个日期（年、月、日），存储在结构变量中，计算并输出该结构变量存储的日期是这一年的第几天。
输入：第一行为正整数N，表示有N组输入；接下来的N行，每行有3个正整数，分别表示年、月、日（正确的日期）。
输出：每行输入对应一行输出：表示第几天的正整数。
注意：必须使用结构变量保存日期，并对结构变量日期进行处理。否则作 “未完成” 处理。
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
struct Date{
	int year;
	int month;
	int day;
	int is_run;
	int nth_day;
}d[30];
int n;
int run[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int not_run[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&d[i].year,&d[i].month,&d[i].day);
		int year=d[i].year;
		if((year%4==0&&year%100!=0)||year%400==0) d[i].is_run=1;
		int ans=0;
		if(d[i].is_run){	
			for(int j=1;j<d[i].month;j++) ans+=run[j];
			ans+=d[i].day;
		}
		else {
			for(int j=1;j<d[i].month;j++) ans+=not_run[j];
			ans+=d[i].day;
		}
		printf("%d\n",ans);
	}
	return 0;
} 
