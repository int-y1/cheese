// fill the disk with 2^20 byte files
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char s[16];
char noise[1<<20];

int main() {
    memset(noise,'x',sizeof noise);
    noise[(sizeof noise)-1]='\n';
    for (int i=0; 1; i++) {
        sprintf(s,"fill%d",i);
        int x=creat(s,-1);
        if (x==-1) {
            printf("%d %s\n",i,strerror(errno));
            break;
        }
        write(x,noise,sizeof noise);
        close(x);
    }
}
