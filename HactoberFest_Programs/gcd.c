#include<stdio.h>
int gcd(int a,int b){
	//Write code here
	    while (num1 != num2)

    {

        if (num1> num2)

        {

            num1 = num1 - num2;

        }

        else

        {

            num2 = num2 - num1;

        }

    }

    return a;
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("\nGCD of %d and %d is : %d\n",num1,num2,res);
	return 0;
}
