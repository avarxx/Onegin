#include <stdio.h>
#include <stdlib.h>


int InputData()
{
    FILE *File = fopen("Onegin.txt", "rb");

    fseek(File, 0, SEEK_END);
    size_t Length = ftell(File);
    printf("<%d>", Length);

    char *ArrayData = (char *) calloc(Length, sizeof(char));
    //int   ArrayRows[6015] = {0};

    fseek(File, 0, SEEK_SET);
    size_t NumberRead = fread(ArrayData, Length, sizeof(char), File);

    for(int i = 0; i < Length; i++)
    {
        if (ArrayData[i] == '\n')
        {
        printf("<%d>", i);
        printf("<------------->");
        }
    }

    free(ArrayData);
    fclose(File);
    return 0;


}
