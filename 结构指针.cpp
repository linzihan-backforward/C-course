/*设有结构类型声明struct Student{int num;char name[19]; double score;}; num、name、score分别是学号、姓名、成绩。
请编程完成下列任务：（1）定义有3个元素的结构数组s并根据输入对其进行初始化，同时定义结构指针p并使其指向s[0]；
（2）不用指针p，依次输出各个元素的各成员之值；
（3）用指针p，依次输出各个元素的各成员之值(学号与姓名之间用tab符隔开，姓名输出宽度为20，左对齐)。
输入：第一行为正整数N，表示有N组输入；每组输入包含三行，第一行是一个学生信息。
输出：每组输入对应一组输出
注意：请严格按要求使用结构体和指针，否则按 “未完成” 处理。
样例输入
2
20140101 ZhangChuanChao 88.88
20140119 XiDaDa 99.99
20140156 MeiMingZi 56
20140200 MaiDouDou 89.65
20140289 XiaoDouDou 86
20140210 DaoDaoDog 90.2
样例输出
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
