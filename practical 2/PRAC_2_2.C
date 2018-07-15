#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){

	char ch;
	FILE *fp;
	clrscr();

	fp=fopen("name.txt","w");

	printf("Enter string till $");
	while(1){
		scanf("%c",&ch);
		if(ch == '$')
		break;
		fputc(ch,fp);
	}
	fclose(fp);
	fp=fopen("name.txt","r");

	printf("\nContent of the name.txt file is\n");
	printf("String\n");
	printf("----------\n");
	do{
		ch = fgetc(fp);
		putchar(ch);

	}
	while(ch != EOF);

	fcloseall();
	getch();

}

/*
Output

Enter string till $hello world is too common$
										
Content of the name.txt file is                                                 
String                                                                          
----------                                                                      
hello world is too commonÿ                                                      

*/