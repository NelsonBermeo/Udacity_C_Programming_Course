#include <stdio.h>
int main(){
    int num = 4;
    printf("My number is currently: %d\n", num);
    //Lets use boolean logic to halve and double this value! 
    int half = num >> 1; //Divides by 2^1 using a right shift 
    int double_num = num << 1; //Multiplies by 2^1 using a left shift
    printf("My original number halved: %d\n", half);
    printf("My original number doubled: %d\n", double_num);
    return 0;

}