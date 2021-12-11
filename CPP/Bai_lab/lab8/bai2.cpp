#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



struct student {
    float pointTb;
    char nameStudent[50];
    char codeStudent[50];
    char specialized[50];
};
int main() {
    struct student st[50];
    int i, j;
    char s[50];
    int number;
    printf("Xin moi nhap so luong sinh vien: ");
    scanf("%d", &number);
    for (i = 0; i < number; i++) {
        printf("\nHay nhap thong tin sinh vien %d\n", i+1);
        printf(" "); gets(s);
        printf("Hay nhap ten sinh vien: "); gets(st[i].nameStudent);
        printf(" Hay nhap ma sinh vien: "); gets(st[i].codeStudent);
        printf(" Hay nhap ten chuyen nganh sinh vien: "); gets(st[i].specialized);
        printf(" Hay nhap diem trung binh sinh vien: "); scanf("%f", &st[i].pointTb);
    }
    for (i = 0; i < number-1; i++) {
        for(j=i+1;j<number;j++) {
                struct student svTemp;
            if(st[i].pointTb > st[j].pointTb){
                svTemp = st[i];
                st[i] = st[j];
                st[j] = svTemp;
            }
        }
    }
    printf("\n-----Danh sach sinh vien-----\n");
    for (i = 0; i < number; i++) {
        printf("\nTen cua sinh vien: %s\n", st[i].nameStudent);
        printf("Ma cua sinh vien: %s\n", st[i].codeStudent);
        printf("Chuyen nganh cua sinh vien: %s\n", st[i].specialized);
        printf("Diem trung binh cua sinh vien: %.1f\n", st[i].pointTb);
    }
    return 0;
}