#include <stdio.h>

int main() {
    char operator;
    double one, two;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);					//takes operator as an input
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &one, &two);			//takes two numbers as input 
 
	//we will be using switch operator to swich through input
    switch (operator) {
    case '+':							
        printf("%.1lf + %.1lf = %.1lf", one, two, one + two);	//if operator is "+" print one + two
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", one, two, one - two);	//if operator is "-" print one - two
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", one, two, one * two);	//if operator is "*" print one * two
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", one, two, one / two);	//if operator is "/" print one / two
        break;
        
    default:
        printf("Error! operator is not correct"); // operator doesn't match any case constant
    }

    return 0;
    /*
	Memory is used to store only 3 variables: operator,first,second!
	*/
}
