#include <stdio.h>

int main() {
    int button;

    printf("Enter button state (0 or 1): ");
    scanf("%d", &button);

    if(button == 1)
        printf("Motor ON\n");
    else
        printf("Motor OFF\n");

    return 0;
}
