/*���һ�������ꡢ�¡��յ����ڽṹ���ͣ�����һ�����ڣ��ꡢ�¡��գ����洢�ڽṹ�����У����㲢����ýṹ�����洢����������һ��ĵڼ��졣
���룺��һ��Ϊ������N����ʾ��N�����룻��������N�У�ÿ����3�����������ֱ��ʾ�ꡢ�¡��գ���ȷ�����ڣ���
�����ÿ�������Ӧһ���������ʾ�ڼ������������
ע�⣺����ʹ�ýṹ�����������ڣ����Խṹ�������ڽ��д��������� ��δ��ɡ� ����
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
