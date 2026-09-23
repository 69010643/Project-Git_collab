#include <stdio.h>
int main(void)
{
    greeting("Developer A,B,C !!");
    return 0;
}
int greeting(const chat *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}