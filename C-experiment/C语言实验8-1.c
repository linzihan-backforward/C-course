/*��дһ������ʵ�����¹��ܣ�
�Ӽ�������һ��Ӣ�ľ��ӣ���ÿ�����ʵ�����ĸ���ɴ�д��ĸ��Ȼ�������һ�������ļ�"test"�б��档
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
