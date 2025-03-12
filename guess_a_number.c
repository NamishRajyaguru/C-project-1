#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void prompt_for_okay() {
    char str[100];
    while (1) {
        scanf("%s", str);
        if (strcmp(str, "okay") == 0) {
            break;
        } 
        if (strcmp(str, "Okay") == 0) {
            break;
        } 
        if (strcmp(str, "oKay") == 0) {
            break;
        }
        if (strcmp(str, "okAy") == 0) {
            break;
        }
        if (strcmp(str, "okaY") == 0) {
            break;
        } 
        if (strcmp(str, "OKAY") == 0) {
            break;
        } 
        if (strcmp(str, "okay.") == 0) {
            break;
        } 
        if (strcmp(str, "OKAY.") == 0) {
            break;
        } else {
            printf("You can only type 'okay' to proceed. ");
        }
    }
}

int main() {
    srand(time(0));
    int n = (rand() % 90) + 10;
    
    printf("Type 'okay' to proceed. ");
    prompt_for_okay();
    
    printf("You can use a calculator.  ");
    prompt_for_okay();
    
    printf("Think of any random number.  ");
    prompt_for_okay();
    
    printf("Now multiply 2 to the number.  ");
    prompt_for_okay();
    
    if (n % 2 == 0) {
        printf("Now add %d to it.  ", n);
    } else {
        n = n + 1;
        printf("Now add %d to it.  ", n);
    }
    prompt_for_okay();
    
    int answer = n / 2;
    
    printf("Now divide the outcome by 2.  ");
    prompt_for_okay();
    
    printf("Now subtract the number you chose in the first place from the outcome you got now.  ");
    prompt_for_okay();
    
    printf("Your result is %d\n", answer);

    return 0;
}
