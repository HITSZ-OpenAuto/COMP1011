#include<stdio.h>
int main(void){
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(a[j]<a[i])
            count++;
        }
        printf("%d",count);
        count=0;
        if(i!=n-1)
        printf(" ");
    }
    return 0;
}
