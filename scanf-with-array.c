#include <stdio.h>

int main(){
    char username [6];
    puts("Enter the username: ");
    scanf("%s", &username);

    printf("The username is: %s", username);

    for(int i =0; i< 5; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}