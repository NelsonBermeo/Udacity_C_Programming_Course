#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(){
     int num = 83;
     int is_prime_ = is_prime(num);
     if (is_prime_ == 1){
        printf("Number is Prime!");
     } else {
        printf("Number is Not Prime");
     }
}

int is_prime(int n){

    if (n <= 1){
        return 0;
    }
    double n_squared = sqrt( (double) n );
    double n_squared_ceil = ceil(n_squared);
    for (int i = 2; i <= n_squared_ceil; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}