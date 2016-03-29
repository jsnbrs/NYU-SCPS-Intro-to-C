//
//  main.cpp
//  function work
//
//  Created by Jason Booras on 11/16/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <math.h>
#include <stdio.h>

int main()
{
    int A, B, C;
    double D;
    printf("A = ");
    scanf("%d", &A);
    if (A == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }
    
    printf("B = ");
    scanf("%d", &B);
    printf("C = ");
    scanf("%d", &C);
    
    D = B * B - 4 * A * C;
    if (D == 0) {
        printf("x = %f\n", -B / 2.0 / A);
        return 0;
    }
    
    if (D > 0) {
        printf("x1 = %f\nx2 = %f\n",
               (-B + sqrt(D)) / 2.0 / A, (-B - sqrt(D))/ 2.0 / A);
    } else {
        printf("x1 = (%f, %f)\nx2 = (%f, %f)\n",
               -B / 2.0 / A, sqrt(-D) / 2.0 / A, -B / 2.0 / A, -sqrt(-D) / 2.0 /A);
    }
    return 0;
}
