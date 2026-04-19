#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    int ch; // Use int instead of char

    f1 = fopen("source.txt", "r");
    f2 = fopen("dest.txt", "w");

    // Check if source file exists
    if (f1 == NULL) {
        printf("Error: Could not open source file.");
        return 1; 
    }

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }

    printf("File copied successfully.");

    fclose(f1);
    fclose(f2);

    return 0;
}
