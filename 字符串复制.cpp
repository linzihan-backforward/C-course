/*编写函数 mycpy(s,t,n)，它将字符数组t中的前n个字符复制到字符数组s中，并形成字符串。在主函数中调用该函数，并输出字符串s。
输入：第一行为正整数N，表示有N组输入数据；每组输入对应两行，第一行为字符串t（长度小于1000），第二行为正整数n（小于等于字符串t的长度）。
输出：每组输入对应一行输出，输出复制后的字符串s
样例输入
4
   aaa   aaa   aaa   
9
aaa aaa bb cc    123
17
Ever tried. Ever failed. Try Again. Fail again. Fail better.
24
          a         
11
样例输出
   aaa   
aaa aaa bb cc    
Ever tried. Ever failed.
          a
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
char a[1005],b[1005];
int n,k; 
int gets(){
	int t=0;
	while(scanf("%c",&a[t])){
		if(a[t]=='\n') break;
		t++;
	}	 
	//printf("%c",a[t-1]);
	//printf("%d\n",t-1);
	return t-1;
}
void strcpys(char y[],char x[],int len){
	int t=0;
	for(int i=0;i<len;i++)
		y[i]=x[i];
	y[len]='\0';	
}
int main(){
	scanf("%d",&n);getchar();
	for(int i=1;i<=n;i++){
		int len=gets();
		scanf("%d",&k);
		//printf("%d",k);
		if(i!=n) getchar();
		strcpys(b,a,k);
		//if(b[k]=='\0')
		for(int j=0;b[j]!='\0';j++)
			printf("%c",b[j]);
		printf("\n");	
		//printf("%s\n","hello");
		//printf("%s\n",b);
	}
	
	
	
}
