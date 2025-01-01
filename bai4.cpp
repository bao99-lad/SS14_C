#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Anh Ba Bao";
    char kyTu;
    int dem = 0;
    int n = strlen(chuoi);

    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &kyTu);

    for (int i = 0; i < n; i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}
