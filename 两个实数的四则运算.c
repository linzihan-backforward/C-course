/*��������ʵ����һ�������������+��-��*��/�������������ִ����Ӧ�����㲢�����������Ҫ��ֱ���if����switch�����ʵ�֡�
�����������������ݡ�
�����ʽ˵����ÿ�������������ռһ�У���������ʽ��t��������ʵ��(����Ϊ��)��һ������������ţ�����֮���ÿո���������ļ�β���Խ�������t=0ʱ�������if��䴦���Ľ������t=1ʱ�������switch��䴦���Ľ������t=2ʱ��ͬʱ���������䴦���Ľ����<br />
ʵ����Χ��-100000~100000֮�䣻
�����ʽ˵����ÿ�����������������ռһ�У����������λС���������������������������֮���һ�С�
��������
1 -6.2 -9.3 +
2 2 -2 -
2 8 5 /
0 4 7.2 *
�������
After switch processing,the result is : -15.50

After if-else processing,the result is : 4.00
After switch processing,the result is : 4.00

After if-else processing,the result is : 1.60
After switch processing,the result is : 1.60

After if-else processing,the result is : 28.80
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int t,cnt;
double x,y;
char c;
void if_go(){
	double ans;
	if(c=='+') ans=x+y;
	else if(c=='-') ans=x-y;
	else if(c=='*') ans=x*y;
	else ans=x/y;
	printf("After if-else processing,the result is : %.2lf\n",ans);
}
void switch_go(){
	double ans;
	switch(c){
		case('+'): {ans=x+y;break;} 
		case('-'): {ans=x-y;break;} 
		case('*'): {ans=x*y;break;} 
		default: ans=x/y;
	}
	printf("After switch processing,the result is : %.2lf\n",ans);
}
int main(){
	while(scanf("%d",&t)!=EOF){
		if(cnt!=0) printf("\n");
		scanf("%lf%lf",&x,&y);
		getchar();
		scanf("%c",&c); 
		if(t==0) if_go();
		if(t==1) switch_go();
		if(t==2){
			if_go();
			switch_go();
		}
		cnt++;
	}
	return 0;
} 
