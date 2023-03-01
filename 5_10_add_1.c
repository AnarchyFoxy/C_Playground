//
//  5_10_add_1.c
//  C_Playground
//
//  Created by Astryda Malinowska on 04/02/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{    
    int ultra = 0, super = 0;
    
    while (super < 5)
    {
        super++;
        ++ultra;
        printf("Super = %d, Ultra = %d \n", super, ultra);
    }
    return 0;
}

// Output:
/*
 Super = 1, Ultra = 1
 Super = 2, Ultra = 2
 Super = 3, Ultra = 3
 Super = 4, Ultra = 4
 Super = 5, Ultra = 5 
 */