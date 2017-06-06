//#include<iostream>
/*设计程序，将整数x从第p位开始向左n位（x从右至左编号位0~31）翻转（即1变0,0变1），其余各位保持不变。 
输入：三个整数，分别是x,p,n 输出：输出分为两行，第一行为整数翻转前的二进制（每八位输出一个空格）第二行为整数翻转后的二进制 
注:可参考课本p44的例2.19
样例输入15 0 32
样例输出00000000 00000000 00000000 00001111
		11111111 11111111 11111111 11110000
*/ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,p,x;
int ans[35];
void printout(int *temp){
	int count=0;
	for(int i=31;i>=0;i--){
		printf("%d",temp[i]);
		count++;
		if(count%8==0&&count!=32) {
			printf(" ");
		}
	}
	printf("\n"); 
}
int main(){
	scanf("%d%d%d",&x,&p,&n);
	int i=0;
	while(x){
		ans[i++]=x%2;
		x/=2;
	}
	printout(ans);
	for(int j=p;j<n+p;j++)
		ans[j]=!ans[j];
	printout(ans);
	return 0;
}

