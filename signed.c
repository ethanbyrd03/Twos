// PID: 730481481
// I pledge the COMP 211 honor code.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    if (num < -32768 | num > 32767) {
        printf("%s%s%s\n", "The signed 16-bit representation of ", argv[1], " is: not possible.");
        return EXIT_SUCCESS;}
    int result[16];
    if (argv[1][0] == 45) {result[15] = 1;}
    num = abs(num);
    int a = 0;
    while (num > 0) {
        result[a] = num % 2;
        num = num / 2;
        a++;}
    printf("%s%s%s", "The signed 16-bit representation of ", argv[1], " is: ");
    for (int i = 15; i >= 0; i--) {printf("%d", result[i]);}
    printf("%s\n", ".");        
    return EXIT_SUCCESS;
}
