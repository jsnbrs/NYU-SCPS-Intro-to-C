//
//  main.cpp
//  homework 6
//
//  Created by Jason Booras on 12/7/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int main()
{
   
    short nums[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    scanf("Average is %hi", &nums[20]);
    return 0;
    
}

 float avg(int nums[20], int ave)
{
    int j;
    float avg, sum= 0;
    for (j=0; j<20; j++)

    avg=(sum/20);
    
    printf(avg);
    
}
