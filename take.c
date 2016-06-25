#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    long chunk = 536870912;
    long mem_in_bytes;
    short n;
    void* got;

    got = malloc(0);

    for (n = 1 ; n <= 7 ; n += 1){
        mem_in_bytes = n * chunk;
        got = realloc(got, mem_in_bytes);
        printf("address of pointer: %p\n", got);
        if (got == NULL) {
            printf("Cannot allocate...\n");
        }
        else{
            memset(got, 0, mem_in_bytes);
            printf("Successfully allocated and initialised %d MB of memory\n\n", (int)(((float)mem_in_bytes)/1024/1024));
        }

    }
}
