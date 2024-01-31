#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYWORD_LENGTH 50
#define MAX_TEXT_LENGTH 1000

// Function to check if a word is a keyword
int isKeyword(char* word, FILE* keywordFile) {
    char keyword[MAX_KEYWORD_LENGTH];

    // Read each keyword from the file and compare with the given word
    while (fscanf(keywordFile, "%s", keyword) == 1) {
        if (strcmp(word, keyword) == 0) {
            return 1; // Found a match, it's a keyword
        }
    }

    return 0; // No match, not a keyword
}

int main() {
    char text[MAX_TEXT_LENGTH];
    char word[MAX_KEYWORD_LENGTH];

    // Open the file containing keywords
    FILE* keywordFile = fopen("keywords.txt", "r");

    // Check if the file was opened successfully
    if (keywordFile == NULL) {
        fprintf(stderr, "Error opening file 'keywords.txt'\n");
        return 1;
    }

    // Read input text from the user
    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    // Tokenize the input text
    char* token = strtok(text, " \n");

    // Check each word if it is a keyword
    while (token != NULL) {
        if (isKeyword(token, keywordFile)) {
            printf("'%s' is a keyword\n", token);
        } else {
            printf("'%s' is not a keyword\n", token);
        }

        // Get the next word
        token = strtok(NULL, " \n");
    }

    // Close the keyword file
    fclose(keywordFile);

    return 0;
}
