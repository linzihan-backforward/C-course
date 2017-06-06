/*输入n个整数到数组u中，再输入正整数k,
k将数组u的n个元素划分为u[0],...,u[k-1]和u[k],...,u[n-1]两段，将两段元素交换位置但仍然存放在数组u中，输出重新排列后的数组元素。
例如，假设n=7，k=3,数组元素u[0],...,u[6]依次为1,2,3,4,5,6,7；则被交换的两段元素是u[0],...,u[2]和u[3],...,u[6]，交换的结果是4,5,6,7,1,2,3。
要求总共只能使用一个数组，数组大小不超过60，并将交换元素位置的程序定义为函数。
本题包含多组测试数据。
【输入格式说明】：每组测试数据输入占两行，第一行包括正整数n和k，n≤60，紧接着第二行依次输入n个整数，整数范围在-1000~1000之间（闭区间）；遇文件尾(ctrl+z)测试结束。
【输出格式说明】：每组测试样例的输出结果占一行，输出两段交换后的结果,每个整数用空格隔开，第一个整数前和最后一个整数后均无空格。
样例输入
7 3
1 2 3 4 5 6 7
4 2
5 7 6 8
3 1
3 7 2
样例输出
4 5 6 7 1 2 3
6 8 5 7
7 2 3
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int n,a[121],k;
int *swap(int *a){
	for(int i=1;i<=k;i++)
		a[i+n]=a[i];
	return a+k;
} 
int main(){
	while(scanf("%d%d",&n,&k)!=EOF){
		//printf("%d%d\n",n,k);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);	
		int *b=swap(a);
		for(int i=1;i<=n;i++){
			if(i!=n) printf("%d ",b[i]);
			else printf("%d\n",b[i]);
		}
	}	
	return 0;
} 
