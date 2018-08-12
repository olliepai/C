#include <stdio.h>
#include <string.h>

int main (int argc, char** argv) {
    
    // for (int i = 0; i < argc; i++) {
    //     printf("%s\n", argv[1]);
    // }

    if (strcmp(argv[1], "debug") == 0) {
        printf("Running in debug mode");
    } else {
        printf("Running in normal mode");
    }
}