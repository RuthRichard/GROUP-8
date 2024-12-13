#include <stdio.h>

int reverseint(int temp);

int main() {
    int user_input;
    int result;

    printf("Enter a number between 1 and 10,000 inclusive: ");
    scanf("%d", &user_input);

    if (user_input < 0 ||user_input > 10000) {
        printf("Invalid Entry\n");
        return -1;
    }

    result = reverseint(user_input);
    printf("The reversed number is: %d\n", result);

    return 0;
}

int reverseint(int temp) {
    int rem = 0;

    while (temp > 0) {
        rem = rem * 10 + temp % 10; 
        temp /= 10; 
    }

    return rem;
}