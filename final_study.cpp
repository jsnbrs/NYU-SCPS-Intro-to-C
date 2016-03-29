//
//  main.cpp
//  studyingfinal
//
//  Created by Jason Booras on 12/14/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//


#include <stdio.h>



int main(void)

{
 
    int i, j, temp;
    int num[5];
    printf(" \n");
    printf("Enter integers:\n");
    printf(" \n");
    for(i = 1; i<5; i++)

    {
 
        printf("%d: ", i);
        scanf("%d", &num[i]);

    }

    for(i = 1; i < 5; i++);

        for(j = i + 1; j < 5; j++)
   
    if(num[i] < num[j])
    int temp = num[i];
    num[i] = num[j];
    num[j] = temp;
    printf("Sorted: \n");
    for(i = 1; i < 5; i++)
    printf("%d: %d\n", i, num[i]);

    
    return 0;
   
}


