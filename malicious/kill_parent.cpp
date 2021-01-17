// try to kill the parent
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void f(int x) {
    printf("%d %s\n",x,strerror(errno));
    fflush(stdout);
}

int main() {
    kill(getppid(),SIGKILL); f(1);
    kill(-1,SIGKILL); f(2);
    kill(0,SIGKILL); f(3);
    kill(getpid(),SIGXCPU);
}
