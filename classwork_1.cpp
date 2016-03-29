//
//  main.cpp
//  not homework
//
//  Created by Jason Booras on 11/9/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int main() {
    
    short x=0, y=0, c1=0, c2=0;
    scanf("%hi %hi", &x, &y);
    if ((x>1) && (y>1))
    {
        for (c1=0; c1<x; c1++) printf ("_");
        printf ("\n");
        for (c2=0; c2 < (y-2); c2++)
        {
            printf ("|");
            for (c1=0; c1< (x-2); c1++) printf(" ");
            printf("|\n");
        }
        printf ("|");
        for (c1=0; c1< (x-2); c1++) printf ("_");
        printf ("|\n");
    
    
    }


    return 0;
}
