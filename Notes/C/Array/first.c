#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Hello world \n");

    char ch = 'c';
    int x = 5;

    printf("%d \n", x);
    printf("Short: %d \n", sizeof(short));
    printf("float: %d \n", sizeof(float));
    printf("double: %d \n", sizeof(double));
    printf("MAX int: %d \n", INT_MAX);
    printf("MIN int: %d \n", INT_MIN);
    printf("MAX U int: %u \n", UINT_MAX);
    printf("MAX Short: %d \n", SHRT_MAX);
    printf("MIN Short: %d \n", SHRT_MIN);
    printf("MAX Long: %ld \n", LONG_MAX);
    printf("MIN Long: %ld \n", LONG_MIN);
    printf("U MAX Long: %lu \n", ULONG_MAX);
    printf("MAX Long Long: %lld \n", LLONG_MAX);
    printf("MIN Long Long: %lld \n", LLONG_MIN);

    return 0;
}
