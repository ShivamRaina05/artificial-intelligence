// Online C compiler to run C program online

#include<stdio.h>

#include<string.h>

#include<ctype.h>

int main()

{

	char password[100],alpha,digit,special,i;	printf("Enter your password\n");

	gets(password);

		for(i=0; password[i]!='\0'; i++)

		{

		if(isalpha(password[i])!=0)

		alpha++;

		else if(isdigit(password[i])!=0)

		digit++;

		else

		special++;

		}

		if(alpha>0 && digit>0 && special>0)	

		printf("Great! Your password is strong\n");

		else if(alpha>0 && digit>0)

		printf("Your password is moderate\n We recommend you to add some special characters\n");

		else

		printf("Your password is weak! Please Enter again\n");

}
