#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
         evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
        printf("Sum of even numbers is%d\n",evensum);
        printf("Sum of odd numbers is%d\n",oddsum);
        return 0;

    }