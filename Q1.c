#include<stdio.h>
int main(){
    int a,b,c,d=0;
    printf("Enter a number");
    scanf("%d",&a);

    b=a;
    while (b!=0){
        c=b%10;
        d=d+(c*c*c);
        b=b/10;

    }
    if (d==a){
        printf("%d is Armstrong number\n",a);
        
    }
    else {
        printf("%d is not armstrong number\n",a);

    }
    return 0;


}
