#include <stdio.h>
int main(){
    int current_speed = 57;
    int speed_limit = 60;
    //We will write 3 conditionals to determine if the current speed is 
    // less than or greater than the limit

    //if else
    if (current_speed <= speed_limit){
        printf("Not Passed Speed Limit\n");
    } else {
        printf("Passed The Speed Limit, Slow Down!\n");
    }

    //ternary
    int passed_speed;
    passed_speed = current_speed <= speed_limit ? 0 : 1;
    printf("Speed Limit Boolean: %d\n", passed_speed);

    //switch... I don't think I can use a switch here...
    switch(current_speed){
        case 57: 
            printf("Not Passed Speed Limit\n");
            break;
        default:
            printf("Unknown");
            break;
    }
    return 0;
}