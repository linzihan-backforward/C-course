/*（2）	编写一个程序, 其
功能要求是：输入一个整数，将它在内存中二进制表示的每一位转换成为对应的数字字符，
存放到一个字符数组中，然后输出该整数的二进制表示。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int array[35],n,a;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(sizeof(int)==4){
			unsigned int temp=(unsigned)a;
			for(int j=32;j>=1;j--){
				array[j]=temp&1;
				temp>>=1;
			}
			for(int j=1;j<=32;j++)
				printf("%d",array[j]);
			printf("\n");	
				
		}
		else{
			unsigned int temp=(unsigned)a;
			for(int j=16;j>=1;j--){
				array[j]=temp&1;
				temp>>=1;
			}
			for(int j=1;j<=16;j++)
				printf("%d",array[j]);
			printf("\n");
		}		
	}
} 

