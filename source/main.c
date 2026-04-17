#include <stdio.h>
#include <unistd.h>

#include "rick.h"

#define FRAME_SIZE 2592  // exact size per frame
#define DELAY 65000       // ~0.45x speed (adjust)

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    printf("\033[2J");

    int offset = 0;

    while (1) {
        if (offset + FRAME_SIZE >= rick_txt_len) {
            offset = 0;
        }

        printf("\033[H");
        fwrite(&rick_txt[offset], 1, FRAME_SIZE, stdout);

        offset += FRAME_SIZE;

        usleep(DELAY);
    }

    return 0;
}