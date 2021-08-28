#include<stdio.h>
int main(){
	
	int n1,n2,n3;
	
	printf("Enter your three number one by one (EX. 112 116 44): ");
	scanf("%d %d %d",&n1,&n2,&n3);
	

	int sum1=n1+n2;
	int sum2=n1+n3;
	int sum3=n2+n3;
	
	if (sum1 > sum2){
		printf("\nThe biggest sum nation is %d",sum1);
	}
	else if (sum1 > sum3){
		printf("\nThe biggest sum nation is %d",sum1);
	}
	else if (sum2 > sum1){
		printf("\nThe biggest sum nation is %d",sum2);
	}
	else if (sum2 > sum3){
		printf("\nThe biggest sum nation is %d",sum2);
	}
	else if (sum3 > sum1){
		printf("\nThe biggest sum nation is %d",sum3);
	}
	else if (sum3 > sum2){
		printf("\nThe biggest sum nation is %d",sum3);
	}
	
	return 0;
}
