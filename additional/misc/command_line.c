#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Hello, world\n");
    } else {
        printf("Hello, %s\n", argv[1]);
    }

}
