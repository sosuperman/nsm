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

float fun(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9) {
    return (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9);
}

//The Following Function Creates the "Function of 'Function Optimization'".
float randomNumberGenerator(float a, float b);

//Starting of main() function.

void main() {
    int x = 0, y = 0, i = 0, count = 1;
    float x1[20], x2[20], x3[20], x4[20], x5[20], x6[20], x7[20], x8[20], x9[20], x10[20], x11[20], x12[20], x13[20], x14[20], x15[20], x16[20], x17[20], x18[20], x19[20], x20[20];
    srand(time(NULL));
    int r = rand();
    /*Generating Random Number in Floating Point. For calculating Dimension of Rectangle*/
    srand((unsigned int) time(NULL));

    float a = 1.0, sum = 0, x_rand;
    for (i = 0; i < 20; i++) {
        x_rand = ((float) rand() / (float) (RAND_MAX)) + 1.53;

        if (i == 0) // Initialization of the array storing the coordinate value of each cordinate.
        {
            x1[0] = 0;
            x2[0] = 0;
            x3[0] = 0;
            x4[0] = 0;
            x5[0] = 0;
            x6[0] = 0;
            x7[0] = 0;
            x8[0] = 0;
            x9[0] = 0;
            continue;
        }

        x1[i] = x_rand + x1[i - 1];

        x2[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x3[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x4[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x5[i] = x1[i] -((float) rand() / (float) (RAND_MAX));

        x6[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x7[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x8[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        x9[i] = x1[i] -((float) rand() / (float) (RAND_MAX));
        //x6[i] = x1[i] -((float)rand()/(float)(RAND_MAX));

        count++;

        if (x1[i] >= 20 || x2[i] >= 20 || x3[i] >= 20 || x4[i] >= 20 || x5[i] >= 20 || x6[i] >= 20 || x7[i] >= 20 || x8[i] >= 20 || x9[i] >= 20) //Checks whether the value is inside the Region or not.
        {
            x1[i] = 20.0;
            x2[i] = 20.0;
            x3[i] = 20.0;
            x4[i] = 20.0;
            x5[i] = 20.0;
            x6[i] = 20.0;
            x7[i] = 20.0;
            x8[i] = 20.0;
            x9[i] = 20.0;
            //x2[i] = 20.0;
            break;
        }
    }

    //////////////////////////////////////////
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x1[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x2[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x3[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x4[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x5[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x6[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x7[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x8[i]);
    printf("--------------------------\n");
    for (i = 0; i < count; i++)
        printf("%f\n", x9[i]);
    //////////////////////////////////////////
    printf("hi");


    int minMaxCount = 0;
    int ix1, ix2, ix3, ix4, ix5, ix6, ix7, ix8, ix9, lauda = 0;
    float min, max, tmin, tmax = fun(randomNumberGenerator(x1[ix1], x1[ix1 + 1]), randomNumberGenerator(x2[ix2], x2[ix2 + 1]), randomNumberGenerator(x3[ix3], x3[ix3 + 1]), randomNumberGenerator(x4[ix4], x4[ix4 + 1]), randomNumberGenerator(x5[ix5], x5[ix5 + 1]), randomNumberGenerator(x6[ix6], x6[ix6 + 1]), randomNumberGenerator(x7[ix7], x7[ix7 + 1]), randomNumberGenerator(x8[ix8], x8[ix8 + 1]), randomNumberGenerator(x9[ix9], x9[ix9 + 1]));
    tmin = tmax;

    //for(ix9 =0; ix9<count-1; ix9++)
    //{
    //for(ix8 =0; ix8<count-1; ix8++)
    {
        //for(ix7 =0; ix7<count-1; ix7++)
        {
            //for(ix6 =0; ix6<count-1; ix6++)
            {
                //for(ix5 =0; ix5<count-1; ix5++)
                {
                    //for(ix4 =0; ix4<count-1; ix4++)
                    {
                        for (ix3 = 0; ix3 < count - 1; ix3++) {

                            for (ix2 = 0; ix2 < count - 1; ix2++) {
                                for (ix1 = 0; ix1 < count - 1; ix1++) {

                                    for (i = 0; i <= 5; i++) {
                                        //printf("hi");

                                        if (i == 0) {
                                            min = fun(randomNumberGenerator(x1[ix1], x1[ix1 + 1]), randomNumberGenerator(x2[ix2], x2[ix2 + 1]), randomNumberGenerator(x3[ix3], x3[ix3 + 1]), randomNumberGenerator(x4[ix4], x4[ix4 + 1]), randomNumberGenerator(x5[ix5], x5[ix5 + 1]), randomNumberGenerator(x6[ix6], x6[ix6 + 1]), randomNumberGenerator(x7[ix7], x7[ix7 + 1]), randomNumberGenerator(x8[ix8], x8[ix8 + 1]), randomNumberGenerator(x9[ix9], x9[ix9 + 1]));
                                            max = min;

                                        }
                                        else {
                                            float minMaxCheck = fun(randomNumberGenerator(x1[ix1], x1[ix1 + 1]), randomNumberGenerator(x2[ix2], x2[ix2 + 1]), randomNumberGenerator(x3[ix3], x3[ix3 + 1]), randomNumberGenerator(x4[ix4], x4[ix4 + 1]), randomNumberGenerator(x5[ix5], x5[ix5 + 1]), randomNumberGenerator(x6[ix6], x6[ix6 + 1]), randomNumberGenerator(x7[ix7], x7[ix7 + 1]), randomNumberGenerator(x8[ix8], x8[ix8 + 1]), randomNumberGenerator(x9[ix9], x9[ix9 + 1]));
                                            if (minMaxCheck < min) {
                                                min = minMaxCheck;
                                            }
                                            if (minMaxCheck > max) {
                                                max = minMaxCheck;
                                            }

                                        }


                                    }

                                    printf("-> Min Max is = %f\t %f\n", min, max);
                                    if (min < tmin)
                                        tmin = min;
                                    if (max > tmax)
                                        tmax = max;
                                    //tmax=max;
                                    minMaxCount++;


                                }
                            }
                        }
                    }
                }
            }
        }
    }
    //}


    /*float printCounter;

    for(printCounter=0; printCounter<10000; printCounter++)
    {

        printf("%.0f-> Min Max is = %f\t %f\n",printCounter, min[(long)(printCounter)],max[(long)(printCounter)]);


    }*/
}

float randomNumberGenerator(float a, float b) {
    float c;

    for (;;) {
        c = ((float) rand() / (float) (RAND_MAX))*100;
        //printf("\n%f",c);
        if (c >= a && c <= b) {
            //printf("\n.... %f",c);
            return c;
        }
    }
}
