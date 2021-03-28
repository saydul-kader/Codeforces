#include<stdio.h>
#include<conio.h>



int main()
{
	char data[100];
	printf("Enter a String for gets() :");

	//get string input using gets(..) function
	gets(data);

	printf("Entered Data Is : will be with puts() :");
	//print string using puts(..) function
	puts(data);

    // Wait For Output Screen
    getch();

    //Main Function return Statement
    return 0;
}
