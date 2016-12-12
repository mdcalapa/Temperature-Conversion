//
//  main.c
//  func_temp
//
//  Created by Ree on 12/12/16.
//  Copyright © 2016 Ree. All rights reserved.
//

#include <stdio.h>
float conv(float fahr);

float conv(float fahr)
{
    float cel;
    cel=(5.0/9.0)*(fahr-32.0);
    return cel;
}

int main()
{
    float fahr;
    int upper,lower,step;
    printf("Please enter the top range of F degrees: ");
    scanf("%d",&upper);
    printf("Please enter the bottom range of F degrees: ");
    scanf("%d",&lower);
    printf("Please enter step size: ");
    scanf("%d",&step);
    
    fahr = lower;
    
    printf("\tF\tC\n");
    while(fahr<=upper)
    {
        printf("%3.0f\t%6.1f\n",fahr,conv(fahr));
        fahr = fahr+step;
    }
}
