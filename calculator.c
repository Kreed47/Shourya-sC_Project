#include<stdio.h>

int main() {

  char op;
  double first, second;
  float percentage;
  printf("Enter an operator (+, -, *, /,'percentage'): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    break;
      case '%':
      printf("Percentage : %.1lf", percentage = (first*100 / second));
      break;

    default:
      printf("ERROR ERROR ERROR !! BASIC OPERATIONS ONLY!");
  }

  return 0;
}
