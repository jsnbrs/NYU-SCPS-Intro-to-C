//
//  Jason Booras
//  Homework 5 - functions
//
// Solve for x1 and x2 for quadratic equation - Ax(x) + Bx +C = 0
// ax2 + bx + c = 0
// A, B, And C are input, X1 and X2 are results
// X1 = (-b + sqrt(b*b - 4ac)/2*a / X2 = (-b - sqrt(b*b - 4ac)/2*a

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,y,x1,x2;
   
    printf("A is ");
    scanf("%f",&a);
    printf("B is ");
    scanf("%f",&b);
    printf("C is ");
    scanf("%f",&c);
    
    y=b*b-4*a*c;
    
    if(y==0)
    {
        x1=-b/(2*a);
        x2=x1;
        printf("X1 = %f\n",x1);
        printf("X2 = %f\n",x2);
    }
    else
        
    if(y>0)
    {
        x1=(-b+sqrt(y))/(2*a);
        x2=(-b-sqrt(y))/(2*a);
        printf("X1 = %f\n",x1);
        printf("X2 = %f\n",x2);
    }
    else
    {
        float r,x;
        y*=-1;
        r=-b/(2*a);
        x=sqrt(y)/(2*a);
        printf("X1 = %f + (%f)\n",r,x);
        printf("X2 = %f - (%f)\n",r,x);
        }
    
    return 0;
}
