#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {

    /* The lower and upper limits of the interval */
    int min = 1;
    int max = 1000;

    /* The mystery number */
    int mystery;

    /* The number proposed by the user */
    int user_number;

    /* Number of attempts */
    int nb_trials = 0;

    int found = 0;

    printf("Enter your mystery number : \n");
    scanf("%d", &mystery);

    /* As long as the computer has not found the right number, it searches for the right number */
    while(found == 0) {
        /* The average value between min and max is taken */
        user_number = (max + min) / 2;

        printf("I suggested %d \n", user_number);

        /* If user_number is smaller than mystery, the interval is reduced to [user_number, max] */
        if(user_number < mystery) {
            min = user_number;
            printf("But this is the wrong number. Arrfff.\n");
        }

        else {
            /* Otherwise, we reduce the interval to [min, user_number] */
            if(user_number > mystery) {
                max = user_number;
                printf("But this is the wrong number. Arrfff.\n");
            }
            else
                found = 1;
        }
        
        /* The number of trials is increased */
        nb_trials = nb_trials + 1;
    }

    /* Display a message to say that the computer has found the correct number */
    printf("And I won! Wow! \n");

    /* Display of the number of tests performed by the computer */
    printf("I found your number after %d attempts. Would you have done better ??\n", nb_trials);

    return 0;
}