%{
#include <stdio.h>
int vowel_count = 0;
int consonant_count = 0;
%}

%%
[aAeEiIoOuU]    { vowel_count++; }
[a-zA-Z]        { consonant_count++; }
.               ; // Ignore other characters
%%

int main() {
    printf("Enter a String : ");
    yylex();
    printf("Vowels: %d\nConsonants: %d\n", vowel_count, consonant_count);
    return 0;
}

