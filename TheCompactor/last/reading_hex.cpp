#include <stdio.h>

int main() {
    int counter = 0;
    FILE *fp = fopen("C:\\Users\\Gala\\Desktop\\New folder(2)\\emulator.txt", "r"); // 'r' is fine for hex

    int c;
    while ((c = fgetc(fp)) != EOF) {
        printf("%02X", c); // Print in hexadecimal with leading zero
        counter++;
        if(counter%1 == 0){
            printf(" ");
        }
    }
    fclose(fp);

    return 0;
}
