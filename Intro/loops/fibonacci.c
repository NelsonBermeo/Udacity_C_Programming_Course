#include <stdio.h>
int main(){
    //The fibonacci sequence is a number sequence that begins with 
    // 0 and 1 and every subsequent number is the sum of the previous
    // two numbers
    //The first 10 digts are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    //Lets code this using a while and for loop

    //for 
    int a = 0;
    int b = 1;
    printf("Fibonacci Seq: \n%d\n%d\n", a, b);
    for (int i = 0 ; i < 8 ; i++){
        int old_a = a;
        printf("%d\n", a+b);
        a = b;
        b = old_a +b;
    }

    //while 
    a = 0;
    b = 1;
    printf("While Loop Fibonacci Seq: \n%d\n%d\n", a, b);
    while ((a+b) <= 35){
        int old_a = a;
        printf("%d\n", a+b);
        a = b;
        b = old_a +b;
    }
    

    
    return 0;
}