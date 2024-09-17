#include <stdio.h>
#include <string.h>

// The function runs in O(n) time complexity
// It iterates over the string only once, making it fast and efficient.
void checkLetterA(char str[]) {
    int count = 0; 
    int length = strlen(str); 
  
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;  
        }
    }

    if (count > 0) {
        printf("The letter 'a' (or 'A') occurs %d times in the string.\n", count);
    } else {
        printf("The letter 'a' (or 'A') does not occur in the string.\n");
    }
}

int main() {
    char inputString[100];  

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);  
  
    checkLetterA(inputString);

    return 0;
}
