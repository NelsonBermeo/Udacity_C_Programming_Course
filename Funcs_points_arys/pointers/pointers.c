#include <stdio.h>
#include <string.h>

int is_palindrome(char *arr);

int main(){
    char *myString = "hanna";
    int yes_palindrome = is_palindrome(myString);
    if (yes_palindrome == 1){
        printf("This word is a palindrome!");
    } else {
        printf("This word is NOT a palindrome!");

    }


}

int is_palindrome(char *arr){
    for (char i = 0; i < strlen(arr); i++){ //You can use int for indexing here
        if (*(arr+i) != *(arr + (strlen(arr) - 1) - i)){
            return 0;
        }
    }
    return 1;
}