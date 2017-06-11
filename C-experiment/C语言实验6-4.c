/*编写一个程序，输入n个数，排序后输出。排序的原则是由命令行可选参数-d决定，并且有参数-d时按递减顺序排序，
否则按递增顺序排序。要求将排序算法定义成函数，利用指向函数的指针使该函数实现递增或递减排序。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[100];
/********************************************
函数介绍：交换两个数 
输入参数：
         int *a，*b：指向要交换的数的指针 
输出参数：无
返 回 值：无
********************************************/
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
/********************************************
函数介绍：将指定数组排序 
输入参数：
         int *b：要排序的数组
		 int flag ：判断排序类型的参数 
输出参数：无
返 回 值：无
********************************************/
void sort(int *b,int flag){
	if(flag){
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(b[i]<b[j]) swap(&b[i],&b[j]);
	}
	else for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(b[i]>b[j]) swap(&b[i],&b[j]);
}
int main(int argc,char *argv[]){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	void (*p)(int *b,int x);	
	if(argc>1&&strcmp(argv[1],"-d"))//判断是否接收到-d参数 
		p(a,1);
	else p(a,0);	
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");	
	return 0;
} 
