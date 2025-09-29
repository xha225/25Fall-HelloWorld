
/*basic Hello world*/
#include <stdio.h>  // Standard I/O library

int main(void) {
    printf("Basic: Hello, World!\n");  // Print message to the console
    return 0;  // Exit program successfully
}


/* Posix Hello world 
#include <unistd.h>   // for write()
#include <string.h>   // for strlen()

int main(void) {
    const char *msg = "Hello, World!\n";
    write(STDOUT_FILENO, msg, strlen(msg));
    return 0;
}
*/


