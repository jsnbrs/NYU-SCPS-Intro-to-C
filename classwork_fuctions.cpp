//
//  main.cpp
//  Classwork fuctions
//
//  Created by Jason Booras on 11/16/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int num ()
{
    short a=0, b=0, ans;
    short addit (short one, short two);
    long result;
    char op;
    long calcit (char op, short a, short b);
    scanf ("%c %hi %hi", &op, &a, &b);
           result = calcit(op, a, b);
           return 0;
}
           long calcit(char myop, short a, short b)
           {
               if (myop == 't') return (a+b);
               else if (myop == ' ') return(a-b);
               else if (myop =='x') return(a*b);
           }
