/* go to search the ansi escape code */
#include <stdio.h>

#define RED "1"
#define GREEN "2"
#define YELLOW "3"
#define BLUE "4"
#define BLACK "0"

int choice_txt, choice_bg;

void display_txt() {
    printf("choose a preferred text color:\n");
    printf("1. \033[31mRed\033[0m\n");
    printf("2. \033[32mGreen\033[0m\n");
    printf("3. \033[33mYellow\033[0m\n");
    printf("4. \033[34mBlue\033[0m\n");
    printf("5. \033[30mBlack\033[0m\n");
}

void display_bg() {
    printf("choose a preferred background color:\n");
    printf("1. \033[41m   \033[0m\n");
    printf("2. \033[42m   \033[0m\n");
    printf("3. \033[43m   \033[0m\n");
    printf("4. \033[44m   \033[0m\n");
    printf("5. \033[40m   \033[0m\n");
}

void chcolor() {
    switch (choice_txt) {
        case 1:
            printf("\033[3"RED"m");
            break;
        case 2:
            printf("\033[3"GREEN"m");
            break;
        case 3:
            printf("\033[3"YELLOW"m");
            break;
        case 4:
            printf("\033[3"BLUE"m");
            break;
        case 5:
            printf("\033[3"BLACK"m");
            break;
    }
    switch (choice_bg) {
        case 1:
            printf("\033[4"RED"m");
            break;
        case 2:
            printf("\033[4"GREEN"m");
            break;
        case 3:
            printf("\033[4"YELLOW"m");
            break;
        case 4:
            printf("\033[4"BLUE"m");
            break;
        case 5:
            printf("\033[4"BLACK"m");
            break;
    }
}

int main()
{
    while (1) {
        display_txt();
        scanf("%d", &choice_txt);
        display_bg();
        scanf("%d", &choice_bg);
        printf("\nyour prompt style will like followings:\n");
        chcolor();
        printf("here is the example string.\n");
        printf("press any key to continue...\033[0m\n\n");
        getchar();
        getchar();
    }
}
