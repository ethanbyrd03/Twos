// PID: 730481481
// I pledge the COMP 211 honor code.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    if (num < -32767 | num > 32767) {
        printf("%s%s%s\n", "The two's complement 16-bit representation of ", argv[1], " is: not possible.");
        return EXIT_SUCCESS;
    }
    int result[16];
    int i = 0;
    if (num < 0) {
        i = 1;
    }
    num = abs(num);
    int a = 0;
    while(num > 0) {
        result[a] = num % 2;
        num = num / 2;
        a++;
    }
    if (i == 1) {
        for (int y = 15; y >= 0; y--) {
            if (result[y] == 1) {
                result[y] = 0;
            }
            else {result[y] = 1;}   
        }
        int carry = 1;
        int index = 0;    
        while (carry == 1 && index < 16) {
            if (result[index] == 0) {
                result[index] = carry;
                carry--;}
            else {
                result[index] = 0;}
            index++;
        }
    }
    printf("%s%s%s", "The two's complement 16-bit representation of ", argv[1], " is: ");
    for(int z = 15; z >= 0; z--) {printf("%d", result[z]);}
    printf("%s\n", ".");
    return EXIT_SUCCESS;
}







