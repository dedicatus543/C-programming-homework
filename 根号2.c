#include<stdio.h>

int main()
{   
    float i=1.5,a=1,b=2;
    while(i*i-2>1e-6 || 2-i*i>1e-6){
    if(i*i-2>0){
    b=i;
    i=(i+a)/2;
    
    }
    if(2-i*i>0){
    a=i;
    i=(i+b)/2;
    
    }
    }
    printf("%f",i);
    return 0;
}
