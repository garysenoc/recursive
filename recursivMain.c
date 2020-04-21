#include "recursiv.h"
int main(){
	int opt=5,num1;
	
	while(opt!=0){
		menu();
		opt = choice();
		switch(opt){
			case 1:
				num1 = num();
				(factorial(num1)<0)?(printf("Negative number not accepted")):printf("\n%d Factorial: %ld\n",num1,factorial(num1));	
			break;
			case 2:
				num1 = num();
				(fibonacci(num1)<0)?(printf("Negative number not accepted")):printf("\nFibonacci  position no. %d: %d\n",num1,fibonacci(num1));		
			break;
			case 3:
				num1 = num();
				(tribonacci(num1)<0)?(printf("Negative number not accepted")):printf("\nTribonacci  position no. %d: %d\n",num1,tribonacci(num1));	
			break;
			case 4:
				num1 = num();
				(sumNos(num1)<0)?(printf("Negative number not accepted")):printf("\nsum from 1 to %d: %d",num1, sumNos(num1));	
			break;
			case 5:
				num1 = num();
				(decimalBinary(num1)<0)?(printf("Negative number not accepted")):printf("\nThe binary of %d is %ld",num1, decimalBinary(num1));
			break;
			case 0:
				printf("Thank you for using!");
			break;
			default:
				printf("Invalid choice, Try again!");
		}
		getch();
	}
}	
