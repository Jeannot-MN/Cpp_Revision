#include <stdio.h>

int main(){

    puts("Hello world");
    printf("%s, I can only print %i\n", "Ben", "12");

    char name [] = "Jeannot";
    puts(name);

    name[0] = 'j';
    puts(name);

    "Jeannot"[0] = 'j';

    return 0;
}