#include <stdio.h>
#include <unistd.h>   // for sleep()

int main() {
    int led_state = 0;

    for(int i = 0; i < 5; i++) {
        led_state = !led_state;

        if(led_state)
            printf("LED ON\n");
        else
            printf("LED OFF\n");

        sleep(1);  // 1 second delay
    }

    return 0;
}
