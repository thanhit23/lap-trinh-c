#include<stdio.h>
#include <string.h>
// #include <iostream>
using namespace std;

 
// void change(int num) {
//     num = num + 1;
// }
// int change(int num) {
//          return num +1;
//  }
//  void change(int *num, int x) {
//     *num = *num + 9999;
//     x = x + 1;
// }

// int main1() {
//     int number = 50; // dia chi 28fff va gia tri 50
//     int *p;
//     p = &number; // luu tru dia chi cua bien number
//     printf("Dia cua con tro p la %d\n", *p);
//     printf("Dia chi cua con tro p la %x", p);
//     return 0;
// }
 
// int main() {
//     int a = 10, b = 20;
//     int *p1 = &a,*p2 = &b;  
//     printf("Truoc khi hoan doi: *p1=%d *p2=%d\n", *p1, *p2);
//     // hoan doi
//     *p1 = *p1 + *p2;
//     *p2 = *p1 - *p2;
//     *p1 = *p1 - *p2;
//     printf("Sau khi hoan doi: *p1=%d *p2=%d\n", *p1, *p2);
//     return 0;
// }

int main() {
    // int i = 0;
    // int diem[3] = {9, 5, 7};

    // char ten[3][50] = {"a", "b", "c"};
    // while (i < 3) {
    //     printf("so diem cua %s la: %d\n", ten[i], diem[i]);
    //     i++;
    // }


    // Search string in string
        // char s1[] = "hoc cung Douyin, hoc React, hoc cung Java";
        // char s2[20];
        
        // printf("xin moi nhap chu can tim: ");
        // gets(s2);
        // int n = 0;
        // int m = 0;
        // int time = 0;

        // int length = strlen(s2);
        // while (s1[n] != '\0') {
        //     if (s1[n] == s2[m]) {
        //         while (s1[n] != '\0' && s1[n] == s2[m]) {
        //             n++;
        //             m++;
        //         }
        //         if (m == length && (s1[n] == ' ' || s1[n] == '\0')) {
        //             time ++;
        //         }
        //     } else {
        //         while (s1[n] == '\0') {
        //             n++;
        //             if (s1[n] == '\0')
        //             break;
        //         }
        //     }
        //     n++;
        //     m = 0;
        // }
        // if(time > 0) {
        //     printf("chuoi %s xuat hien %d lan\n", s2,time);
        // } else {
        //     printf("chuoi %s khong xuat hien trong cau\n", s2);
        // }
    //End
        char s1[100];
        char s2[20];
        
        printf("Chuoi ban dau: ");
        gets(s1);
        printf("xin moi nhap chu can tim: ");
        gets(s2);
        int n = 0;
        int m = 0;
        int time = 0;

        int length = strlen(s2);
        while (s1[n] != '\0') {
            if (s1[n] == s2[m]) {
                while (s1[n] != '\0' && s1[n] == s2[m]) {
                    n++;
                    m++;
                }
                // printf("chuoi xuat hien o vi tri thu: %d\n", n);
                if (m == length && (s1[n] == ' ' || s1[n] == '\0')) {
                    time ++;
                }
            } else {
                while (s1[n] == '\0') {
                    n++;
                    if (s1[n] == '\0')
                    break;
                }
            }
            n++;
            m = 0;
        }
        if(time > 0) {
            printf("chuoi %s xuat hien %d lan\n", s2,time);
        } else {
            printf("chuoi %s khong xuat hien trong cau\n", s2);
        }
    

    // Chia một mạng thành hai mảng
        // int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        // int one[20], two[20];
        // int len = sizeof array / sizeof array[0];
        // int i, j, k;
        // j = k = 0;
        // for (i=0;i<len;i++) {
        //     if (array[i] % 2 == 0) {
        //         one[j] = array[i];
        //         j++;
        //     } else {
        //         two[k] = array[i];
        //         k++;
        //     }
        // }
        // printf("Chia mot mang thanh 2 mang chan va le\n");
        // printf("Mang ban dau: ");
        // for (i=0;i<len;i++) {
        //     printf("%d  ", array[i]);
        // }
        // printf("\nMang chan: ");
        // for (i=0;i<j;i++) {
        //     printf("%d  ", one[i]);
        // }
        // printf("\nMang le: ");
        // for (i=0;i<k;i++) {
        //     printf("%d  ", two[i]);
        // }
        // printf("\n");
    // End



    // while (i<n) {
    //     printf("Hay nhap ten hoc sinh: ");
    //     gets(subjects);
    //     i++;
    // }
    // int array[n];
    // for (j=0;j<m;j++) {
    //     printf("Hay nhap diem: ");
    //     scanf("%d", array[j]);
    // }

    // printf("diem cua %s la: %d", subjects, array[j]);
    
    return 0;
}





