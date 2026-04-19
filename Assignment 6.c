//Iterative method

#include <stdio.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        fact *= i;

    printf("%d", fact);

    return 0;
}


//Recursive method

#include <stdio.h>

// Function to calculate factorial
int fact(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    
    printf("Enter a num: ");
    if (scanf("%d", &n) != 1) return 1; // Input n and check for success

    // Call the function and print the result
    printf("Factorial of %d is %d\n", n, fact(n));

    return 0;
}

