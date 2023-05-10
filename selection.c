#include <stdio.h>

int main() {
    int n;
    int a[100];
    int i,j,temp,min;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the elements");
    for( i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for ( i=0;i<n;i++){
        min=i;
        for( j=0;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)  {
        printf(" %d", a[i]);
    }
   return 0 ;
}