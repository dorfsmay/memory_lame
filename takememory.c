#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    long chunk = 536870912;
    unsigned long mem_in_bytes;
    unsigned short n;
    unsigned short iterations = 7;
    void* got;

    if (argc >= 2){
        iterations = (unsigned short)atoi(argv[1]);
    }


    got = malloc(0);

    for (n = 1 ; n <= iterations ; n += 1){
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
