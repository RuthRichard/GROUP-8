#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char user_input;
    const char *choices[] = {"S", "K", "P"};

    printf("Enter your choice (S for Stone, K for Knife, P for Paper): ");
    scanf(" %c", &user_input);
    user_input = toupper(user_input);

    if (user_input != 'S' && user_input != 'K' && user_input != 'P') {
        printf("Invalid input! Please choose S, K, or P.\n");
        return 1;
    }

    srand(time(NULL));
    int comp_index = rand() % 3;
    char comp_choice = *choices[comp_index];

    printf("Computer's choice: %c\n", comp_choice);

    if (user_input == comp_choice) {
        printf("It's a tie!\n");
    } else if ((user_input == 'S' && comp_choice == 'K') ||
               (user_input == 'K' && comp_choice == 'P') ||
               (user_input == 'P' && comp_choice == 'S')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
