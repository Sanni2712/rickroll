#include <stdio.h>
#include <unistd.h>

#include "rick.h"

#define FS 2592  // exact size per frame to print once, adjusted by trial and error
#define DELAY 65000       // speed ( also adjusted by trial and error)

int main() {

    setvbuf(stdout, NULL, _IONBF, 0);
    
   // printf("\033[2J");

    int offset = 0;

    while (1) {
        if (offset + FS >= rick_txt_len) {
            offset = 0;
        }

       // printf("\033[H");
        fwrite(&rick_txt[offset], 1, FS, stdout);

        offset += FS;

        usleep(DELAY);
    }

    return 0;
}