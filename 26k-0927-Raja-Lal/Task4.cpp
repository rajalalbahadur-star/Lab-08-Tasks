#include<stdio.h>
int findtotal(int marks[],int size){
	int total=0;
	for(int i=0;i<size;i++){
		total+=marks[i];
	}
	return total;
}
float findpercentage(int total,int size){
	return total/size;
}
char findgrade(float percentage){
	if (percentage >= 80.0f) {
        return 'A';
    } else if (percentage >= 60.0f) {
        return 'B';
    } else if (percentage >= 40.0f) {
        return 'C';
    } else {
        return 'F';
    }
}
int findmax(int marks[],int size){
	int max=marks[0];
	for(int i=0;i<size;i++){
		if(marks[i]>max);{
		max=marks[i];}
	}
	return max;
}
int findmin(int marks[],int size){
	int min=marks[0];
	for(int i=0;i<size;i++){
		if(marks[i]<min);{
		min=marks[i];}
	}
	return min;
}
void printreport(int marks[],int size){
	int total=findtotal(marks,size);
	float percentage=findpercentage(total,size);
	char grade=findgrade(percentage);
	int highest=findmax(marks,size);
	int lowest=findmin(marks,size);
	printf("\n======Student Report Card======\n");
	for(int i=0;i<size;i++){
		printf("Subject %d Marks:%d\n",i+1,marks[i]);
	}
	printf("-----------------------------------------\n");
    printf("Total Marks       : %d / %d\n", total, size * 100);
    printf("Percentage        : %.2f%%\n", percentage);
    printf("Grade             : %c\n", grade);
    printf("Highest Marks     : %d\n", highest);
    printf("Lowest Marks      : %d", lowest);
    printf("\n=========================================\n");
}
int main(){
	int size=5,marks[5];
	printf("Enter marks of 5 subjects(Out of 100):\n");
	for(int i=0;i<size;i++){
		printf("Subject %d:",i+1);
		scanf("%d",&marks[i]);
		if(marks[i]>100 || marks[i]<0){
			printf("Invalid Input!!!");
			i--;
		}
	}
	printreport(marks,size);
	return 0;
}
