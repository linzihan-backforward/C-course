/*
�õ���������һ�Ű༶�ɼ���������ÿ��ѧ����ѧ�š�������Ӣ��ߵ���ѧ����ͨ����C���Գ���������ſγ̵ĳɼ����ú������ʵ�����й��ܣ�
(1) ����ÿ��ѧ���ĸ�����Ϣ�� 
(2) ���ÿ��ѧ���ĸ�����Ϣ��
(3) �޸�ָ��ѧ����ָ������������ݡ�
(4) ͳ��ÿ��ͬѧ��ƽ���ɼ�������2λС������
(5) �����λͬѧ��ѧ�š����������ſγ̵��ܳɼ���ƽ���ɼ���

*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct Student{
	char num[15];
	char name[20];
	float math,physics,english,c;
	float sum,avg;
	struct Student *next;
};
int n,m; 
void Studentcopy(struct Student *a,struct Student *b){
	strcpy(b->num,a->num);
	strcpy(b->name,a->name);
	b->avg=a->avg;
	b->sum=a->sum;
	b->english=a->english;
	b->math=a->math;
	b->physics=a->physics;
	b->c=a->c;
}
int main(){
	scanf("%d",&n);
	struct Student *head=(struct Student *)malloc(sizeof(struct Student));
	struct Student *tail=head;
	scanf("%s%s%f%f%f%f",head->num,head->name,&head->english,&head->math,&head->physics,&head->c);
	for(int i=1;i<n;i++){
		tail->next=(struct Student *)malloc(sizeof(struct Student));
		tail=tail->next;
		scanf("%s%s%f%f%f%f",tail->num,tail->name,&tail->english,&tail->math,&tail->physics,&tail->c);
		tail->next=NULL;
	}
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	tail=head;
	for(;tail!=NULL;tail=tail->next){
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",tail->num,tail->name,tail->english,tail->math,tail->physics,tail->c);
	}
	printf("\n");
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		char temp_num[15],subject[10];
		float new_score;
		scanf("%s%s%f",temp_num,subject,&new_score);
		tail=head;
		for(;tail!=NULL;tail=tail->next)
			if(strcmp(tail->num,temp_num)==0) break;
		if(strcmp(subject,"English")==0) tail->english=new_score;
		if(strcmp(subject,"Math")==0) tail->math=new_score;	
		if(strcmp(subject,"Physics")==0) tail->physics=new_score;
		if(strcmp(subject,"C")==0) tail->c=new_score;
	}
	printf("Alter:\n%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
	tail=head;
	for(;tail!=NULL;tail=tail->next){
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",tail->num,tail->name,tail->english,tail->math,tail->physics,tail->c);
	}
	printf("\nSumAndAvg:\n");
	tail=head;
	for(;tail!=NULL;tail=tail->next){
		tail->sum=tail->english+tail->math+tail->physics+tail->c;
		tail->avg=tail->sum/4.0;
	} 
	printf("%-15s%-20s%-10s%-10s\n","ID","Name","SUM","AVG");
	tail=head;
	for(;tail!=NULL;tail=tail->next){
		printf("%-15s%-20s%-10.2f%-10.2f\n",tail->num,tail->name,tail->sum,tail->avg);
	}
	printf("\nSort:\n");
	tail=head;
	struct Student *temp;
	struct Student *temp1=(struct Student *)malloc(sizeof(struct Student));
	for(;tail!=NULL;tail=tail->next)
		for(temp=tail->next;temp!=NULL;temp=temp->next){
			if(temp->avg<tail->avg){
				Studentcopy(temp,temp1);
				Studentcopy(tail,temp);
				Studentcopy(temp1,tail);
			}
				
		}
	printf("%-15s%-20s%-10s\n","ID","Name","AVG");		
	tail=head;
	for(;tail!=NULL;tail=tail->next){
		printf("%-15s%-20s%-10.2f\n",tail->num,tail->name,tail->avg);
	}		
	printf("\n");
	struct Student *temp3=head;
	struct Student *temp2=temp3->next;
	while(temp2!=NULL){
		free(temp3);
		temp3=temp2;
		temp2=temp2->next;
	}
	free(temp3);
	return 0;
}
