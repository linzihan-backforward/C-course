/*��֤��°ͺղ��룺�κγ�ִ󣨡�4����ż������������������֮�ͱ�ʾ���������ż������������֮�͵���ʽ�����
�����������������ݡ�
�����ʽ˵������һ������n��ʾ���������ĸ����������������n�����룬ÿ���������1��ż����ż����Χ��4~100֮�䡣
�����ʽ˵����ÿ�����������������ռһ��,���Ի��з�������
��������
3
46
88
100
�������
46=3+43
88=5+83
100=3+97
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
int n;
int isprime[105];
void prime(){
	for(int i=2;i<=101;i++)	
		if(!isprime[i])
			for(int j=2;j*i<=101;j++)
				isprime[j*i]=1;

}
int main(){
	scanf("%d",&cases);
	prime();
	while(cases--){
		scanf("%d",&n);
		for(int i=2;i<=n;i++)
			if((!isprime[i])&&(!isprime[n-i])){
				printf("%d=%d+%d\n",n,i,n-i);
				break;
			}
	}
	
	return 0;
} 
