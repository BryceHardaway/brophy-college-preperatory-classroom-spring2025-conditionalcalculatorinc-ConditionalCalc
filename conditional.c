#include <stdio.h>

void main(){
    //Work here
    printf("hello");
    int x; // instead of indenting after every line, you must use ; to end the
    // line
int y;
int i = 0;
int j = 0;
char operation;


while (i < 10)
{

printf("Enter a number between 1 and 10: ");
scanf("%i", &x);

if(x >=1 && x<=10) {
printf("The first number is between 1 and 10\n");
break;
} else {
printf("The first number is not between 1 and 10\n");
}

}

while (j < 10)
{
printf("\nType in an even number: ");
scanf("%i", &y);

if(y%2 == 0) {
printf("The second number is even\n");
break;
} else {
printf("The second number is odd\n");
}

}

printf("\nThe first number is %i and the second number is %i", x, y);

printf("\nType in the operation you want to perform (a, s, d, m): ");
scanf(" %c", &operation);

if (operation == 'a') {
int sum = x + y;
printf("\n\nThe sum of the numbers is %i", sum);
} else if (operation == 's') {
int difference = x - y;
printf("\n\nThe difference of the numbers is %i", difference);
} else if (operation == 'd') {
int quotient = x / y;
printf("\n\nThe quotient of the numbers is %i", quotient);
} else if (operation == 'm')
{
int product = x * y;
printf("\n\nThe product of the numbers is %i", product);
}





    return 0;
}