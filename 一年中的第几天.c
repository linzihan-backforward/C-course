/*输入一个日期（年、月、日），计算并输出该日期是这一年的第几天。
本题包含多组测试数据。
输入格式说明：每组测试数据输入占一行，包括三个正整数，分别代表年、月、日，遇文件尾测试结束
输出格式说明：每组测试样例的输出结果占一行(以换行符结束)。
样例输入
2000 3 29
1993 1 1
样例输出
该日期是这一年中的第89天
该日期是这一年中的第1天
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
	while(scanf("%d",&year)!=EOF){
		scanf("%d%d",&month,&day);
		if((year%4==0&&year%100!=0)||year%400==0) flag=1;
		else flag=0;
		printf("该日期是这一年中的第%d天\n",calc(flag));
	}
}
