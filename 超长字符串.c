/*����һ�����������Ƴ����ַ�������һ���Ƚ��ȳ�����ÿ���ڵ����һ�������ַ��ĵ��������������ַ�����
Ȼ�����������ʾ������������е������ַ���
���ó����ַ��������ࣨ�������һ���ֽڵĴ洢�ռ䣩�ش�ŵ�һ��ͨ����̬�洢���䴴�����ַ������У���
��ͨ��printf��������ʾ��������ó����ַ�����
���룺һ�������ַ�������#������
����������������Ľ�����Ի��з��������������ַ������Ľ��(�Ի��з�����)���������֮����һ���и�����
ע�⣺���ϸ�ʹ������Ͷ�̬�ڴ���䣬���� ��δ��ɡ� ����
��������
Hello! How are you!#
�������
Hello! How are you!

Hello! How are you!
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

struct Node {
	char c;
	struct Node *next;
}; 
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *tail=head;head->next=NULL;
	int len=0;
	while(scanf("%c",&tail->c)!=EOF){
		tail->next=(struct Node *)malloc(sizeof(struct Node));
		tail=tail->next;
		len++;	
	}
//	printf("%d\n",len);
	tail->c='\0';
	char *s=(char *)malloc(len*sizeof(char));
	tail=head;
	char *p=s;
	for(;tail!=NULL,tail->c!='\0';tail=tail->next){
		printf("%c",tail->c);
		*s++=tail->c; 
	}	
	*s='\0';
	printf("\n\n");
	printf("%s",p);printf("\n");
	return 0;
	
}
