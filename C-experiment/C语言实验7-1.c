/*���һ���ֶνṹstruct bits������һ��8λ�޷����ֽڴ����λ�����λ����Ϊ8���ֶΣ�
���ֶ�����Ϊbit0, bit1, ��, bit7����bit0�����ȼ���ߡ�
ͬʱ���8����������i��������biti(i=0,1,2,��,7)Ϊ�����������ں����������biti��ֵ��
��8�����������ִ���һ������ָ������p_fun�����bit0Ϊ1������p_fun[0]ָ��ĺ�����
���struct bits���ж�λΪ1����������ȼ��Ӹߵ������ε��ú���ָ������p_fun����ӦԪ��ָ��ĺ�����
8�������еĵ�0�������������Ϊ��
		void f0(struct bits b)
{
	Printf("the function %d is called!\n",b);
} */ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct ISR_BITS{
	unsigned int bits0:1;
	unsigned int bits1:1;
	unsigned int bits2:1;
	unsigned int bits3:1;
	unsigned int bits4:1;
	unsigned int bits5:1;
	unsigned int bits6:1;
	unsigned int bits7:1;
}; 
union ISR_REG{
	unsigned short all;
	struct ISR_BITS bit;
}bit_now;
int num[100],n;
void (*p_isr[8])(void);
void isr0(){
	printf("The Interrupt Service Routine isr0 is called!\n");
}
void isr1(){
	printf("The Interrupt Service Routine isr1 is called!\n");
}
void isr2(){
	printf("The Interrupt Service Routine isr2 is called!\n");
}
void isr3(){
	printf("The Interrupt Service Routine isr3 is called!\n");
}
void isr4(){
	printf("The Interrupt Service Routine isr4 is called!\n");
}
void isr5(){
	printf("The Interrupt Service Routine isr5 is called!\n");
}
void isr6(){
	printf("The Interrupt Service Routine isr6 is called!\n");
}
void isr7(){
	printf("The Interrupt Service Routine isr7 is called!\n");
}
int main(){
	p_isr[0]=isr0;p_isr[1]=isr1;p_isr[2]=isr2;p_isr[3]=isr3;
	p_isr[4]=isr4;p_isr[5]=isr5;p_isr[6]=isr6;p_isr[7]=isr7;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&num[i]);
	for(int i=1;i<=n;i++){
		printf("%d:\n",num[i]);
		for(int j=0;j<1;j++){
			if(num[i]&1) bit_now.bit.bits0=1;
			else bit_now.bit.bits0=0;
			num[i]>>=1;
		}
		for(int j=1;j<2;j++){
			if(num[i]&1) bit_now.bit.bits1=1;
			else bit_now.bit.bits1=0;
			num[i]>>=1;
		}
		for(int j=2;j<3;j++){
			if(num[i]&1) bit_now.bit.bits2=1;
			else bit_now.bit.bits2=0;
			num[i]>>=1;
		}
		for(int j=3;j<4;j++){
			if(num[i]&1) bit_now.bit.bits3=1;
			else bit_now.bit.bits3=0;
			num[i]>>=1;
		}
		for(int j=4;j<5;j++){
			if(num[i]&1) bit_now.bit.bits4=1;
			else bit_now.bit.bits4=0;
			num[i]>>=1;
		}
		for(int j=5;j<6;j++){
			if(num[i]&1) bit_now.bit.bits5=1;
			else bit_now.bit.bits5=0;
			num[i]>>=1;
		}
		for(int j=6;j<7;j++){
			if(num[i]&1) bit_now.bit.bits6=1;
			else bit_now.bit.bits6=0;
			num[i]>>=1;
		}
		for(int j=7;j<8;j++){
			if(num[i]&1) bit_now.bit.bits7=1;
			else bit_now.bit.bits7=0;
			num[i]>>=1;
		}
		if(bit_now.bit.bits0==1) p_isr[0]();
		if(bit_now.bit.bits1==1) p_isr[1]();
		if(bit_now.bit.bits2==1) p_isr[2]();
		if(bit_now.bit.bits3==1) p_isr[3]();
		if(bit_now.bit.bits4==1) p_isr[4]();
		if(bit_now.bit.bits5==1) p_isr[5]();
		if(bit_now.bit.bits6==1) p_isr[6]();
		if(bit_now.bit.bits7==1) p_isr[7]();
		printf("\n");	
	}
	return 0;
}

