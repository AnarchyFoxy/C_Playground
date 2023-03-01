//
//  5_13_dodaj.c
//  C_Playground
//
//  Created by Astryda Malinowska on 01/03/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int licznik, suma;
    
    licznik = 0;
    suma = 0;
    while (licznik++ < 20)
    {
        suma = suma + licznik;
    }
    printf("suma = %d\n", suma);
    
    return 0;
}

// Output:
// suma = 210