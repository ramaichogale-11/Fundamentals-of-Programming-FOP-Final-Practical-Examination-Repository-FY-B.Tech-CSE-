#include <stdio.h>

int main () { 
int choice; 
float a, b; 

printf("Enter number 1: "); 
scanf("%f", &a); 
printf("Enter number 2: "); 
scanf("%f", &b); 

printf("Choose: 1. Add\n 2. Subtract\n 3. Multiplication\n 4. Division\n"); 
scanf("%d", &choice);

switch (choice) { 
    case 1: ("Result = %0.2f", a+b); 
    case 2: ("Result = %.2f", a-b); 
    case 3: ("Result = %.2f", a*b); 
    case 4: 
    if (b<0) 
    {
        printf("Division not possible"); 
    }
    else 
    {
        printf("Result = %.2f", a/b); 
    }
    break;
    default: printf("Invalid choice"); 
}
return 0; 
}
