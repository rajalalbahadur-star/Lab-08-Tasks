#include<stdio.h>
int validwithdrawal(float balance,float amount){
	if((int)amount%500!=0) return 0;
	if(amount>balance) return -1;
	if((balance-amount)<1000) return -2;
	return 1;
}
float withdraw(float balance,float amount) {
	return balance-amount;}
void show_msg(int code){
	switch (code) {
        case 1:
            printf("Transaction Successful! Please takeout your cash.\n");
            break;
        case 0:
            printf("Error: Amount should be a multiple of Rs.500.\n");
            break;
        case -1:
            printf("Error: Insufficient balance in your account.\n");
            break;
        case -2:
            printf("Error: Cannot withdraw a minimum of Rs.1000 must be maintained.\n");
            break;
        default:
            printf("ERRORRRRRRR!!!!\n");
    }
}
int main(){
	float balance=20000;
	float amount;
	printf("===Welcome to the ATM===\n");
	while(1){
		printf("Current Balance: Rs.%.2f\n",balance);
		printf("Enter amount to withdraw || Press 0 to Exit.");
		scanf("%f",&amount);
		if(amount==0) {
			printf("Thank You! Come by Again.\n");
			break;}
		int status=validwithdrawal(balance, amount);
		show_msg(status);
		if(status==1){
			balance=withdraw(balance,amount);
			printf("Updated Balance:Rs.%.2f\n",balance);
		}
		
	}
	return 0;
}
