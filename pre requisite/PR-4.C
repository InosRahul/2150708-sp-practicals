#include<stdio.h>
#include<conio.h>


void main(){
	char s1[50];
	int c;
	clrscr();
	printf("Enter string:");
	scanf("%[^\n]s",&s1);
	c=len1(s1);
	printf("Total number of characters and spaces are %d",c);
	getch();

}

int len1(char s1[]){
	int i;
	for(i=0; s1[i]!='\0';i++);
	return i;
}

/*
Output
Enter string:hello world
Total number of characters and spaces are 12                                    
*/