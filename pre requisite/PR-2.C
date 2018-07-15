#include<stdio.h>
#include<conio.h>

void main(){
	char p1[80];
	clrscr();
	printf("Enter the paragraph ending with $:");
	scanf("%[^$]s",&p1);
	printf("\n %s",p1);
	getch();
}

/*
Output
Enter the paragraph ending with $:C language provides facility of file input-out
put operations$                                                                 
										
 C language provides facility of file input-output operations                   


*/