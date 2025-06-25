//19. Find all the factors of a natural number 
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
