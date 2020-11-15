#include <stdio.h>
#include "myMath.h"
#define E 2.718281828

double Power(double x, int y){
    int sum=1;
    
    if(y==0){
    return 1;
    }
    
        for(int i=0;i<y;i++){
        sum=sum*x;
    }
    
  
}

double Exponent(int x){
   
    
         Power(E,x);
    
    
    
}
