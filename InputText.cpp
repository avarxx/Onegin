#include <stdio.h>
#include <stdlib.h>

const int count_indicator = 6033;
int InputData()
{
    FILE *File = fopen("Onegin.txt", "rb");

    fseek(File, 0, SEEK_END);
    size_t Length = ftell(File);

    char *ArrayData = (char *) calloc(Length, sizeof(char));

    fseek(File, 0, SEEK_SET);
    size_t NumberRead = fread(ArrayData, Length, sizeof(char), File);

    int count = 0;
    int ArrayIndicator[count_indicator] = {0};

    for(int i = 0; i < Length; i++)
    {
        if (ArrayData[i] == '\n')
        {
        ArrayIndicator[count] = i;
        count++;
        }
    }
    printf("%s", ArrayData);
    free(ArrayData);
    fclose(File);
    return 0;


}
