#include <stdio.h>

int factorial(int number){
    if(number>=1){
        return number*factorial(number-1);
    }
    else{
        return 1;
    }
}

int main(){

    int number;
    printf("Enter the number to find it's factorial : ");
    scanf("%d",&number);

    int facto=factorial(number);
    printf("The Factorial of %d is %d \n",number,facto);

    
    return 0;
}