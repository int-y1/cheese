// try to reboot
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/reboot.h>
#include <unistd.h>

int main() {
    reboot(RB_HALT_SYSTEM);
    printf("%s\n",strerror(errno));
}
