//编写一个程序，将用户输入的任意正整数逆转，例如，输入1234，输出4321。 

//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char s[100];
int main(){
	while(scanf("%s",s)){
		if(s[0]=='0') break;
		//char *ans=strrev(s);
		for(int i=strlen(s)-1;i>=0;i--)
			printf("%c",s[i]);
		printf("\n");	
	} 
	
	return 0;
}
