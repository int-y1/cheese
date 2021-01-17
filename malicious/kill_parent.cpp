// try to kill the parent
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    if (kill(getppid(),SIGKILL) == -1) perror("parent");
    if (kill(-1,SIGKILL) == -1) perror("-1");
    kill(0,SIGXCPU);
}
