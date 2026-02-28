#include <stdio.h>

int main() {

    int state = 0;

    while(state < 3) {

        if(state == 0)
            printf("IDLE State\n");
        else if(state == 1)
            printf("PROCESS State\n");
        else
            printf("STOP State\n");

        state++;
    }

    return 0;
}
