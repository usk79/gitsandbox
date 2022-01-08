#include <stdio.h>
#define TEST

int sub_func()
{
    printf("this is sub_func()");
    printf("abcdefg\n")
}
<<<<<<< HEAD
/*
int main()
{
    sub_func();
}*/
=======

#ifdef TEST
int main()
{
    sub_func();
}
#endif
>>>>>>> 44bece1f1db085ced274af3bdfebaa782f8cee47
