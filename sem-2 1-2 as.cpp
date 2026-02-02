#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], result[200];
    int i = 0, j = 0, k, found;

    printf("Enter the string: ");
    gets(str);

    printf("Enter the word to remove: ");
    gets(word);

    while (str[i] != '\0') {
        found = 1;

        
        for (k = 0; word[k] != '\0'; k++) {
            if (str[i + k] != word[k]) {
                found = 0;
                break;
            }
        }

        
        if (found && (str[i + k] == ' ' || str[i + k] == '\0') &&
            (i == 0 || str[i - 1] == ' ')) {
            i = i + k; 
        } else {
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';

    printf("String after removing word: %s\n", result);

    return 0;
}

