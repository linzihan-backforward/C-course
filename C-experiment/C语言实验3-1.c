/*������û������������������������������Լ���������֮��Ҫ���õݹ麯��ʵ�������Լ������
ͬʱ�Ե�����ʽִ�иó��򣬹۲�ݹ���̡�
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int x,y;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	while(scanf("%d%d",&x,&y)){
		if(x==0) break;
		printf("%d\n",gcd(x,y));
	} 
	return 0;
} 

