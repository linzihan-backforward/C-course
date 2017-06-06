/*选择法排序是从n个数中先找出最大或最小的数放在数组的最前面或最后面，
再在剩余的n-1个数中找出最大或最小的数放在数组的次前面或倒数第2单元，依此类推，直至排序完毕。
编程输入n个整数，用选择法排序将它们按升序重新排列后输出。
输入：有多组输入，每组输入对应两行，第一行是输入整数的个数n，第二行为n个整数。当n为0时程序结束运行。
输出：每组输入对应一行输出，输出按升序重新排列后的整数，两个整数用空格隔开，最后一个数后无空格。
样例输入
6
6 5 4 3 2 1
7
23 5 66 8 99 54 36
1
23
0
样例输出
1 2 3 4 5 6
5 8 23 36 54 66 99
23
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[30];
void sort(int x[]){
	for(int i=1;i<=n;i++){
		int min=0x3f;
		for(int j=i;j<=n;j++)
			if(x[j]<x[i]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
	}
}
int main(){
	while(scanf("%d",&n)){
		if(n==0) break;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		sort(a);
		for(int i=1;i<=n;i++){
			if(i==n) printf("%d\n",a[i]);
			else printf("%d ",a[i]);
		}
	}
	return 0;
} 
