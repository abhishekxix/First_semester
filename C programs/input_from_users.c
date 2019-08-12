#include<stdio.h>
#include<string.h>
int main()
{
    char b = getchar(); //This getchar()helps to take input as a single character
    printf("You entered %c",b);
    char a[20];
    printf("Enter your name");
    scanf("%s",a); //Taking a string as input from the user
    printf("\nHi %s", a);
    int number;
    printf("\nEnter a number :: ");
    scanf("%d",number);
    printf("You entered %d",number);
    return 0;
}