#include <stdio.h>
#include <ctype.h>

int main() {
    char grammar[100]; // Increased size to accommodate larger inputs
    char tok[100]; // Increased size to accommodate larger tokens
    char tokens[100]; // Increased size to accommodate larger tokens

    printf("Enter the grammar of your language: ");
    scanf("%s", grammar);

    int i = 0;
    while (grammar[i] != '\0') {
        if (grammar[i] == '{' || grammar[i] == '(') {
            tok[i] = '4';
        } else if (grammar[i] == '}' || grammar[i] == ')') {
            tok[i] = '5';
        } else if (grammar[i] == '+') {
            tok[i] = '2';
        } else if (grammar[i] == '*') {
            tok[i] = '3';
        } else if (isdigit(grammar[i])) {
            tok[i] = '6';
            // Handle multi-digit numbers
            while (isdigit(grammar[i + 1])) {
                i++;
            }
        }
        i++;
    }
    tok[i] = '\0';

    printf("Original grammar: %s\n", grammar);
    printf("Modified grammar: %s\n", tok);

    int size = i;
    i = 0;
    while (i < size+1) {
        if ((tok[i] == '6' && tok[i + 1] == '2' && tok[i + 2] == '6') || (tok[i] == '6' && tok[i + 1] == '3' && tok[i + 2] == '6') ||
            (tok[i] == '4' && tok[i + 1] == '6' && tok[i + 2] == '5')) {
            tokens[i] = '6';
            i += 3;
        } else {
            tokens[i] = tok[i];
            i++;
        }
    }
    tokens[i] = '\0';
    printf("Modified grammar: %s\n", tokens);

    return 0;
}
