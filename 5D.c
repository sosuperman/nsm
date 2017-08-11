/*
Project: C Program to Find The Fuction Optimization on a Given Interval
Program has Written By SHRABAN KARMAKAR.
Name: SHRABAN KARMAKAR.
Roll No: MCA/10048/2016.
Subject: NSM Lab Assignment.
Branch: Master of Computer Application.
Submission Date: 28Th October 2016.(Friday).

*/
//Header Files.
#include<stdio.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>
//End of Header Files.

//Function Prototype to Generate Random Numbers between Given Two Interval.
float randomNumberGenerator(float a,float b);

//The Following Function Creates the "Function of 'Function Optimization'"
float fun(float x1, float x2, float x3, float x4, float x5)
{
    return ((x1*x1)+x2*x3+(x4)+x5);
}


//Starting of main() function.

void main()
{
    int x = 0, y = 0, i = 0, count = 1;
    float x1[20], x2[20],x3[20], x4[20],x5[20], x6[20],x7[20], x8[20],x9[20], x10[20],x11[20], x12[20],x13[20], x14[20],x15[20], x16[20],x17[20], x18[20],x19[20], x20[20];
    srand(time(NULL));
    int r = rand();
    srand((unsigned int)time(NULL));

    float a = 1.0, sum = 0, x_rand;
    for (i=0; i<20; i++)
    {
        x_rand=((float)rand()/(float)(RAND_MAX))+1.53;

        if(i==0) // Initialization of the array storing the coordinate value of each cordinate.
        {
            x1[0]=0;
            x2[0]=0;
            x3[0]=0;
            x4[0]=0;
            x5[0]=0;
            continue;
        }

        x1[i] = x_rand+x1[i-1];

        x2[i] = x1[i] -((float)rand()/(float)(RAND_MAX));
        x3[i] = x1[i] -((float)rand()/(float)(RAND_MAX));
        x4[i] = x1[i] -((float)rand()/(float)(RAND_MAX));
        x5[i] = x1[i] -((float)rand()/(float)(RAND_MAX));
  		count++;

        if(x1[i]>=20 || x2[i]>=20 || x3[i]>=20 || x4[i]>=20 || x5[i]>=20) //Checks whether the value is inside the Region or not.
        {
            x1[i] = 20.0;
            x2[i] = 20.0;
            x3[i] = 20.0;
            x4[i] = 20.0;
            x5[i] = 20.0;
            break;
        }
    }

    //Printing all values of each coordinates.
    printf("--------------------------\n");
    for(i =0 ; i<count; i++)
        printf("%f\n",x1[i]);
    printf("--------------------------\n");
    for(i =0 ; i<count; i++)
        printf("%f\n",x2[i]);
    printf("--------------------------\n");
    for(i =0 ; i<count; i++)
        printf("%f\n",x3[i]);
    printf("--------------------------\n");
    for(i =0 ; i<count; i++)
        printf("%f\n",x4[i]);
    printf("--------------------------\n");
    for(i =0 ; i<count; i++)
        printf("%f\n",x5[i]);
    //Printed upto last coordinate.

	//Following variables Manipulate the values of all Coordinates as well as tracking about optimized values and relative positions.
    long minMaxCount = 0;
    int ix1, ix2, ix3, ix4, ix5;
    float min, max,globalMin,globalMax;
    long minPosition,maxPosition;
    globalMin=15;
    globalMax=1;


	//Manipulating all values by creating pair.
    for(ix5 =0; ix5<10; ix5++)
    {
        for(ix4 =0; ix4<10; ix4++)
        {
            for(ix3 =0; ix3<10; ix3++)
            {
                for(ix2=0; ix2<10; ix2++)
                {
                    for(ix1=0; ix1<10; ix1++)
                    {
                        for(i=0; i<=50; i++)
                        {

                            if(i==0)
                            {
                                min=fun(randomNumberGenerator(x1[ix1],x1[ix1+1]),randomNumberGenerator(x2[ix2],x2[ix2+1]),randomNumberGenerator(x3[ix3],x3[ix3+1]),randomNumberGenerator(x4[ix4],x4[ix4+1]),randomNumberGenerator(x5[ix5],x5[ix5+1]));
                                max=min;

                            }

                            else
                            {
                                float minMaxCheck = fun(randomNumberGenerator(x1[ix1],x1[ix1+1]),randomNumberGenerator(x2[ix2],x2[ix2+1]),randomNumberGenerator(x3[ix3],x3[ix3+1]),randomNumberGenerator(x4[ix4],x4[ix4+1]),randomNumberGenerator(x5[ix5],x5[ix5+1]));
                                if(minMaxCheck < min)
                                {
                                    min = minMaxCheck;
                                }
                                if(minMaxCheck > max)
                                {
                                    max = minMaxCheck;
                                }
                            }
                        }
                        printf("%ld-> Min Max is = %f\t %f\n",minMaxCount, min,max);
                        if(min<globalMin)
                            {
                                globalMin=min;
                            minPosition=minMaxCount;
                            }
                        if(max>globalMax)
                        {
                            globalMax=max;
                            maxPosition=minMaxCount;
                        }
                        minMaxCount++;


                    }
                }
            }
        }
    }
    printf("\n-------------------------\nOPTIMIZED MIN=%f at BLOCK %ld\nOPTIMIZED MAX=%f at BLOCK %ld\n",globalMin,minPosition,globalMax,maxPosition);

}


//Function Definition of Random Number Generator.
float randomNumberGenerator(float a,float b)
{
    float c;

    for(;;)
    {
        c = ((float)rand()/(float)(RAND_MAX))*100;
        if(c>=a && c<=b)
        {
            return c;
        }
    }
}
