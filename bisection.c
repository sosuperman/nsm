/*
NAME- SHRABAN KARMAKAR.
COURSE-MCA
ROLL NO.-MCA/10048/2016
SEMESTER-1st
SUBJECT-NSM LAB
TOPIC- BISECTION METHOD.
PROGRAMME- FINDING ROOT USING BISECTION METHOD.
Date- 18Th August 2016.
 */

#include<math.h>
float f, l, mid;

float fun(float x) {
    return (2 * x - 3 - cos(x));
}

void main() {
    int n;
    float mid, temp;
    for (n = 0; n <= 10; n++) {
        //printf("\n%f",fun(n));

        if (fun(n) < 0 && fun(n + 1) > 0) {
            f = n;
            l = (n + 1);
            break;
        }
        else if (fun(n) > 0 && fun(n + 1) < 0) {
            l = n;
            f = (n + 1);
            break;
        }
    }

    printf("\nFunction interval is %f and %f with value %f and %f", f, l, fun(f), fun(l));


xx:
    temp = mid;
    mid = (f + l) / 2;

    if (fun(mid) < 0)
        f = mid;
    else if (fun(mid) > 0)
        l = mid;
    if (fabs(temp - mid) >= 0.00001)
        goto xx;

    printf("\nans=%f in %f", mid, fun(mid));
    printf("\n\n");
}
