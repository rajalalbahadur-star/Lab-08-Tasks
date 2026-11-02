#include<stdio.h>
int isprime(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void printprime(int start,int end){
	printf("Prime num between %d and %d :",start,end);
	int found=0;
	for(int i=start;i<=end;i++){
		if(isprime(i)){
			printf("%d ",i);
			found=1;
		}
	}
	if (!found){
		printf("none");
	}
	printf("\n");
}
int countprime(int start,int end){
	int count=0;
	for(int i=start;i<=end;i++){
		if(isprime(i)){
			count++;
		}
	}
	return count;
}
int main(){
	int start,end;
	printf("Enter the starting num:");
	scanf("%d",&start);
	printf("Enter the Ending num:");
	scanf("%d",&end);
	printprime(start,end);
	int total=countprime(start,end);
	printf("Total prime found:%d\n",total);
	return 0;
}
