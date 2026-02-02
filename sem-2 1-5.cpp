#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];

    printf("STRING OPERATIONS MENU\n");
    printf("1. Addition (Concatenation)\n");
    printf("2. Copying\n");
    printf("3. Reverse\n");
    printf("4. Length of String\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1: // Addition (Concatenation)
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);

            strcat(str1, str2);
            printf("Resultant string: %s\n", str1);
            break;

        case 2: // Copying
            printf("Enter a string: ");
            scanf("%s", str1);

            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;

        case 3: // Reverse
            printf("Enter a string: ");
            scanf("%s", str1);

            strrev(str1);   // works in Turbo C / some compilers
            printf("Reversed string: %s\n", str1);
            break;

        case 4: // Length
            printf("Enter a string: ");
            scanf("%s", str1);

            printf("Length of string: %lu\n", strlen(str1));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

