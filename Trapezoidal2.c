/*
NAME-      SHRABAN KARMAKAR
ROLL NO.-  MCA/10048/16
COURSE-    MCA
SEMESTER-  FIRST
SUBJECT-   NSM LAB
PROGRAMME- Numerical Integration using TRAPEZOIDAL RULE
Date- 16Th September 2016.
Program has been Written 'gcc' compiler.
 */

#include<stdio.h>
#include<math.h>

float fn(float x) {

    return 4 * x - (3 * (x * x));
}

void main() {
    int i, n;
    float a, b, s = 0, y = 0, h, exactVal = 1, approxVal, absError, relError;
    printf("Enter the lower limit= ");
    scanf("%f", &a);
    printf("Enter the upper limit= ");
    scanf("%f", &b);
    printf("Enter the no of interval = ");
    scanf("%d", &n);
    h = (b - a) / n;
    for (i = 1; i <= n - 1; i++) {
        s = s + fn(a + i * h);
    }
    y = (fn(a) + fn(b) + 2 * s) * h / 2;
    absError = exactVal - y;
    relError = absError / exactVal;
    printf("The value of y is= %f\nAbsolute Error is = %f and \nRelative Error = %f\n", y, absError, relError);
}
