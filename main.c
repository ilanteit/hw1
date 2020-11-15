#include <stdio.h>
#include "myMath.h"

int main(){
    double x;
   
    printf("Enter a number:\n");
    scanf("%lf", &x);
    
    double answer1=add(Exponent((int)x),sub(Power(x,3), 2.0));
    double answer2=add(mul(x,3), mul(Power(x,2), 2));
    double answer3=sub(div(mul(Power(x,3), 4), 5),mul(x,2));
    printf("The answers are :\n %0.4lf\n %0.4lf\n %0.4lf\n",   answer1,answer2,answer3);
   

return 0;
}
