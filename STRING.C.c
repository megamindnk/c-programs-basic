	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 char name[100][100],temp[100][100];
	 int i,j=0,n;
	 clrscr();
	 printf("enter how many names you want\n");
	 scanf("%d",&n);

	 printf("enter names\n");
	 for(i=0;i<n;i++)
	 {
			scanf("%s",name[i]);
	 }
	 printf("you entered name=");
	 for(i=0;i<n;i++)
	 {
			printf("\n%s",name[i]);
	 }
	       for(i=0;i<n;i++)
	       printf("\nfirst letter of %d name is %c\n",i+1,name[i][0]);

	 printf("\nthe sorted element is:\n");
	 for(i=0;i<n;i++)
	 {
		if(name[i][0]>name[i+1][0])
		{
			while( (name[i][j]!='\0')&&(name[i+1][j]!='\0'))
			{
			temp[i][j]=name[i][j];
			name[i][j]=name[i+1][j];
			name[i+1][j]=temp[i][j];
			j++;
			}
		 }
	 }
	 for(i=0;i<n;i++)
	 {
			printf("\n%s",name[i]);
	 }

getch();
}
