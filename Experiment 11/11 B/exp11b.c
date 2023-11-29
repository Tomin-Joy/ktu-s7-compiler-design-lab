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
                } else if (input[i] == 'b') {
                    currentState = 2;
                } else {
                    currentState = 4;
                }
                break;
            case 1:
                if (input[i] == 'a') {
                    currentState = 3;
                } else {
                    currentState = 4;
                }
                break;
            case 2:
                if (input[i] == 'b') {
                    currentState = 3;
                } else {
                    currentState = 4;
                }
                break;
            case 3:
            case 4:
                break; // Stay in the accepting state for any input
            default:
                currentState = 5; // Invalid state
        }
    }
    if (currentState == 3) {
        printf("Accepted: The string starts with 'aa' or 'bb'\n");
    } else {
        printf("Rejected: The string does not start with 'aa' or 'bb'\n");
    }
    return 0;
}

