// $ # in root of project
// $ cc -c src/num.c
// $ cc -shared num.o -o libnum.so

#include <stdio.h>
#include <stdint.h>
#include <num_ext.h>

uint32_t get_num(uint32_t num)
{
    return double_num(num);
}