/*
NAME- SHRABAN KARMAKAR
ROLL NO.- MCA/10048/2016
COURSE- MCA
SEMESTER- FIRST
SUBJECT- NSM LAB
PROBLEM- KARL PEARSON'S COEFFICIENT OF CORELATION AND REGRESSION COEFFICIENT
*/


#include<stdio.h>
#include<math.h>

int main()
{
    float x[20],y[20],sxy=0,sx2=0,sy2=0,sx=0,sy=0,cov=0,mx,my,covv,bxy,byx;
    int m,n;

    printf("\n input number of rows.");
    scanf("%d",&n);

    for(m=0;m<n;m++)
    {
        printf("\nInput x[%d] and y[%d]:",m+1,m+1);
        scanf("%f %f",&x[m],&y[m]);

        sx=sx+x[m];
        sy=sy+y[m];
        sxy=sxy+x[m]*y[m];

        sx2=sx2+x[m]*x[m];
        sy2=sy2+y[m]*y[m];


    }
printf("\n\n\n\nx\t\ty\n-----------");
    for(m=0;m<n;m++)
    {
        printf("\n%f\t%f",x[m],y[m]);
    }

    mx=sx/(float)n;
    my=sy/(float)n;

covv=( (1/(float)n*(sxy)-mx*my) / ( sqrt((1/(float)n*sx2-mx*mx)*(1/(float)n*sy2-my*my)) ) );

////////////////////////////////////


bxy=covv*(sqrt(1/(float)n*sx2-mx*mx)/(sqrt(1/(float)n*sy2-my*my)));
byx=covv*(sqrt(1/(float)n*sy2-my*my)/(sqrt(1/(float)n*sx2-mx*mx)));


printf("\n-------------------------------");
printf("\n\nCORELATION COFF.%f\nREGRESSION COFF.",covv);
printf("\nbxy=%f\nbyx=%f",bxy,byx) ;

printf("\n\nLine of regression.\nx-(%f)*y=%f\n",-byx,mx-bxy*my);



return 0;

}
