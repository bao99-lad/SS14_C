#include <stdio.h>
#include <string.h>

int main(){
    char c[1000];
    printf("nhap vao chuoi: ");
    gets(c);
    printf("chuoi da duoc nhap: %s", c);
    printf(": %d", strlen(c));
}
