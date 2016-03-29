//
//  main.cpp
//  homework4
//
//  Created by Jason Booras on 11/9/14.
//  Copyright (c) 2014 Jason Booras. All rights reserved.
//

#include <stdio.h>

int main (void)
{
   
FILE *in, *out;
    int c, rev;
    char ch;
    
in = fopen("/Users/jasonbooras/Desktop/input.txt", "r");
if (in==NULL)
    
    printf("Data could not be opened.\n");
    else
    
    
    out = fopen("/Users/jasonbooras/Desktop/out.txt", "w");
    if (out==NULL)
    printf("Data could not be opened.\n");
    else
    
        
        while( (c =getc(in)) !=EOF)
            putc(c, out);
    
    fseek(in, 0L, SEEK_END);
    rev = ftell(in);
    
   
    rev = rev-1;
    
    while(rev >= 0L) {
        fseek(in, rev, SEEK_SET);
        ch = fgetc(in);
        fputc(ch, out);
        rev--;
    
    }
    fclose (in);
    fclose (out);
    
    printf("File has been copied.\n");
    return 0;
}
