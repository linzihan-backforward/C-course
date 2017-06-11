/*三角形的面积是 ，其中 ，a,b,c为三角形的三边，定义两个带参数的宏，一个用来求s，另一个用来求area。
编写程序，用带参数的宏来计算三角形的面积。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
/*定义计算面积的带参数的宏*/ 
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
