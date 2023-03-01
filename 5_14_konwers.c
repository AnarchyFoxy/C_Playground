//
//  5_14_konwers.c
//  C_Playground
//
//  Created by Astryda Malinowska on 04/02/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char ch;
    int i;
    float fl;
    
    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + 1;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 1107;
    printf("Teraz ch = %c\n", ch);
    ch = 80.89;
    printf("Teraz ch = %c\n", ch);
    
    return 0;
}

// Output:
/*
 ch = C, i = 67, fl = 67.00
 ch = D, i = 203, fl = 137.00
 Teraz ch = S
 Teraz ch = P
 */
