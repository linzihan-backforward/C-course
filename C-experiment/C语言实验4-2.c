/*�����ε������ ������ ��a,b,cΪ�����ε����ߣ����������������ĺ꣬һ��������s����һ��������area��
��д�����ô������ĺ������������ε������
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
/*�����������Ĵ������ĺ�*/ 
#define s(a,b,c) ((a+b+c)/2) 
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
double a,b,c;
int x,y,z;
int main(){
	while(scanf("%d%d%d",&x,&y,&z)!=EOF){
		a=x;b=y;c=z;
		if((x+y+z)%2) printf("%.1lf ",s(a,b,c));
		else printf("%.0lf ",s(a,b,c));
		printf("%.6lf\n",area(a,b,c));
	}
	return 0;
}
