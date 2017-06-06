/*从键盘输入n个整数并放到数组x中，编写一个函数，它将数组x中的元素颠倒后仍然存放在原数组中。
要求始终只用一个数组，并且在调用函数main中输出颠倒顺序后数组x中的各个元素。
输入：第一行为正整数N，表示有N组输入；每组输入包含两行，第一行为整数个数n，第二行为n个整数。
输出：每组输入对应一行输出，输出颠倒后的整数，两个整数间用空格隔开，最后一个整数后无空格
注意：只使用一个数组；在main函数中输出颠倒后的元素；使用指针操作数组。不符合要求的按 “未完成” 处理。
样例输入
3
6
1 2 3 4 5 6
5
84 6768 48 878 8
3
528 98 40
样例输出
6 5 4 3 2 1
8 878 48 6768 84
40 98 528
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int x[100];
int n,N;
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t; 
}
int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&x[i]);
		int *head=x+1;
		int *tail=x+n;	
		while(head<tail){
			swap(head,tail);
			head++;
			tail--;
		}
		for(int i=1;i<n;i++)
			printf("%d ",x[i]);
		printf("%d\n",x[n]);	
	}
	return 0;
}
