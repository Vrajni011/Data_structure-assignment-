#include <stdio.h>

int main() {
    int N, X;

   
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    
    int totalAnimals = N + X;

   
    printf("Total number of animals: %d\n", totalAnimals);

    return 0;
}
