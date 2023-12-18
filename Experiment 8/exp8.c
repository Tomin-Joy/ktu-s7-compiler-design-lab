#include <stdio.h>
#include <string.h>
int main() {
    char states[20][20];
    FILE *INPUT;
    INPUT = fopen("input.dat", "r");
    char state[3];
    int end, i = 0, n, k = 0;
    char state1[3], input[3], state2[3];
    printf("Enter the no of states: ");
    scanf("%d", &n);
    printf("Enter the states\n");
    for (k = 0; k < n; k++) {
        scanf("%s", states[k]);
    }
    for (k = 0; k < n; k++) {
        i = 0;
        strcpy(state, states[k]);
        printf("Epsilon closure of %s :- { %s ",state,state);
        while (1) {
            end = fscanf(INPUT, "%s%s%s", state1, input, state2);
            if (end == EOF) {
                break;
            }
            if (strcmp(state, state1) == 0) {
                if (strcmp(input, "e") == 0) {
                    printf("%s ",state2);
                    strcpy(state, state2);
                    rewind(INPUT);
                }
            }
        }
        printf("}\n");
    }
    fclose(INPUT);
    return 0;
}

