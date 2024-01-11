#include <stdio.h>

void encrypt(char message[], int key);
void decrypt(char message[], int key);

int main() {
    char message[100];
    int key, choice;

    printf("Choose the following options:\n1) Encryption\n2) Decryption\n");
    scanf("%d", &choice);
    
    getchar(); 

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter key: ");
    scanf("%d", &key);
    key = key%26;

    switch (choice) {
        case 1:
            encrypt(message, key);
            printf("Encrypted message: %s", message);
            break;
        case 2:
            decrypt(message, key);
            printf("Decrypted message: %s", message);
            break;
        default:
            printf("Error: Invalid choice\n");
    }

    return 0;
}

void encrypt(char message[], int key) {
    char ch;
    int i;

    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch + key;

            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }

            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + key;

            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }

            message[i] = ch;
        }
    }
}

void decrypt(char message[], int key) {
    char ch;
    int i;

    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - key;

            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }

            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - key;

            if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }

            message[i] = ch;
        }
    }
}
