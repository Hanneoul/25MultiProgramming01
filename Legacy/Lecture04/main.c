#include <stdio.h>

int main()
{
    int err;
    err = puts("hello~");

    char hp = 'f';

    printf("Error Message is : %d %c", err, hp);

    return 0;
}