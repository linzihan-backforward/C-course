/*���нṹ��������struct Student{int num;char name[19]; double score;}; num��name��score�ֱ���ѧ�š��������ɼ���
��������������񣺣�1��������3��Ԫ�صĽṹ����s���������������г�ʼ����ͬʱ����ṹָ��p��ʹ��ָ��s[0]��
��2������ָ��p�������������Ԫ�صĸ���Աֵ֮��
��3����ָ��p�������������Ԫ�صĸ���Աֵ֮(ѧ��������֮����tab������������������Ϊ20�������)��
���룺��һ��Ϊ������N����ʾ��N�����룻ÿ������������У���һ����һ��ѧ����Ϣ��
�����ÿ�������Ӧһ�����
ע�⣺���ϸ�Ҫ��ʹ�ýṹ���ָ�룬���� ��δ��ɡ� ����
��������
2
20140101 ZhangChuanChao 88.88
20140119 XiDaDa 99.99
20140156 MeiMingZi 56
20140200 MaiDouDou 89.65
20140289 XiaoDouDou 86
20140210 DaoDaoDog 90.2
�������
20140101	ZhangChuanChao      88.880000
20140119	XiDaDa              99.990000
20140156	MeiMingZi           56.000000
20140101	ZhangChuanChao      88.880000
20140119	XiDaDa              99.990000
20140156	MeiMingZi           56.000000
20140200	MaiDouDou           89.650000
20140289	XiaoDouDou          86.000000
20140210	DaoDaoDog           90.200000
20140200	MaiDouDou           89.650000
20140289	XiaoDouDou          86.000000
20140210	DaoDaoDog           90.200000
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct Student{
	int num;
	char name[20];
	double score;
}s[3];
int n;
int main(){
	struct Student *p=s;
	scanf("%d",&n);
	while(n--){
		p=s;
		for(int i=0;i<3;i++)
			scanf("%d%s%lf",&s[i].num,s[i].name,&s[i].score);
		for(int i=0;i<3;i++)
			printf("%d\t%-20s%lf\n",s[i].num,s[i].name,s[i].score); 
		for(int i=0;i<3;i++){
			printf("%d\t%-20s%lf\n",p->num,p->name,p->score);
			p++;
		}
	}
	return 0;
} 
