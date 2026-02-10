#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    // Create child process
    pid = fork();

    if (pid < 0) {
        // Error
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        printf("Child: Running paint program...\n");

        // Run gedit (replace with xpaint if needed)
        execlp("gedit", "gedit", NULL);

        // If exec fails
        perror("exec failed");
        exit(1);
    }
    else {
        // Parent process
        printf("Parent: Waiting for child...\n");

        wait(NULL);

        printf("Parent: Child finished.\n");
    }

    return 0;
}
