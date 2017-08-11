/*
NAME-      SHRABAN KARMAKAR
ROLL NO.-  MCA/10048/16
COURSE-    MCA
SEMESTER-  FIRST
SUBJECT-   NSM LAB
PROGRAMME- BISECTION METHOD
*/

#include<math.h>
#include<conio.h>
#include<stdio.h>

float fun(float);
float a,b;

float fun(float x)         
{
return(x-cos(x));
}

void main()
{
int m=1;
float mid;
clrscr();

bb:
printf("\nInput first interval: "); 
scanf("%f",&a);
printf("\nInput second interval: ");
scanf("%f",&b);


if(fun(a)==0)
	{
	printf("\nYou got the root.");
	}

else if(fun(a)<0 && fun(b)<0 || fun(a)>0 && fun(b)>0) //Interval is not correct
	{
	clrscr();
	printf("\nInterval is not correct.\nPress input again.\n");
	goto bb;
	}
else
{
	while(fabs(a-b)>=0.0001)
	{

	mid=(a+b)/2;
	if(fun(mid)<0)
		{
		a=mid;
		}

	else if(fun(mid)>0)
		{
		b=mid;
		}

	printf("\n%d Root=%f ",m,mid); //Print no. of run and root
	m++;

	}
}
getch();

}