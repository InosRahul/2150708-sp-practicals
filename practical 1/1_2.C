#include<stdio.h>
#include<conio.h>
void main(){
	char *s1, *s2;
	int space=0,words=0,l=0,charac=0;
	clrscr();
	printf("\nWrite your Paragraph : ");
	gets(s2);
	puts(s2);
	s1=s2;
	for(;*s2!=NULL;s2++){
		if(*s2==' ')
		space++;
		}
	l=s2-s1;
	printf("\n len==%d",l);
	charac=l-space;
	printf("\n No of chars are=%d",charac);
	words=space+1;
	printf("\n No of words are=%d",words);
	getch();
}

/*
Output
Write your Paragraph : hello this is the new world
hello this is the new world

 len==27
 No of chars are=22
 No of words are=6
*/