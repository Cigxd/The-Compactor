#include <stdio.h>

int main() {
    FILE *fp = fopen("C:\\Users\\Gala\\Desktop\\New folder(2)\\emulator.txt", "r"); // 'rb' for reading in binary mode

    int c;
    while ((c = fgetc(fp)) != EOF) {
        // Print the binary representation of each character
        for (int i = 7; i >= 0; --i) {
            printf("%d", (c >> i) & 1);
        }
    }

    printf("\n"); // Add a newline at the end
    fclose(fp);
    
    return 0;
}
