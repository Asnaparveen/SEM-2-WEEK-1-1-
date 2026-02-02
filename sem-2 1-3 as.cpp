#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0, characters = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        characters++;

        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (isspace(str[i])) {
            spaces++;
        }

        i++;
    }

    printf("\nTotal characters   : %d", characters);
    printf("\nVowels             : %d", vowels);
    printf("\nConsonants         : %d", consonants);
    printf("\nDigits             : %d", digits);
    printf("\nWhite space chars  : %d\n", spaces);

   return 0;
}
