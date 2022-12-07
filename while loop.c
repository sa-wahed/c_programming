// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter your value ");
        int n, count, num = 0;
        
    scanf("%d",&n);
        int nn = n;
    printf("** Your Entered value is %d\n", n);
    printf("\n** Your Entered number reversed is: ");
    while(n != 0){
        count = n%10;
        printf("%d",count);
        n = n/10;
        num++;
    }
    printf("\nYour total number lanth is %d", num);
    
    if(nn %2 == 0){
        printf("\n This is an Even number.");
    }else{
        printf("\n This is an Odd number.");
    }
    n = nn;
    int steps=0;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    while(n!=1){
        steps++;
        
        if(n%2==0){
            n=n/2;
            printf("\n%d",n);
        }
        else{
            n=3*n+1;
            printf("\n%d",n);
        }

    }

    printf("\nNumber of steps=%d",steps);
    return 0;
}