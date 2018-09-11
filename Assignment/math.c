#include <stdio.h>
#include <math.h>

int main()
{
    //num1 and num2 are the numbers entered by the user
    int num1, num2;
    //operator is the operation (+, -, etc.)
    char operator;
    
    printf("Enter Operation(+, -, *, /, %, <, >, &, |, ^, ~): ");
    scanf("%c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch(operator)
	{
		//Addition case
		case '+':
			printf("%d + %d = %d", num1, num2, num1 + num2);
			break;
		
		//Subtraction case
		case '-':
			printf("%d - %d = %d", num1, num2, num1 - num2);
			break;
			
		//Multiplication case
		case '*':
			printf("%d * %d = %d", num1, num2, num1 * num2);
			break;
		
		//Division case
		case '/':
			printf("%d / %d = %d", num1, num2, num1 / num2);
			break;
			
		//Modulus case
		case '%':
			printf("%d Remainder %d = %d", num1, num2, num1 % num2);
			break;
			
		//Shift Left case
		case '<':
			printf("%d << %d = %d", num1, num2, num1 << num2);
			break;
			
		//Shift Right case
		case '>':
			printf("%d >> %d = %d", num1, num2, num1 >> num2);
			break;
			
		//Bitwise AND case
		case '&':
			printf("%d & %d = %d", num1, num2, num1 & num2);
			break;
			
		//Bitwise OR case
		case '|':
			printf("%d | %d = %d", num1, num2, num1 | num2);
			break;
			
		//Bitwise XOR case
		case '^':
			printf("%d ^ %d = %d", num1, num2, num1 ^ num2);
			break;
		
		//Bitwise Inverse case
		case '~':
			printf("~%d", num1, num2, ~num1);
			break;
			
	}
	
	return 0;
}
