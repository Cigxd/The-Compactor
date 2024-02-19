#include <stdio.h>
#include <stdio.h>
#include <windows.h>


int main() {
    int result = rename("C:\\Users\\Gala\\Desktop\\New folder(2)\\HxD.exe", "file.txt");

    if (result == 0) {
        printf("File extension changed successfully!\n");
    } else {
        perror("Error changing file extension"); 
    }

    return 0;
}
