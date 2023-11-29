#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int currentState = 0;
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        switch (currentState) {
            case 0:
                if (input[i] == 'a') {
                    currentState = 1;
                } else {
                    currentState = 0;
                }
                break;
            case 1:
                if (input[i] == 'b') {
                    currentState = 2;
                } else {
                    currentState = 0;
                }
                break;
            case 2:
                currentState = 2; // Stay in the accepting state for any input
                break;
            default:
                currentState = 0; // Invalid state
        }
    }
    if (currentState == 2) {
        printf("Accepted: The string starts with 'ab'\n");
    } else {
        printf("Rejected: The string does not start with 'ab'\n");
    }
    return 0;
}

