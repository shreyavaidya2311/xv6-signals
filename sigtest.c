#include "types.h"
#include "stat.h"
#include "user.h"
#include "signal.h"

void handler(int signal) {
    int a = 3, b = 7;
    int c = a + b;
    printf(1, "Testing user handler and the sum is: %d & Signal number is: %d \n", c, signal);
}

int main(int argc, char *argv[]) {
    signal(SIGUSR1, handler);
    sigsend(3, SIGUSR1);
    while(1);
    exit();
}
