#include <stdio.h>
#define TEST

int sub_func()
{
    printf("this is sub_func()");
    printf("abcdefg\n");
}

#ifdef TEST
int main()
{
    sub_func();
}
#endif
