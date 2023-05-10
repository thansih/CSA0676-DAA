#include <stdio.h>
int main(){
    int a,b,gcd;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    while(a!=b){
        if(a>b){
            a-=b;
            gcd=a;
        }
        else{
            b-=a;
            gcd=b;
        }
        
    }
    printf("gcd=%d",gcd);
}