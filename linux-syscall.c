#include <unistd.h>
int main() {
    const char *message1 = "Hello, System Call!\n";
    const char *message2 = "write By Jim Seanghai in OS week2 theory.\n";
    write(1, message1, 19); // File descriptor 1 is stdout
    write(1, message2, 40);
    return 0;
}
