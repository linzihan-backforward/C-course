/*编写一个程序，实现以下功能：
从键盘输入一行英文句子，将每个单词的首字母换成大写字母，然后输出到一个磁盘文件"test"中保存。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char s[100];
int main(){
	freopen("test.txt","w",stdout);
	fgets(s,100,stdin);
	int  space=0;
	if(s[0]>='a'&&s[0]<='z') s[0]-=32;
	for(int i=1;s[i]!='\n';i++){
		if(s[i]==' ') {
			space++;
			continue;
		}
		if(space>0){
			if(s[i]>='a'&&s[i]<='z')s[i]-=32;
			space=0;
		}		
	}
	printf("%s",s);
	fclose(stdout);
	return 0;
}
