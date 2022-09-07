#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0x12345678;
    char *b = &a;
    printf("%#x\n",*b); 
    return 0;
}
