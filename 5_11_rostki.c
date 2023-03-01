//
//  5_11_rostki.c
//  C_Playground
//
//  Created by Astryda Malinowska on 04/02/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{    
    int a = 1, b = 1;
    int aplus, plusb;
    
    aplus = a++;
    plusb = ++b;
    printf("a   aplus    b    plusb \n");
    printf("%d %5d %5d %5d\n", a, aplus, b, plusb);
    
    return 0;
}

// Output:
/*
 a   aplus    b    plusb
 2     1     2     2
 */