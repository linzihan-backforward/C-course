/*��ĳ������N��ѧ����ÿ��ѧ������M�ſγ̣���#define����N��M����
����M�ſγ̵����ƣ�Ȼ����������N��ѧ����ÿ��ѧ�����޵�M�ſγ̵ĳɼ����Ҷ���ŵ���Ӧ�������С�
��д���к�����
a.����ÿ��ѧ�����ſγ�ƽ���ɼ���
b.����ȫ��ÿ�ſγ̵�ƽ���ɼ���
c.�ֱ�ͳ�Ƶ���ȫ����ſγ�ƽ���ɼ���������
d.�ֱ�ͳ��ȫ����ſγ̲������������90�����ϣ���90�֣���������
�ڵ��ú������������������ļ���������Ҫ����ָ�����������ʹ���±��������

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
