#include <stdio.h>

int main() {
    int N, X;

    // Input number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    // Input number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    // Calculate total number of animals
    int totalAnimals = N + X;

    // Display total animals
    printf("Total number of animals: %d\n", totalAnimals);

    return 0;
}
