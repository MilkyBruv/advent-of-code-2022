#include <stdio.h>
#include <string.h>
#include "data.h"

int main(int argc, char const *argv[])
{
    
    int i;
    int j;
    int a;
    int b;
    int c;
    int total = 0;
    int count = 0;
    int rem;
    char groups[100][3];
    char new_data[3];

    for (i = 0; i < 300; i++)
    {

        rem = i % 3;

        if (rem == 2)
        {

            groups[count][0] = data[i - rem];
            groups[count][1] = data[i - (rem - 1)];
            groups[count][2] = data[i - (rem - 2)];

            count++;

        }

    }

    for (j = 0; j < 100; j++)
    {
        
        for (a = 0; a < strlen(groups[j][0]); a++)
        {
            
            for (b = 0; b < strlen(groups[j][1]); b++)
            {
            
                for (c = 0; c < strlen(groups[j][2]); c++)
                {
            
                    if (groups[j][0][a] == groups[j][0][a])
                    {

                        //

                    }

                }

            }

        }
        

    }
    
    
    printf("Total: %i", total);

    return 0;

}
