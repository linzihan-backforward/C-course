/*输入A,B,C三个学生的考试分数（皆为正整数，范围0~100），输出分数居中的那个学生的名字（A、B或C）以及考试分数。
注：当A,B,C中存在分数相等的情况时，只需输出一个结果，按照A、B、C的优先顺序输出唯一结果。
本题包含多组测试数据。
输入格式说明：每组测试数据输入占一行，包括三个正整数，分别代表A、B、C的考试分数，遇文件尾测试结束。
输出格式说明：每组测试样例的输出结果占一行。
样例输入
90 90 90
60 88 88
18 95 47
样例输出
A:90
B:88
C:47
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct person{
	int score;
	char name;
}in[3]; 
int cmp(const void *a,const void *b){
	if((*(struct person *)a).score!=(*(struct person *)b).score) return (*(struct person *)a).score<(*(struct person *)b).score;
	else return (*(struct person *)a).name>(*(struct person *)b).name; 
}
int main(){
	while(scanf("%d",&in[0].score)!=EOF){
		scanf("%d%d",&in[1].score,&in[2].score);
		in[0].name='A';in[1].name='B';in[2].name='C';
		qsort(in,3,sizeof(in[0]),cmp);	
		if(in[0].score==in[1].score) printf("%c:%d\n",in[0].name,in[0].score);
		else printf("%c:%d\n",in[1].name,in[1].score);
	}
	
	return 0;
} 
