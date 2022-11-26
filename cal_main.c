#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[]){
    
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("%d + %d => %d\n", x, y, add(x, y));
    printf("%d - %d => %d\n", x, y, sub(x, y));
    printf("%d * %d => %d\n", x, y, mul(x, y));
    printf("%d / %d => %d\n", x, y, dur(x, y));
    printf("===============\n");

    return 0;
}
