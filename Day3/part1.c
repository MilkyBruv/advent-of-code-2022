#include <stdio.h>
#include <string.h>
#include "data.h"

int main(int argc, char const *argv[])
{
    
    int i;
    int j;
    int k;
    int left_index_start;
    int right_index_start;
    int left_index_end;
    int right_index_end;
    int half;

    for (i = 0; i < 300; i++)
    {

        half = strlen(data[i]) / 2;

        char left[50];
        char right[50];

        for (j = 0; j < half; j++)
        {
            
            left[j] = data[i][j];

        }

        left[j] = '\0';

        for(j = half, k = 0; j <= strlen(data[i]); j++, k++) {
        
            right[k]= data[i][j];
 
        }

        printf("%s | %s", left, right);
        
        
        printf("\n\n");

    }

    return 0;

}
