/*
NAME: SHRABAN KARMAKAR.
PROBLEM: FIND OUT REGRESSION COEFFICIENT.
ROLL NO.: MCA/10048/2016
SEMESTER: 1ST SEM.
BRANCH: MCA.
DEPT: COMPUTER SCIENCe & ENGINEERING.
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int n,m;
    float reg,x[20],y[20],sx=0,sy=0,syq=0,sxq=0,sxy=0,sdx,sdy,sdxy,mx,my;

    printf("\nInput number of entry you want ??\n");
    scanf("%d",&n);

    for(m=0;m<n;m++)
    {
        printf("\n\nInput X[%d]:",m+1);
        scanf("%f",&x[m]);
        sx+=x[m];
        sxq+=(x[m]*x[m]);

        printf("Input Y[%d]:",m+1);
        scanf("%f",&y[m]);
        sy+=y[m];
        syq+=(y[m]*y[m]);

        sxy+=(x[m]*y[m]);
    }

    printf("\n\nDATA TABLE\n");
      printf("\n----------");
      printf("\nX\t||\tY");
      printf("\n--------------------");

    for(m=0;m<n;m++)
    {
        printf("\n%.2f\t||\t%.2f",x[m],y[m]);
    }

mx=sx/((float)n);
my=sy/((float)n);

sdx=sqrt(1/((float)n)*sxq-mx*mx);
sdy=sqrt(1/((float)n)*syq-my*my);
sdxy=1/((float)n)*sxy-mx*my;

reg=sdxy/(sdx*sdy);


printf("\n\nRegression coff.=%f\n\n",reg);
}
