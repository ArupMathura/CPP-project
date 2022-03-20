//Program by Ahmed Sura.

//Print any number in Star pattern

//This program prints any multiplication table in star pattern by user input

//This program is a mixture of all other programs



#include<stdio.h>

#include<conio.h>

int i; //declaired globally because all if conditions and j loops works with the value of i

  void zero() // create 0

 {

 	int j; 

	 for(j=0;j<=6;j++)

	{

		if(i<2 && j>0 && j<6 || i>9 && j>0 && j<6 || i>1 && i<10 && j<1 || i>1 && i<10 && j>5 )

		{

			printf("**");

		}

		else

		{

			printf("  ");

		}

	}

	

 }

 

 

void one()// create 1

 {

 	int j;

 	for(j=0;j<=4;j++)

	{

		if(i==0 && i<2  && j==2 || i>0 && i<3 && j>0 && j<3 || i>2 && i<10 && j==2 || i>9  && j<5)

		{

		printf("***");	

		}

		else

		{

		printf("   ");	

		}

	}

 }

 

void two() // create 2

 {

 	int j;

	for(j=0;j<=11;j++)

	{

		if(i>1 && i<5 && j<9 || i>6 && i<10 && j>2)

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}	

 }



void three() // create 3

 {

 	int j;

	for(j=0;j<=11;j++)

	{

		if(i>1 && i<5 && j<9 || i>6 && i<10 && j<9 )

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}	

 }

 

 void four() // create 4

 {

 	int j;

 	for(j=0;j<=12;j++)

	{

		if(i>-2 && i<5 && j>2 && j<10 || i>6 && i<13 && j<10)

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}

 }

 

  void five() // create 5

 {

 	int j;

	for(j=0;j<=11;j++)

	{

		if(i>1 && i<5 && j>2 || i>6 && i<10 && j<9)

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}

 }

 

 void six() // create 6

 {

	int j;

	for(j=0;j<=12;j++)

	{

		if(i>1 && i<5 && j>2 || i>6 && i<11 && j>2 && j<10)

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}

 }

 

  void seven() // create 7

 {

 	int j;

	for(j=0;j<=5;j++)

	{

		if(i<2 &&j<4 || i>4 && i<7 && j>0 && j<5 || j==3)

		{

		printf("***");	

		}

		else

		{

		printf("   ");	

		}

	}	

 }

 

 void eight() // create 8

 {

 	int j;

	for(j=0;j<=6;j++)

	{

		if(i<2 && j>0 && j<6 || i>9 && j>0 && j<6 || i>1 && i<5 && j<1 || i>1 && i<5 && j>5 ||  i>6 && i<10 && j<1 || i>6 && i<10 && j>5 || i>4 && i<7 && j>0 && j<6)

		{

			printf("**");

		}

		else

		{

			printf("  ");

		}

	}	

 }

 

 void nine() // create 9

 {

	int j;

	for(j=0;j<=12;j++)

	{

		if(i>1 && i<5 && j>2 && j<10 || i>6 && i<12 && j<10)

		{

			printf(" ");

		}

		else

		{

			printf("*");

		}

	}

 }

 

 void multiply() // create x

 {

  	int j;

  	for(j=0;j<=5;j++)

	{

		if(i==3 && j==0 || i==3 && j==5 || i==4 && j==1 || i==4 && j==4 || i==5 && j==2 || i==5 && j==3 ||  i==7 && j==2 || i==7 && j==3 || i==8 && j==1 || i==8 && j==4 || i==9 && j==0 || i==9 && j==5)

		 {

		 	printf("**");

		 }

		 else if(i==6 && j==2)

		 {

		 	printf(" *");

		 }

		 else if(i==6 && j==3)

		 {

		 	printf("* ");

		 }

		 else

		 {

		 	printf("  ");

		 }		

	}	

 }

 

 void equal() // create =

 {

 	int j;

	for(j=0;j<=11;j++)

 	{

 		if(i>2 && i<5 || i>5 && i<8)

		 {

		 	printf("*");

		 }

		 else

		 {

		 	printf(" ");

		 }		

	}	

 }

 

 void gap() // create space between two character

 {

 	int j;

	for(j=0;j<=2;j++)

	{

		printf(" ");

	}

 }

 



 int main() //entry point of the program

 {

 	start:

 int tab; //takes the number of multiplication table

 int ans; // stores answer

 int count; //for new line

 int till; //stores the number for muntipling the table number till the value given by the user

 int k;

 char c[10]; // integer to character conversion

 printf("\nSMB Corporation\nProgram By Ahmed Sura.\n \nEnter Multiplication Table Number :"); //You can change it

 scanf("%d",&tab);          //table number from user

 printf("Multiply till :");

 scanf("%d",&till);         

 for(count=1;count<=till;count++) //new line after i loop complete

 {

 	ans=tab*count;  // multiplication table formula

 	for(i=0;i<=11;i++)

 	{

 		

	sprintf(c, "%d", tab);  //converting integer to character array

	for(k=0;c[k]!=NULL;k++) // check the number and call the function

 	{

 	if(c[k]=='1')

 	{

 	gap(); one();	 	

 	}

	if(c[k]=='2')

 	{

 	gap(); two(); 	 	

 	} 	

 	if(c[k]=='3')

 	{

 	gap(); three(); 	 	

 	}

 	if(c[k]=='4')

 	{

 	gap(); four(); 	 	

 	}

 	if(c[k]=='5')

 	{

 	gap(); five(); 	 	

 	}

 	if(c[k]=='6')

 	{

 	gap(); six();	 	

 	}

 	if(c[k]=='7')

 	{

 	gap(); seven(); 	 	

 	}

 	if(c[k]=='8')

 	{

 	gap(); eight();	 	

 	}

 	if(c[k]=='9')

 	{

 	gap(); nine(); 	 	

 	}

 	if(c[k]=='0')

 	{

 	gap(); zero();	 	

 	}

 }

 	gap(); multiply(); //print x 

 	

 	sprintf(c, "%d", count);

	for(k=0;c[k]!=NULL;k++)

	{	

 	if(c[k]=='1')

 	{

 	gap(); one();	 	

 	}

	if(c[k]=='2')

 	{

 	 gap(); two();

 	} 	

 	if(c[k]=='3')

 	{

 	 gap(); three(); 	

 	}

 	if(c[k]=='4')

 	{

 	 gap(); four();  	 	

 	}

 	if(c[k]=='5')

 	{

 	 gap(); five(); 	

 	}

 	if(c[k]=='6')

 	{

 	 gap(); six(); 	

 	}

 	if(c[k]=='7')

 	{

 	 seven();   	 	

 	}

 	if(c[k]=='8')

 	{

 	 gap(); eight();	 	

 	}

 	if(c[k]=='9')

 	{

 	 gap(); nine(); 	 	

 	}

 	if(c[k]=='0')

 	{

 	 gap(); zero(); 	 	

 	}

 

 }

 	gap(); equal();  //print =

 

 	sprintf(c ,"%d", ans);

 	for(k=0;c[k]!=NULL;k++)

 	{

 	if(c[k]=='0')

 	{

 	 gap(); zero();  	 	

 	}

	if(c[k]=='1')

 	{

 	 gap(); one();  	 	

 	}

 	if(c[k]=='2')

 	{

 	 gap(); two();  	 	

 	}

 	if(c[k]=='3')

 	{

 	 gap(); three();  	 	

 	}

 	if(c[k]=='4')

 	{

 	 gap(); four();  	 	

 	}

 	if(c[k]=='5')

 	{

 	 gap(); five();  	 	

 	}

 	if(c[k]=='6')

 	{

 	 gap(); six();  	 	

 	}

 	if(c[k]=='7')

 	{

 	 gap(); seven();  	 	

 	}

 	if(c[k]=='8')

 	{

 	 gap(); eight();  	 	

 	}

 	if(c[k]=='9')

 	{

 	 gap(); nine();  	 	

 	}

 	}

 	printf("\n");  //new line after j loop complete

 } 

 printf("\n\n"); //nwe line after i loop complete

 }

 printf("-------------------------------------------------------------------------------------------------------------------------------------");

 goto start; //again ask user for input........

 

 	getch();// for holding output screen

 }

 

 //now we will paste this program in compiler to run...


