#include "recursiv.h"

long factorial(int N){
    return (N==0 || N==1 ? 1 : N<0? -1 : N * factorial(N-1));		
}
int fibonacci(int n){
	return n==1? 1: n==0?  0: n<0? -1 : fibonacci(n-2) + fibonacci(n-1);
}
int tribonacci(int n){
	return (n==1 || n==2)? 1: n==0? 0: n<0? -1 : tribonacci(n-2) + tribonacci(n-1) +tribonacci(n-3);
}
int sumNos(int n){	
    return n==1? 1: n==0? 0: n<0? -1 : n+sumNos(n-1);		
}
 long decimalBinary(int n){
	return n==0? 0 : n<0? -1: (n %2+10 * decimalBinary(n/2));
}
int num(){
	int n;
		printf("Enter number: ");
		scanf("%d",&n);
	return n;
}
int choice(){
	int opt;
			printf("Enter choice: ");
		scanf("%d",&opt);
	return opt;
}
void menu(){
			system("cls");
	printf("1. Factorial\n");
	printf("2. Fibonacci\n");
	printf("3. Tribonacci\n");
	printf("4. Sum of No.\n");
	printf("5. Decimal to Binary\n");	
	printf("0. Exit\n");	
}
