#include<stdio.h>
#include<conio.h>
void main(){
	char s1[50];
	int i=0,space=0,words=0,l=0,charac=0;
	clrscr();
	printf("\nWrite your Paragraph till $ : ");
	scanf(" %[^$]s",s1);
	printf("\nEntered paragraph is : ") ;
	puts(s1);
	for(i=0;s1[i]!='\0';i++){
		 l++;
		if(s1[i]==' ')
		space++;
		}
	printf("\n length==%d",l);
	charac=l-space;
	printf("\n No of characters are=%d",charac);
	words=space+1;
	printf("\n No of words are=%d",words);
	getch();
}
/*
Output
Write your Paragraph till $ : hello this is the new world$

Entered paragraph is : hello this is the new world

 length==27
 No of characters are=22
 No of words are=6
*/