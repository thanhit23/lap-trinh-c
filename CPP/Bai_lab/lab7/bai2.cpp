#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    char user[50];
    char pass[50];
    do {
        printf("Xin hay nhap ten cua ban: ");
        gets(user);
        printf("Xin moi nhap passwork: ");
        gets(pass);

        char userSys[] = "admin";
        char passSys[] = "fpt";

        if (strcmp(user, userSys)==0) {
            if (strcmp(pass, passSys)==0) {
                printf("Chuc mung ban da dang nhap thanh cong\n");
                break;
            } else {
                printf("Ban nhap sai pass!\n");
                printf("Xin moi nhap lai pass: ");
                gets(pass);
                if (strcmp(pass, passSys)==0) {
                    printf("Chuc mung ban da dang nhap thanh cong\n");
                    break;
                }
            }
        } else {
            printf("Ban nhap sai ten dang nhap!\n");
            printf("Xin moi nhap lai!!!\n");
        }
    } while(1);
    return 1;
}
