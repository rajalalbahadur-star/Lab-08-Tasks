#include<stdio.h>
float calculate(int units)
{
	int total_bill;
	if(units<=100){
		total_bill=units*10;
	}else if(units<=200){
		total_bill=(units*10)+((units-100)*15);
	}else if(units>200){
		total_bill=(units*10)+(units*15)+((units-200)*20);
	}
	total_bill+=150;
	return total_bill;
}
void printbill(int units, float bill){
	printf("Units Consumed:%d\n",units);
	printf("Total Bill: Rs.%.2f\n",bill);
}
int main(){
	for(int i=1;i<=3;i++){	
		int unit;
		printf("Enter units for costumer %d:",i);
		scanf("%d",&unit);
		float final_bill=calculate(unit);
		printbill(unit,final_bill);
	}
	return 0;
}
