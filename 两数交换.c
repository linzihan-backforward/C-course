/*定义宏swap(x,y)用于交换两个参数x和y的值，并编写程序测试。
输入：第一行为正整数N，表示有N组输入，接下来的N行，每行包含两个待交换的整数。
输出：每组输出，对应输出交换结果。
样例输入
5
1 2
0 0
5 9
25 32
88 89
样例输出
2 1
0 0
9 5
32 25
89 88
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int swap(int *x,int *y){
	int t=*x;*x=*y;*y=t;
}
int n,a,b;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		swap(&a,&b);
		printf("%d %d\n",a,b);
	}
	return 0;
}
