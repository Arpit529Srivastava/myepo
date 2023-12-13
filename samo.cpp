/*#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float r1, r2,rpart,ipart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float d = b * b - 4 * a * c;
    if (d == 0) {
        r1 = -b / (2.0 * a);
        r2 = r1;
        printf("Roots are real and equal: r1 = %.2f, r2 = %.2f\n", r1, r2);
    }
if(d>0){
    r1=(-b+pow(d,0.5))/(2.0*a);
    r2=(-b-pow(d,0.5))/(2.0*a);
printf("Roots are real and equal: r1 = %.2f, r2 = %.2f\n", r1, r2);
}
else{
    rpart=-(b/(2.0*a));
    ipart=sqrt(fabs(d))/(2*a);
    printf("root is %f+i%f", rpart, ipart);
     printf("root is %f-i%f", rpart, ipart);
}
    return 0;
}
*/
