/*给定圆柱体的高，计算表面积和体积*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

const double PII=3.1415926; 
int cases;
double h,r;
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%lf%lf",&r,&h);
		printf("%.6lf %.6lf\n",2*PII*r*r+2*PII*r*h,PII*r*r*h);
		
	}
	return 0;
}
