/*���蹤��˰�����·������㣺x<1000Ԫ������ȡ˰��;
1000<=x<2000,��ȡ5%��˰��2000<=x<3000,��ȡ10%��˰��
3000<=x<4000,��ȡ15%��˰��4000<=x<5000,��ȡ20%��˰��
x>5000,��ȡ25%��˰��
��дһ���������빤�ʽ����Ӧ��ȡ˰���ȣ�Ҫ��ֱ���if����switch�����ʵ�֡�
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
