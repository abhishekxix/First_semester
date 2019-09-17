//WAP to search an element from array and print the location of the element.

#include<stdio.h>

int main()
{
	int a[5], elt, i;
	
	printf("Enter the elements of an array :: \n");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter a number to search in the array :: ");
	scanf("%d",&elt);
	
	for(i = 0; i < 5; i++)
	{
		if(a[i] == elt)
		{
			printf("%d found at index %d in the array.",a[i],i);
			break;
		}
		if(a[i] != elt && i == 4)
		{
			printf("%d not found in the array.",elt);
		}
		
	}
	return 0;
}