#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[] = "Tran Quoc Bao"; 
    int demChuCai = 0;
    int n = strlen(chuoi);

    printf("Chuoi ban dau: %s\n", chuoi);

    for (int i = 0; i < n; i++) {
        if (isalpha(chuoi[i])) {
            demChuCai++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", demChuCai);

    return 0;
}
