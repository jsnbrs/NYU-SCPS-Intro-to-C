//
//  main.m
//  homework_2
//
//  Created by Jason Booras on 10/26/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>
int main()
{
    
    int stopit=1;
    char name[25]= "Jason";
    int age=31;
    
    scanf("%s", name);
    printf("Your name is %s.  \n\n", name);
    
    scanf("%d", &age);
    printf("Your Age is %d.  \n\n", age);
    
    age=(age*365);
    printf("You are %d days old.\n", age);
    scanf ("%d", &stopit) ;
    /* to stop the program for a print screen */
    
    
    return 0;
}