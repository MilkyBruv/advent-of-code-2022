#include <stdio.h>
#include <string.h>
#include "data.h"

int main(int argc, char const *argv[])
{
    
    int i;
    int j;
    int k;
    int a;
    int b;
    int c;
    int left_index_start;
    int right_index_start;
    int left_index_end;
    int right_index_end;
    int half;
    char splitString[300][2][26];
    char left[50];
    char right[50];
    int total = 0;
    char match_char;

    for (i = 0; i < 300; i++)
    {

        // Split each line in half
        half = strlen(data[i]) / 2;

        for (j = 0; j < half; j++)
        {
            
            left[j] = data[i][j];

        }

        left[j] = '\0';

        for (j = half, k = 0; j <= strlen(data[i]); j++, k++)
        {
        
            right[k] = data[i][j];
 
        }

        // Check for matching chars in both halves
        for (a = 0; a < strlen(left); a++)
        {
        
            for (b = 0; b < strlen(right); b++)
            {
                
                if (left[a] == right[b])
                {

                    match_char = left[a];
                    break;

                }

            }

        }

        // Get priority value relative to matching char
        for (c = 0; c < strlen(prior_chars); c++)
        {
            
            if (match_char == prior_chars[c])
            {

                total += c + 1;

            }

        }

    }
    
    printf("Total: %i", total);

    return 0;

}
