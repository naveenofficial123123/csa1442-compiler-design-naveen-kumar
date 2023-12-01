#include <stdio.h>

int main() {
  // Declare variables
  int a, b, c, d, e;
  char op1, op2;

  // Get input from the user
  printf("Enter the expression: ");
  scanf("%d %c %d %c %d", &a, &op1, &b, &op2, &c);

  // Evaluate the expression using PEMDAS
  switch (op1) {
    case '+':
      d = a + b;
      break;
    case '-':
      d = a - b;
      break;
    case '*':
      d = a * b;
      break;
    case '/':
      d = a / b;
      break;
  }

  switch (op2) {
    case '+':
      e = d + c;
      break;
    case '-':
      e = d - c;
      break;
    case '*':
      e = d * c;
      break;
    case '/':
      e = d / c;
      break;
  }

  // Print the result
  printf("The result is: %d\n", e);

  
}
