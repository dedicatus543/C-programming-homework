#include<stdio.h>

int main()
{   float i=1.5;
    for(;i*i-2>1e-6||2-i*i>1e-6;i=(i+2/i)/2){
    printf("%f\n",i);
    }
    return 0;
}