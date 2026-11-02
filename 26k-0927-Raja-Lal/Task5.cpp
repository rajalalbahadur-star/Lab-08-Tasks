#include<stdio.h>
long factorial(int n){
	if(n<0) return -1;
	long fact=1;
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int reverse_num(int n){
	int reversed=0;
	int temp=n;
	while(temp!=0){
		reversed=reversed*10+(temp%10);
		temp=temp/10;
	}
	return reversed;
}
int ispalindrome(int n){
	if(n<0) return 0;
	int reversed=reverse_num(n);
	if(n==reversed){
		return 1;
	}else{
		return 0;
	}
}
int sumdigits(int n){
	int sum=0;
	int temp=n;
	if(temp<0){
		temp=-temp;
	}
	while(temp!=0){
		sum=sum+(temp%10);
		temp=temp/10;
	}
	return sum;
}
void fibonacci(int terms){
	if(terms<=0){
		printf("Please Enter a positvie number.");
		return;
	}
	long t1=0;
	long t2=0;
	long nextterm;
	printf("Fibonacci Series(%d terms)",terms);
	for (int i=1;i<=terms;i++){
		if(i==1){
			printf("%ld",t1);
		}
		else if(i==2){
			printf("%ld",t2);
		}
		else{
			nextterm=t1+t2;
			t1=t2;
			t2=nextterm;
			printf("%ld",nextterm);
		}
	}
	printf("\n");
}
int main(){
	int choice,n;
	do {
        printf("    NUMBER OPERATIONS TOOLKIT     \n");
        printf("1. Find Factorial\n");
        printf("2. Reverse Number\n");
        printf("3. Check Palindrome\n");
        printf("4. Sum of Digits\n");
        printf("5. Print Fibonacci Series\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            if (n < 0) {
                printf("Error: Factorial is not defined for negative numbers.\n");
            } else {
                printf("Factorial of %d = %ld\n", n, factorial(n));
            }
        }
        else if (choice == 2) {
            printf("Enter an integer to reverse: ");
            scanf("%d", &n);
            printf("Reversed Number = %d\n", reverse_num(n));
        }
        else if (choice == 3) {
            printf("Enter an integer to check: ");
            scanf("%d", &n);
            if (ispalindrome(n) == 1) {
                printf("%d is a Palindrome.\n", n);
            } else {
                printf("%d is NOT a Palindrome.\n", n);
            }
        }
        else if (choice == 4) {
            printf("Enter an integer: ");
            scanf("%d", &n);
            printf("Sum of digits of %d = %d\n", n, sumdigits(n));
        }
        else if (choice == 5) {
            printf("Enter the number of terms: ");
            scanf("%d", &n);
            fibonacci(n);
        }
        else if (choice == 6) {
            printf("Exiting toolkit. Goodbye!\n");
        }
        else {
            printf("Invalid choice! Please select an option between 1 and 6.\n");
        }
    } while (choice != 6);
    return 0;
}
