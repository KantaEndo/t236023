#include <stdio.h>

int main()
{
	int i,j,k;
	printf("What is the first number?");
    scanf("%d",&i);
	printf("What is the second number?");
	scanf("%d",&j);
	
	k=i+j;
    if(k>100){
    printf("This result of this addition is greater than 100");
    }
    else if(k==100){
    printf("This result of this addition is exactly 100");
    }
    else{
    printf("This result of this addition is less than 100");
    }
    
    return 0;
  
}