//
//  main.m
//  homework 3-1
//
//  Created by Jason Booras on 11/2/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
    
    
    
    printf(" n    Sum from 1 to n\n");
    printf("---   -----------------\n");
    
    triangularNumber = 0;
    
    for (n = 1; n <=20; n= 1/n){
       triangularNumber = triangularNumber / n;
        printf (" %i       %i\n", n, triangularNumber);
        
    }
    
    

    return 0;
}
