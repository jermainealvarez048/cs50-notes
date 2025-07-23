#include <stdio.h>

void print_space(int n1, int n2);
void print_block(int n);

int main(void) {
    int height;

    do {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1);

    for (int row = 1; row <= height; row++) {
        print_space(height, row);
        print_block(row);

        printf("\n");
    }

    return 0;
}

void print_space(int n1, int n2) {
    for (int space = 1; space <= n1 - n2; space++) {
        printf(" ");
    }
}

void print_block(int n) {
    for (int block = 1; block <= n; block++) {
        printf("#");
    }
}   