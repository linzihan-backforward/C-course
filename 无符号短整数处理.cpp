/*�����޷��Ŷ��������������4λ�͵�4λ������Ľ��
���룺��һ��Ϊ������N����ʾ�����������������µ�N���ǳ�����Ҫ�����N���޷��Ŷ�������
�������ÿ�������Ӧһ�������������
1234
5678
5695
1024
�������
9424
58913
63025
1024
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int cases;
unsigned short n;
int main(){
	scanf("%d",&cases); 
	while(cases--){
		scanf("%hu",&n);	
		printf("%hu\n",(n<<12)|(n>>12)|(n&0x0ff0));
	}
	return 0;
}
