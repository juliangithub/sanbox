#include <unistd.h>

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sig_usr(int sig)
{
    printf("%s\n", strsignal(sig));
}

int main(int argc, char *argv[])
{
    signal(SIGUSR1, sig_usr);
    signal(SIGUSR2, sig_usr);

    if (fork() > 0) {
        while (wait(NULL) < 0)
            ;
    } else {
        sleep(2);
        kill(getppid(), SIGUSR1);
        sleep(2);
        kill(getppid(), SIGUSR2);
        exit(0);
    }

    return 0;
}