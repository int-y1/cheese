// try to reboot
#include <stdio.h>
#include <sys/reboot.h>
#include <unistd.h>

int main() {
    if (reboot(RB_HALT_SYSTEM) == -1) perror("reboot");
}
