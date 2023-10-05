// PID: 730481481
// I pledge the COMP 211 honor code.
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int num[32];
    char *yea = argv[1];
    for (int i = 0; i<32; i++) {
        if (*yea == 48) {
            num[i] = 0;}
        if (*yea == 49) {
            num[i] = 1;}
        yea++;}
    for (int y = 0; y < 32; y++) {
        if (num[y] == 0) {
            num[y] = 1;
                }
        else {num[y] = 0;}
            }
        int carry = 1;
        int index = 31;
        while (carry == 1 && index >= 0) {
            if (num[index] == 0) {
                num[index] = carry;
                carry--;}
            else {
                num[index] = 0;}
            index--;
            }
    printf("%s%s%s", "The negation of the 32-bit two's complement integer ", argv[1], " is: ");
    for (int q = 0; q<32; q++) {printf("%d", num[q]);}
    printf("%s\n", ".");
    return EXIT_SUCCESS;
}
