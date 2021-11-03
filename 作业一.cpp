#include<stdio.h>
int SplitNum(int num[],int x);
int IsPrime(int x);
int Average(int a[],int x);
int main(){
	int x=100;
	int a[221]={0}; //numbers of superprime
	int n=0,i=0;
	
	for(;x<=10000;x++){
		
		int num[5]={0};//every digits of x
		
		if(IsPrime(x)){
			
			SplitNum(num,x);
			int sum=num[0]+num[1]+num[2]+num[3]+num[4];
			int sum2=num[0]*num[0]+num[1]*num[1]+num[2]*num[2]+num[3]*num[3]+num[4]*num[4];
			
			if(IsPrime(sum) && IsPrime(sum2)){
				a[i++]=x;
				printf("%d\n",x);
				n++;
			}
		}
	}
	printf("average£º%d",(Average(a,n)/n));	
	return 0;
	
}
int SplitNum(int num[],int x){
	for(int i=0;x>0;i++,x/=10){
		num[i]=x%10;
	}
	return 0;
}

int IsPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(!(x%i))
		return 0;
	}
	return 1;
}
int Average(int a[],int x){
	int sum=0,i=0;
	for(;x>0;x--){
		sum+=a[i++];
	}
	return sum;
}
