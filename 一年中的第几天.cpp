/*����һ�����ڣ��ꡢ�¡��գ������㲢�������������һ��ĵڼ��졣
�����������������ݡ�
�����ʽ˵����ÿ�������������ռһ�У������������������ֱ�����ꡢ�¡��գ����ļ�β���Խ���
�����ʽ˵����ÿ�����������������ռһ��(�Ի��з�����)��
��������
2000 3 29
1993 1 1
�������
����������һ���еĵ�89��
����������һ���еĵ�1��
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
		printf("����������һ���еĵ�%d��\n",calc(flag));
	}
}
