#include <stdio.h>

int main() {
    FILE *input_fp = fopen("C:\\Users\\Gala\\Desktop\\input.bin", "rb");
    FILE *output_fp = fopen("C:\\Users\\Gala\\Desktop\\output.txt", "wb");

    if (input_fp == NULL || output_fp == NULL) {
        perror("Error opening files");
        return 1;
    }

    while (!feof(input_fp)) {
        int count, bit;
        if (fscanf(input_fp, "%d%d", &count, &bit) != 2) {
            break; // Handle potential read errors
        }

        for (int i = 0; i < count; i++) {
            fputc(bit ? '1' : '0', output_fp);
        }
    }

    fclose(input_fp);
    fclose(output_fp);
    return 0;
}
