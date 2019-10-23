#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <criterion/criterion.h>

//for criterion test debug

ssize_t find_short(const char *s)
{
    long int min_length = 0;
    int count = 0;
    while (*s != '0') {
        //printf("%c",*s);
        //32 is number for space character
        if (*s != 32) { count++;}
        else { 
            if (min_length == 0) {min_length = count;}
            if (count < min_length) {min_length = count;}
            count = 0;
        }
        *s++;
        
    }
    //printf("%lu",min_length);
    return min_length;
}

Test(Sample_Test, should_return_the_shortest_length)
{
    cr_assert_eq(find_short("bitcoin take over the world maybe who knows perhaps"), 3l);
    cr_assert_eq(find_short("turns out random test cases are easier than writing out basic ones"), 3l);
    cr_assert_eq(find_short("lets talk about C the best language"), 1l);
    cr_assert_eq(find_short("i want to travel the world writing code one day"), 1l);
    cr_assert_eq(find_short("Lets all go on holiday somewhere very cold"), 2l);
}

