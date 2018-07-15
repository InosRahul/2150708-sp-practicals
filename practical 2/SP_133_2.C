#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){

FILE *fp,*o1,*e1;
int numbers,n,i;
clrscr();
printf("Enter n");
scanf("%d",&n);

fp=fopen("Numbers.txt","w");
for(i=1;i<=n;i++){

	printf("\n Enter numbers:");

	scanf("%d",&numbers);
	putw(numbers,fp);
}
fclose(fp);



fp = fopen("Numbers.txt","r");
printf("\nNumbers are:");
	while((numbers = getw(fp)) != EOF)
	printf(" %4d",numbers);

fp = fopen("Numbers.txt","r");
o1 = fopen("Odd.txt","w");
e1 = fopen("Even.txt","w");

while((numbers = getw(fp)) != EOF){
	if(numbers %2 == 0)
		putw(numbers, e1);
	else
		putw(numbers, o1);

}
fcloseall();

o1 = fopen("Odd.txt","r");
e1 = fopen("Even.txt","r");

	printf("\n Odd numbers are:");
	while((numbers = getw(o1)) != EOF)
	printf("%4d",numbers);

	printf("\n Even numbers are:");
	while((numbers = getw(e1)) != EOF)
	printf("%4d",numbers);

fcloseall();

getch();

}

/*
Output
Enter n5

 Enter numbers:10

 Enter numbers:2

 Enter numbers:8

 Enter numbers:1

 Enter numbers:12

Numbers are:   10    2    8    1   12
 Odd numbers are:   1
 Even numbers are:  10   2   8  12
*/