/*��д���� mycpy(s,t,n)�������ַ�����t�е�ǰn���ַ����Ƶ��ַ�����s�У����γ��ַ��������������е��øú�����������ַ���s��
���룺��һ��Ϊ������N����ʾ��N���������ݣ�ÿ�������Ӧ���У���һ��Ϊ�ַ���t������С��1000�����ڶ���Ϊ������n��С�ڵ����ַ���t�ĳ��ȣ���
�����ÿ�������Ӧһ�������������ƺ���ַ���s
��������
4
   aaa   aaa   aaa   
9
aaa aaa bb cc    123
17
Ever tried. Ever failed. Try Again. Fail again. Fail better.
24
          a         
11
�������
   aaa   
aaa aaa bb cc    
Ever tried. Ever failed.
          a
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
char a[1005],b[1005];
int n,k; 
int gets(){
	int t=0;
	while(scanf("%c",&a[t])){
		if(a[t]=='\n') break;
		t++;
	}	 
	//printf("%c",a[t-1]);
	//printf("%d\n",t-1);
	return t-1;
}
void strcpys(char y[],char x[],int len){
	int t=0;
	for(int i=0;i<len;i++)
		y[i]=x[i];
	y[len]='\0';	
}
int main(){
	scanf("%d",&n);getchar();
	for(int i=1;i<=n;i++){
		int len=gets();
		scanf("%d",&k);
		//printf("%d",k);
		if(i!=n) getchar();
		strcpys(b,a,k);
		//if(b[k]=='\0')
		for(int j=0;b[j]!='\0';j++)
			printf("%c",b[j]);
		printf("\n");	
		//printf("%s\n","hello");
		//printf("%s\n",b);
	}
	
	
	
}
