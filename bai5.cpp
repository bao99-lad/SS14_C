#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 
    int demTu = 1; // 
    int n = strlen(chuoi);

    printf("Chuoi ban dau: %s\n", chuoi);

    for (int i = 0; i < n; i++) {
        if (chuoi[i] == ' ' && chuoi[i-1] != ' ') {
            demTu++;
        }
    }

    printf("So tu trong chuoi: %d\n", demTu);

    return 0;
}
