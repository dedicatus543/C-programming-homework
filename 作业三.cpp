//f(n)�������� 0~n������1�ĸ���
//f(13)=6 (1,10,11,12,13)
//f(1)=1 ��f(n)=n
#include<stdio.h>
long f(long number);

int main(){
	long i=2;
	for(;f(i)!=i;i++){
		printf("%ld %ld\n",i,f(i));
	}
	
	printf("%ld is the target",i);
	return 0;
}
long f(long number){
	long a=number;
	
	if(a==1)
	return 1;
	
	int b[30]={0},self=0;
	
	for(int i=0;a>0;a/=10,i++){
		b[i]=a%10;
		if(b[i]==1)
		self++;
	}
	long ret=self+f(number-1);
	return ret;
	
	
}
