/*����һ�����ڣ��ꡢ�¡��գ������㲢�������������һ��ĵڼ��졣
���룺��һ��Ϊ������N����ʾ��N�����룻��������N�У�ÿ����3�����������ֱ��ʾ�ꡢ�¡��գ���ȷ�����ڣ���
�����ÿ�������Ӧһ���������ʾ�ڼ������������
��������
6
1604 5 1
1900 5 1
1600 5 1
2015 12 31
1600 2 20
2015 1 5
�������
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
