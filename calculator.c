#include <stdio.h>
#include <cs50.h>
#include <string.h>
void calculate(string choice, int x, int y);

int main(void) {
    // ask for the method of calculation
    string choice = get_string ("Method of calculation: \n");
    // ask for the two operands
    int x = get_int ("Number 1: \n");
    int y = get_int ("Number 2: \n");
    // calculate the answer
    calculate (choice, x, y);
}

void calculate(string choice, int x, int y) {
    if (strcmp(choice, "addition") == 0 || strcmp(choice, "Addition") == 0) {
        int answer = x + y;
        printf("%i\n", answer);
    } else if (strcmp(choice, "substraction") == 0 || strcmp(choice, "Subtraction") == 0) {
        int answer = x - y;
        printf("%i\n", answer);
    } else if (strcmp(choice, "multiplication") == 0 || strcmp(choice, "Multiplication") == 0) {
        int answer = x * y;
        printf("%i\n", answer);
    } else if (strcmp(choice, "multiplication") == 0 || strcmp(choice, "Multiplication") == 0) {
        int answer = x / y;
        printf("%i\n", answer);
    }
}