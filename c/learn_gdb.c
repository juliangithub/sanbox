#include<stdio.h>

void PrintLn(const char *pMsg)
{
    printf("%s\n",pMsg);
}

int main(int argc, char *argv[])
{
    PrintLn("Hello GDB");
    return 0;
}
