#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    char s[50];
    printf("xin moi nhap 1 chuoi ky tu: ");
    gets(s);
    puts("Chuoi da nhap: ");
    puts(s);

    int i = 0; 
    int j = 0; 
    for (int k = 0; k < strlen(s); k++) {  
        switch (s[k]) {
            case 'u':
            case 'e':
            case 'o':
            case 'a':
            case 'i': i++; break;
            case ' ': break;
            default: j++;
        }
    }
    printf("So luong nguyen am: %d\n", i);
    printf("So luong phu am: %d\n", j);
    
    return 0;
}