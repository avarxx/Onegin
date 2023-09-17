#include <stdio.h>
#include <stdlib.h>

//#include <InputText.h>
/*
int main(int argc, const char *argv[])
{
    int error_input = InputData();

    CHEAK_ERR(error_input);

    int error_output = SortText();

    CHEAK_ERR(error_output);

    PrintText();
}
*/
int main()
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
/*
    for (int i = 0; i <= Length; i++)
    {
        fseek(file, i, SEEK_SET);
        fputchar(fgetc(file));

        if (fgetc(file) == '\n')
        {
            ArrayRows[count] = i;
            count++;
        }
    }
    putchar('\n');
    for(int i = 0; i < 6015; i++)
    {
        printf("%d\n", ArrayRows[i]);

    }
*/


