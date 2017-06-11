/*设某个班有N个学生，每个学生修了M门课程（用#define定义N、M）。
输入M门课程的名称，然后依次输入N个学生中每个学生所修的M门课程的成绩并且都存放到相应的数组中。
编写下列函数：
a.计算每个学生各门课程平均成绩；
b.计算全班每门课程的平均成绩；
c.分别统计低于全班各门课程平均成绩的人数；
d.分别统计全班各门课程不及格的人数和90分以上（含90分）的人数。
在调用函数中输出上面各函数的计算结果。（要求都用指针操作，不得使用下标操作。）

*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
#define N 5
#define M 5
char subject[N][20];
struct student{
	char name[20];	
	int score[N];
}stu[M],*p[M];
double ave[N];
void get_student_avescore(struct student *x){
	double ans=0.0;
	for(int i=0;i<N;i++)
		ans+=(double)(x->score[i]);	
	printf("Average score of %s is %.2lf\n",x->name,ans/N);	
}
void get_subject_avescore(int x){
	double ans=0.0;
	for(int i=0;i<M;i++)
		ans+=(double)(p[i]->score[x]);
	printf("Average score of %s is %.2lf\n",*(subject+x),*(ave+x)=ans/M);	
}
void get_under_ave_num(int x){
	int num=0;
	for(int i=0;i<M;i++)
		if((double)(p[i]->score[x])<ave[x]) num++;
	printf("Number of students lower than avg of %s is %d\n",*(subject+x),num);	
}
void get_fail_num(int x){
	int num=0;
	for(int i=0;i<N;i++)
		if(p[i]->score[x]<60) num++;
	printf("Number of students %s fail is %d\n",*(subject+x),num);	
}
void get_perfect_num(int x){
	int num=0;
	for(int i=0;i<N;i++)
		if(p[i]->score[x]>=90) num++;
	printf("Number of students %s perfect is %d\n",*(subject+x),num);
}
int main(){
	for(int i=0;i<M;i++)
		p[i]=&stu[i];
	for(int i=0;i<N;i++)
		scanf("%s",*(subject+i));
	for(int i=0;i<M;i++){
		scanf("%s",stu[i].name);
		for(int j=0;j<N;j++){
			scanf("%d",stu[i].score+j);
		}
	}
	for(int i=0;i<M;i++)
		get_student_avescore(p[i]);
	for(int i=0;i<N;i++)
		get_subject_avescore(i);	
	for(int i=0;i<N;i++)	
		get_under_ave_num(i);
	for(int i=0;i<N;i++)
		get_fail_num(i);
	for(int i=0;i<N;i++)
		get_perfect_num(i);		
	return 0;
} 
