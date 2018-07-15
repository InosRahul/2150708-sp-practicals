  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  struct stud
  {
	int rno;
	char nm[100];
  };
  void main()
  {
	struct stud *s;
	int n,i;
	char ch;
	FILE *fp;
	clrscr();
	printf("Enter record numbers: ");
	scanf("%d",&n);
	s=(struct stud *)malloc(n*sizeof(struct stud));
	fp=fopen("STUD.txt","w");
	for(i=0;i<n;i++)
	{
	      printf("\n\tInformation for student : %d\n",i+1);
	      printf("Enter Roll No : ");
	      scanf("%d",&s[i].rno);
	      printf("Enter Name : ");
	      fflush(stdin);
	      gets(s[i].nm);
	      fprintf(fp,"%5d %-20s\n",s[i].rno,s[i].nm);
	}
	fclose(fp);
	fp=fopen("STUD.txt","r");

	printf("\nContent of the STUD.txt file is\n");
	printf("Roll No  Name\n");
	printf("---------------------------\n");
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
 Enter record numbers: 3

	Information for student : 1
Enter Roll No : 1
Enter Name : rahul

	Information for student : 2
Enter Roll No : 2
Enter Name : yash

	Information for student : 3
Enter Roll No : 3
Enter Name : vikash

Content of the STUD.txt file is
Roll No  Name
---------------------------
    1 rahul
    2 yash
    3 vikash
*/ÿ




