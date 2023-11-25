#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomLetter() {
    int choice = rand() % 2;
    if (choice == 0) {
        return 'A' + rand() % 26;
    } else {
        return 'a' + rand() % 26; 
    }
}

char randomDigit() {
    return '0' + rand() % 10;
}

char randomSymbol() {
    char symbols[] = "!@#$%^&*()_-+=<>?/{}[]";
    return symbols[rand() % (sizeof(symbols) - 1)];
}

int main() {
    int passwordSize, numLetters, numNumbers, numSymbols;

    printf("Enter the size of the password: ");
    scanf("%d", &passwordSize);

    printf("Enter the number of letters: ");
    scanf("%d", &numLetters);

    printf("Enter the number of numbers: ");
    scanf("%d", &numNumbers);

    printf("Enter the number of symbols: ");
    scanf("%d", &numSymbols);

    if (passwordSize < numLetters + numNumbers + numSymbols) {
        printf("Invalid input. The total number of letters, numbers, and symbols exceeds the password size.\n");
        return 1;
    }

    srand(time(0));

    for (int i = 0; i < numLetters; i++) {
        printf("%c", randomLetter());
    }

    for (int i = 0; i < numNumbers; i++) {
        printf("%c", randomDigit());
    }

    for (int i = 0; i < numSymbols; i++) {
        printf("%c", randomSymbol());
    }

    int remainingChars = passwordSize - numLetters - numNumbers - numSymbols;
    for (int i = 0; i < remainingChars; i++) {
        int choice = rand() % 3;
        if (choice == 0) {
            printf("%c", randomLetter());
        } else if (choice == 1) {
            printf("%c", randomDigit());
        } else {
            printf("%c", randomSymbol());
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
