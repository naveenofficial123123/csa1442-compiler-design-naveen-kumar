#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the input string satisfies the grammar for balanced parentheses
bool isBalancedParentheses(char* input) {
    int len = strlen(input);
    int i = 0;
    int countOpenParentheses = 0;

    while (i < len) {
        if (input[i] == '(') {
            countOpenParentheses++;
        } else if (input[i] == ')') {
            if (countOpenParentheses == 0) {
                return false; // Closing parenthesis without a corresponding opening parenthesis
            }
            countOpenParentheses--;
        }

        i++;
    }

    return countOpenParentheses == 0; // Ensure all opening parentheses have a corresponding closing parenthesis
}

int main() {
    char input[100];

    printf("Enter a string with parentheses: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    int len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    if (isBalancedParentheses(input)) {
        printf("The input string \"%s\" satisfies the grammar for balanced parentheses.\n", input);
    } else {
        printf("The input string \"%s\" does not satisfy the grammar for balanced parentheses.\n", input);
    }

    

}
