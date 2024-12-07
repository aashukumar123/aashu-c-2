#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to test if the brackets in the string are balanced
 test(char *s, int len) {
    int ctr = 0, x = 0, y = 0, z = 0;
    char *string2;
    string2 = (char *)malloc(len); // Allocating memory for a temporary stack

    while (*s != 0) {
        // Checking for opening brackets and storing them in the temporary stack
        if (*s == '(') {
            x++;
            string2[++ctr] = 1; // Storing the value 1 for '(' in the stack
        }

        if (*s == '[') {
            y++;
            string2[++ctr] = 2; // Storing the value 2 for '[' in the stack
        }

        if (*s == '{') {
            z++;
            string2[++ctr] = 3; // Storing the value 3 for '{' in the stack
        }

        // Checking for closing brackets and validating them against the stack content
        if (*s == ')') {
            if (string2[ctr] == 1) {
                x--;
                ctr--;
            } else {
                free(string2); // Freeing the memory allocated for the stack
                return 0;
            }
        }
        if (*s == ']') {
            if (string2[ctr] == 2) {
                y--;
                ctr--;
            } else {
                free(string2);
                return 0;
            }
        }
        if (*s == '}') {
            if (string2[ctr] == 3) {
                z--;
                ctr--;
            } else {
                free(string2);
                return 0;
            }
        }
        s++;
    }

    free(string2); // Freeing the memory allocated for the stack

    // Checking if all brackets are balanced
    if (x > 0 || y > 0 || z > 0)
        return 0;

    return 1;
}

int main() {
    char string1[80];
    int n, i, x;
    printf("Input a string: ");
    scanf("%s", string1);
    n = strlen(string1);
     
    printf("Check whether brackets in the string are valid or not: %d", test(string1, n));
    return 0;
}