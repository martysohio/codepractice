#include <string.h>
#include <stdio.h>
#include <sys/types.h>

int find_short(const char *s)
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
    return min_length;
}




int main() {

    printf("%lu",find_short("bitcoin take over the world maybe who knows perhaps"));
    return 0;
}