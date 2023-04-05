#include <stdio.h>
#include <stdint.h>

typedef struct test_t{
   int a;
   float b;
} test;

typedef enum a_t{
    LOW,
    MEDIUM,
    HIGH
} a;

int main(){
    test x={5,3.4};
    printf("%d\n",x.a);
    a lol = LOW;
    printf("%d\n",lol);
    return 0;
}