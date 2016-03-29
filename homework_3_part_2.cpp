//
//  main.m
//  homework 3part2
//
//  Created by Jason Booras on 11/2/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int main()
{

    char New_York, London, Hong_Kong, Tokyo, letter;
    
    printf ("Read a letter: N, L, H, T:\n");
    scanf ( &New_York, &London, &Hong_Kong, &Tokyo);
    
    if (letter == 'N')
        printf ("New York\n");
    if (letter == 'L')
        printf ("London\n");
    if (letter == 'H')
        printf ("Hong Kong\n");
    if (letter == 'T')
        printf ("Tokyo\n");
    
 
    else
    printf ("Bad Input\n");
    

    return 0;
}