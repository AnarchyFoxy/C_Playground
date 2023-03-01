//
//  5_15_hash.c
//  C_Playground
//
//  Created by Astryda Malinowska on 04/02/2023.
//

#include <stdio.h>
void hash(int n);

int main(int argc, const char * argv[])
{
    int razy = 5;
    char ch = '!';
    float f = 6.0;
    
    hash(razy);
    hash(ch);
    hash(f);
    
    
    return 0;
}

void hash(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}

// Output:
/*
 #####
 #################################
 ######
 */
