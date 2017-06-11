/*	编写一个程序，用牛顿迭代法求方程f(x)=3x3-4x2-5x+13=0
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
const double eps=1e-6;
double f(double x){
	return 3.0*x*x*x-4.0*x*x-5.0*x+13.0; 
} 
double f_pie(double x){
	return 9.0*x*x-8.0*x-5.0;
}
double abss(double x){
	if(x>eps) return x;
	return -x;
}
double ans=0.0;
double ans1=0.0;
int main(){
	while(1){
		ans1=ans-f(ans)/f_pie(ans);
		if(abss(ans1-ans)<=eps) break;
		ans=ans1;
	}
	printf("%.6lf\n",ans);
	return 0;
}
