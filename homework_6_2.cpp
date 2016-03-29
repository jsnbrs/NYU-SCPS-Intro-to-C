//
//  main.cpp
//  homework6
//
//  Created by Jason Booras on 12/8/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>
float average(float a[]);
int main(){
    float avg, nums[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    avg = average(nums);
    printf("average of array is %f\n", avg);
    return 0;
}
float average(float a[])
{
    int j;
    float avg, sum=0;
    for(j=0; j<20; ++j)
    sum+=a[j];
    avg =(sum/20);
    return (avg);
}
