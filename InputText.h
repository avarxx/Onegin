#ifndef INPUTTEXT_H_INCLUDED
#define INPUTTEXT_H_INCLUDED

#define CHECK_ERR(err)          \
do                              \
{                               \
    if (err != NO_ERR)          \
        {                       \
            PrintError(err);    \
            return err;         \
        }                       \
}                               \
while (0)

struct Text
{
    int   NumberLines;
    char* Buffer;
    Line* Lines;
};

struct Line
{
    char* String;
    int   Lenght;
};


int InputData();

#endif // INPUTTEXT_H_INCLUDED
