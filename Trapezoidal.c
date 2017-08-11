/*
NAME-      SHRABAN KARMAKAR
ROLL NO.-  MCA/10048/16
COURSE-    MCA
SEMESTER-  FIRST
SUBJECT-   NSM LAB
PROGRAMME- Numerical Integration using TRAPEZOIDAL RULE
Date- 18Th August 2016.
*/

#
include < stdio.h > #include < math.h >
  float fn(float x) {

    return 1.0 / (1.0 + (x * x));
  }
void main() {
  int i, n;
  float a, b, s = 0, y = 0, h;
  printf("Enter the lower limit=");
  scanf("%f", & a);
  printf("Enter the upper limit=");
  scanf("%f", & b);
  printf("Enter the no of interval =");
  scanf("%d", & n);
  h = (b - a) / n;
  for (i = 1; i <= n - 1; i++) {
    s = s + fn(a + i * h);
  }
  y = (fn(a) + fn(b) + 2 * s) * h / 2;
  printf("The value of y is=%f", y);
}