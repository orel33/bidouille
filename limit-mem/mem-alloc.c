#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return EXIT_FAILURE;
    size_t memsize = atoi(argv[1]); // MB
    void *ptr = malloc(memsize * 1000 * 1000);
    printf("malloc %ld MB: %p\n", memsize, ptr);
    free(ptr);
    return EXIT_SUCCESS;
}
