#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    while (fork() != -1) printf("f\n");
    printf("%s\n",strerror(errno));
}
