#include<stdio.h>

int main() {
    int columns;
    printf(" Enter Number of rows of the pyramid: ");
    scanf(" %d", &columns);
    int i;
    int j;

    for (i = 1; i <= columns; i++) {

        for (j = 1; j <= i; j++)
            printf(" * ");
        printf("\n");

    }
    for (i = columns; i >= 0; i--) {

        for (j = i; j >= 0; j--)
            printf(" * ");
        printf("\n");

    }

}