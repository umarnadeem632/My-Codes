#include <stdio.h>
#include <ctype.h>

void anagram(char W1[], char W2[]);
void userInput();

int main() {

    userInput();
    return 0;
}

void userInput() {
    char W1[256] = {0};
    char W2[256] = {0};
    int i = 0;
    char Temp;

    printf("Enter first word: ");
    for (i = 0; (Temp = getchar()) != '\n'; i++) {
        W1[i] = tolower(Temp);  
    }
    W1[i] = '\0';

    printf("Enter second word: ");
    for (i = 0; (Temp = getchar()) != '\n'; i++) {
        W2[i] = tolower(Temp);  // Convert to lowercase
    }
    W2[i] = '\0';

    anagram(W1, W2);

    printf("Press 'Enter' to continue...\n OR\n Press E to exit\n");

    Temp = getchar();  

    if (Temp == 'E' || Temp == 'e') {
        return;  
    } else if (Temp == '\n') {
        userInput();  
    } else {
        printf("Invalid input\n");
        userInput();  
    }
}

void anagram(char W1[], char W2[]) {
    char f1[26] = {0};
    char f2[26] = {0};

    for (int j = 0; W1[j] != '\0'; j++) {
        if (isalpha(W1[j])) {  
            f1[tolower(W1[j]) - 'a']++;
        }
    }

    for (int j = 0; W2[j] != '\0'; j++) {
        if (isalpha(W2[j])) {  
            f2[tolower(W2[j]) - 'a']++;
        }
    }

    int areAnagrams = 1;

    for (int i = 0; i < 26; i++) {
        if (f1[i] != f2[i]) {
            areAnagrams = 0;
            break;
        }
    }

    if (areAnagrams) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }
    
}

