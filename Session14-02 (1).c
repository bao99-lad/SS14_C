#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Tran Quoc Bao"; // Khai b�o v� g�n gi� tr? cho chu?i
    int i;
    int n = strlen(chuoi); // T�nh d? d�i c?a chu?i

    printf("Chuoi ban dau: %s\n", chuoi);

    printf("In tung ky tu:\n");
    for (i = 0; i < n; i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}
