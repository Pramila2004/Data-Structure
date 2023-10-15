#include <stdio.h>

int Fibonacci(int number){
    if(number==0){
        return 0;
    }
    else if(number==1){
        return 1;
    }
    else{
        return (Fibonacci(number-1)+Fibonacci(number-2));
    }
}

int main(){

    int number;
    printf("Enter the number to find it's Fibonacci number : ");
    scanf("%d",&number);

    int fibo=Fibonacci(number);
    printf("The Fibonacci number of %d is %d \n",number,fibo);

    
    return 0;
}