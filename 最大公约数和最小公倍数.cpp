/*�������������������ǵ����Լ������С��������
���룺�ж������룬ÿ������������������������Ϊ0ʱ������������С�
�����ÿ�������Ӧһ�����(�Ի��з�����)�����Լ�� ��С������
��������
1 20
5 15
20 30
88 88
16 100
0 0
�������
1 20
5 15
10 60
88 88
4 400
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int gcd(int x,int y){
	if(y==0) return x;
	return gcd(y,x%y);
} 
int a,b;
int main(){
	while(scanf("%d%d",&a,&b)){
		if(a==0&&b==0) break;
		int ans=gcd(a,b);
		printf("%d %d\n",ans,a*b/ans);
	}
	return 0;
}

