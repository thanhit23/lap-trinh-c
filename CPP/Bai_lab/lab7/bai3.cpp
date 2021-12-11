#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    char s[5][20];
    char t[20];
    int i, j;

        printf("Xin moi nhap chuoi : ");
    for (i = 0; i < 5; i++) {
        gets(s[i]);
    }
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (strcmp(s[j-1],s[j]) > 0) {
                // hoán vị
                strcpy(t, s[j-1]);
                strcpy(s[j-1], s[j]);
                strcpy(s[j], t);
            }
        }
    }
        printf("Cac chuoi da sap xep: \n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
    return 0;
}