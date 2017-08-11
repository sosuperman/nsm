/*
NAME-      SHRABAN KARMAKAR
ROLL NO.-  MCA/10048/16
COURSE-    MCA
SEMESTER-  FIRST
SUBJECT-   NSM LAB
PROGRAMME- Fitting Straight Line by Fit Square Method.
Date- 1ST October 2016.
*/

#include<stdio.h>


float a,b,x[50],y[50],xy[50],x2[50],sx=0,sy=0,sxy=0,sx2=0,e=0;
int n,m;

int main()
{
    printf("\n Input number of rows.");
    scanf("%d",&n);

    for(m=0;m<n;m++)
    {
        printf("\nInput x[%d] and y[%d]:",m+1,m+1);
        scanf("%f %f",&x[m],&y[m]);
    }
printf("\n\n\n\nx\t\ty\n-----------");
    for(m=0;m<n;m++)
    {
        printf("\n%f\t%f",x[m],y[m]);
    }



    for(m=0;m<n;m++)
    {
        xy[m]=x[m]*y[m];
        x2[m]=x[m]*x[m];
    }

    for(m=0;m<n;m++)
    {
        sx=sx+x[m];
        sy=sy+y[m];
        sxy=sxy+xy[m];
        sx2=sx2+x2[m];
    }
    a=(n*sxy-sx*sy)/(n*sx2-sx*sx);
    b=(sx2*sy-sxy*sx)/(n*sx2-sx*sx);
    printf("\n\na=%f\nb=%f",a,b);
for(m=0;m<n;m++)
{
    e=e+(a*x[m]+b-y[m])*(a*x[m]+b-y[m]);

}
printf("\n\nError=%f",e);
}
