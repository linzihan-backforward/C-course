/*假设工资税金按以下方法计算：x<1000元，不收取税金;
1000<=x<2000,收取5%的税金；2000<=x<3000,收取10%的税金；
3000<=x<4000,收取15%的税金；4000<=x<5000,收取20%的税金；
x>5000,收取25%的税金。
编写一个程序，输入工资金额，输出应收取税金额度，要求分别用if语句和switch语句来实现。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
const double eps=1e-6;
double n,ans;
double min(double x,double y){
	if(x-y>eps) return y;
	return x;
}
int main(){
	while(scanf("%lf",&n)){
		ans=0.0;
		if(abs(n)<eps) break;
		if(n-5000>eps)
			ans+=(n-5000.0)*0.25;
		if(n-4000>eps)
			ans+=(min(n,5000.0)-4000.0)*0.2;
		if(n-3000>eps)
			ans+=(min(n,4000.0)-3000.0)*0.15;
		if(n-2000>eps)
			ans+=(min(n,3000.0)-2000.0)*0.1;
		if(n-1000>eps)
			ans+=(min(n,2000.0)-1000.0)*0.05;
		printf("%.6lf\n",ans);	
	}
	return 0;
} 
