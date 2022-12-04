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
    int x;
    int total = 0;
    int count = 0;
    int rem;
    char* groups[100][3];
    char* new_data[3];
    char match_char;

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
        
        // Check for matching chars in both halves
        for (a = 0; a < strlen(groups[j][0]); a++)
        {
        
            if (strchr(groups[j][1], groups[j][0][a]) != NULL && strchr(groups[j][2], groups[j][0][a]) != NULL)
            {

                match_char = groups[j][0][a];

                // Get priority value relative to matching char
                for (x = 0; x < strlen(prior_chars); x++)
                {
                    
                    if (match_char == prior_chars[x])
                    {

                        total += x + 1;
                        
                    }

                }

                break;

            }

        }

    }
    
    printf("Total: %i", total);

    return 0;

}
