//các thu viện
// #include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

// khai báo hàm
void KTS();
void USCBSC();
void TTGKARAOKE();
void tinhTienDien();
void doiTien();
void laiNganHang();
void vayMuaXe();
void sapXepThongTin();
void gameFpt();
void phanSo();



int main() {
    int option;
    do {
        printf("******************************************************\n");
        printf(">> Chao mung den voi Assignment cua mon Lap Trinh C <<\n");
        printf("| 1. Kiem tra so                                     |\n");
        printf("| 2. Tim uoc chung, boi chung                        |\n");
        printf("| 3. Chuong trinh tinh tien gio Karaoke              |\n");
        printf("| 4. Tinh tien dien                                  |\n");
        printf("| 5. Chuc nang doi tien                              |\n");
        printf("| 6. Vay lai suat ngan hang                          |\n");
        printf("| 7. Vay mua xe                                      |\n");
        printf("| 8. Sap xep thong tin sinh vien                     |\n");
        printf("| 9. Game FPT-lott                                   |\n");
        printf("| 10. Lam viec voi phan so                           |\n");
        printf("| 0. Thoat khoi chuong trinh                         |\n");
        printf("------------->> XIN MOI NHAP CHUONG TRINH <<----------\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Chao mung den voi chuc nang kiem tra so\n");
                KTS();
                break;
            case 2:
                printf("Chao mung den voi chuc nang tim uoc chung, boi chung\n");
                USCBSC();
                break;
            case 3:
                printf("Chao mung den voi chuc nang tinh tien gio Karaoke\n");
                TTGKARAOKE();
                break;
            case 4:
                printf("Chao mung den voi chuc nang tinh tien dien\n");
                tinhTienDien();
                break;
            case 5:
                printf("Chao mung den voi chuc nang doi tien\n");
                doiTien();
                break;
            case 6:
                printf("Chao mung den voi chuc nang vay lai suat ngan hang\n");
                laiNganHang();
                break;
            case 7:
                printf("Chao mung den voi chuc nang vay mua xe\n");
                vayMuaXe();
                break;
            case 8:
                printf("Chao mung den voi chuc nang sap xep thong tin sinh vien\n");
                sapXepThongTin();
                break;
            case 9:
                printf("Chao mung den voi chuc nang Game FPT-lott\n");
                gameFpt();
                break;
            case 10:
                printf("Chao mung den voi chuc nang lam viec voi phan so\n");
                phanSo();
                break;
            case 0:
                printf("Good bye!, See you latter.\n");
                return 0;
            default: 
                printf("Vui long chon cac chuc nang tren\n");
                printf("Xin moi chon lai trong cac chuc nang duoi day \n");
        }
    } while ((option > 0) || (option < 10));

    return 0;
}


// 1 Kiểm tra số
    void KTS() {
        char check0;
        do {
            int i, x;
            bool check = true;
            printf("Xin moi nhap so X : "); scanf("%d", &x);
            if (x == (int)x) {
                printf("%d la so nguyen\n", x);
            } else {
                printf("%d khong phai la so nguyen\n", x);
            }

            if (x > 0) {
                for (i = 2; i < x; i++) {
                    if (x % i == 0) {
                        printf("----%d\n", i);
                        check = false;
                        break;
                    }
                }

                if (check) {
                    printf("%d la so nguyen to\n", x);
                } else {
                    printf("%d khong phai la so nguyen to\n", x);
                }
            }

            int sqr = sqrt(x);

            if (sqr*sqr == x) {
                printf("%d la so chinh phuong\n", x);
            } else {
                printf("%d khong phai la so chinh phuong!\n", x);
            }

        printf("Ban co muon tiep tuc chua nang khac khong ( Y/N )\n");
        scanf("%s", &check0);
        if (check0 == 'y') {
            break;
        } 
        } while (check0 == 'n');
    }
//End

//2 Tìm ước chung, boi chung
    int USCLN(int a, int b) {
            if(b==0) {
                return a;
            } else {
                return USCLN(b, a%b);
            }
    }
    int BSCNN(int a, int b) {
    return (a * b)/USCLN(a, b);
    }
    void USCBSC() {
        char check0;
        do {
            int a, b;
            printf("Nhap a: "); scanf("%d", &a);
            printf("Nhap b: "); scanf("%d", &b);
            printf("Uoc so chung lon nhat cua %d va %d la : %d\n", a, b, USCLN(a, b));
            printf("Boi so chung nho nhat cua %d va %d la : %d\n", a, b, BSCNN(a, b));
            printf("Ban co muon tiep tuc chuc nang khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//3. chuong trinh tinh tien gio KARAOKE
    int tinhtien(int start, int end) {
        int time = end - start;
        int money = 0;
        const int PRICE_PER_HOUR = 150000;

        if (time > 3) {

            money = 3 * 150000 + (time -3) * PRICE_PER_HOUR * 0.7;
        } else {
            money = time * PRICE_PER_HOUR;
        }

        if (start >= 14 && start <= 17) {
            money = money * 0.9;
        }

        return money;    
    }

    void TTGKARAOKE()   {
        char check0;
        do {
            int start, end;
            // int salegol, sale;
            bool yes = true;
            printf("Bat dau vao luc: "); scanf("%d", &start);
            printf("Ket thuc vao luc: "); scanf("%d", &end);
            while(yes == true) {
                if((start < 12) || (start > 23) || (end < 12) || (end > 23)) {
                    printf("Quan chi hoat dong trong khoang thoi gian tu 12 gio den 23 gio vui long nhap lai !\n");
                    printf("Bat dau vao luc: %d", start);
                    printf("Ket thuc vao luc: %d", end);
                } else if((start >= 12) && (start <= 23) && (end >= 12) && (end <= 23)) {
                    break;
                }
            }

            int money = tinhtien(start, end);

            printf("So tien ban phai tra : %dVND\n", money);
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//4. Tính tiền điện
    void tinhTienDien() {
        char check0;
        do {
            int kw;
            long tienTra;
            printf("Nhap so chu dien xai trong thang: ");
            scanf("%d", &kw);

            if (kw <= 50) {
                tienTra = kw*1678;
            } else if (kw <= 100) {
                tienTra = (kw - 50) * 1734 + 50 * 1678;
            }
            printf("Tien phai tra: %d\n", tienTra);
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//5. Chức năng đổi tiền

    int moneyChange1(long int money) {
        int soTo = 0;
        int array[10] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
        for (int i = 0; i < 9; i++) {

            if (money < array[i]) {
                continue;
            }
            soTo = money / array[i];
            printf("%d to %d\n", soTo, array[i]);
            money = money % array[i];
        }
    }


    int moneyChange(long int money) {
        if(money == 500000) {
            printf("%d to 200.000 \n", (money / 200000));
            money = money % 200000;
            printf("%d to 100.000 \n", (money / 100000));
            money = money % 100000;
        } else if(money == 400000) {
            printf("%d to 200.000 \n", (money / 200000));
            money = money % 200000;
        } else if(money == 300000) {
            printf("%d to 200.000 \n", (money / 200000));
            money = money % 200000;
            printf("%d to 100.000 \n", (money / 100000));
            money = money % 100000;
        } else if(money == 200000) {
            printf("%d to 100.000 \n", (money / 100000));
            money = money % 100000;
        } else if(money == 100000) {
            printf("%d to 50.000 \n", (money / 50000));
            money = money % 50000;
        } else if(money == 50000) {
            printf("%d to 20.000 \n", (money / 20000));
            money = money % 20000;
            printf("%d to 10.000 \n", (money / 10000));
            money = money % 10000;
        } else if (money > 500000) {
            printf("%d to 500.000 \n", (money / 500000));
            money = money % 500000;
            printf("%d to 200.000 \n", (money / 200000));
            money = money % 200000;
            printf("%d to 100.000 \n", (money / 100000));
            money = money % 100000;
            printf("%d to 50.000 \n", (money / 50000));
            money = money % 50000;
            printf("%d to 20.000 \n", (money / 20000));
            money = money % 20000;
            printf("%d to 10.000 \n", (money / 10000));
            money = money % 10000;
            printf("%d to 5.000 \n", (money / 5000));
            money = money % 5000;
            printf("%d to 2.000 \n", (money / 2000));
            money = money % 2000;
            printf("%d to 1.000 \n", (money / 1000));
            money = money % 1000;
        }
    }

    void doiTien() {
        char check0;
        do {
            long int money;
            bool yes = true;
            printf("Xin moi nhap so tien can doi: "); scanf("%ld", &money);
            
            moneyChange1(money);
            
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//6. Vay lãi ngân hàng
    void laiNganHang() {
        char check0;
        do {
            printf("Lai xuat vay ngan hang co dinh 5 phan tram moi thang\n");
            printf("Vay 12 thang\n");
            long int tienvay;
            long int tienGocHagThag;
            long lai;
            int i;
            fflush(stdin);
            printf("Nhap so tien can vay: ");
            scanf("%ld", &tienvay);
            tienGocHagThag = tienvay/12;
            printf("\n| Ki han \t Lai phai tra \t Goc phai tra \t Tong tien \t Tien goc con lai |"); 
            printf("\n");
            for (i = 1; i <= 12; i++) { 
                printf("|  %d\t ", i);
                lai = (tienGocHagThag * 5)/100; //5% mỗi tháng
                printf("\t  %ldVND  \t", lai);
                printf("   %ldVND  \t", tienGocHagThag);
                printf("%ldVND \t ", (tienGocHagThag + lai));
                tienvay = tienvay - tienGocHagThag;
                printf("%ldVND \t   \n", tienvay);
                printf("----------------------------------------------------------------------------------\n");
            }
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }    
//End

//7. Vay mua xe
    void vayMuaXe() {
        char check0;
        do {
            float ptVay;
            long int soTienTraLan1, tienVay, tienGocTraHagThag;
            long lai;
            printf("Nhap pham tram vay toi da: ");
            scanf("%f", &ptVay);
            soTienTraLan1 = 500000000 * ((100 - ptVay) / 100);
            tienVay = 500000000 - soTienTraLan1;
            tienGocTraHagThag = tienVay / (12*24);
            printf("Ban chi vay toi da chi duoc vay 500 trieu");
            printf(", So tien ban phai tra lan dau la: %ld.", soTienTraLan1);
            int i;
            printf("\n Ki han \t Lai phai tra \t Goc phai tra \t Tong tien \t Tien goc con lai "); 
            printf("\n");
            for (i = 1; i <= (12*24); i++) {
                printf("  %d\t ", i);
                lai = tienVay * (7.2/100); //% mỗi tháng
                printf("\t  %ldVND \t ", lai);
                printf(" %ldVND\t  ", tienGocTraHagThag);
                printf("%ldVND \t ", (tienGocTraHagThag + lai));
                tienVay = tienVay - tienGocTraHagThag;
                printf("%ldVND \t \n", tienVay);
                printf("\n");
            }
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//8. Sắp xếp thông tin sinh viên
    struct student {
    float pointTb;
    char nameStudent[50];
    char codeStudent[50];
    char specialized[50];
    };  

    void sapXepThongTin() {
        char check0;
        do {
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
                for(j = i+1;j < number; j++) {
                        struct student svTemp;
                    if(st[i].pointTb < st[j].pointTb){
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
                if (st[i].pointTb >= 9) {
                    printf("Hoc luc suat sac \n");
                } else if (st[i].pointTb >= 8) {
                    printf("Hoc luc gioi \n");
                } else if (st[i].pointTb >= 6.5) {
                    printf("Hoc luc kha \n");
                } else if (st[i].pointTb >= 5.0) {
                    printf("Hoc luc trung binh \n");
                } else {
                    printf("Hoc luc yeu \n");
                }
            }
            // char x[9];
            // printf("Xin moi nhap ma sinh vien can tim: ");
            // scanf("%s", x);
            // for (int i = 0; i < number; i++) {
            //     if (strcmp(st[i].codeStudent, x) ==0) {
            //         printf("Da tim thay sinh vien vi tri thu %d", i);
            //         printf("\nTen cua sinh vien: %s\n", st[i].nameStudent);
            //         printf("Ma cua sinh vien: %s\n", st[i].codeStudent);
            //         printf("Chuyen nganh cua sinh vien: %s\n", st[i].specialized);
            //         printf("Diem trung binh cua sinh vien: %.1f\n", st[i].pointTb);
            //         break;
            //     }
            //     if (i = 3) {
            //         printf("Khong tim thay sinh vien\n");
            //     }
            // }
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//9. Game FPT-Lott
    void gameFpt() {
        char check0;
        do {
            int loto1, loto2;
            int random1, random2;
            printf("Xin moi nhap 2 so de bat dau quay so may man \n");
            printf("LUU Y: He Thong Sinh So Ngau Nhien Tu 01 - 15\n");
            do {
                printf("Xin moi nhap so thu nhat: ");
                scanf("%d", &loto1);
            } while(loto1 < 1 || loto1 > 15);
            do {
                printf("Xin moi nhap so thu hai: ");
                scanf("%d", &loto2);
            } while (loto2 < 1 || loto2 > 15);
            random1 = 1 + rand() % (15 + 1 - 1); //Sinh ra một số ngẫu nhiên từ 1 đến 15
            random2 = 1 + rand() % (15 + 1 - 1); //Sinh ra một số ngẫu nhiên từ 1 đến 15

            if (((loto1 == random1) || (loto1 == random2)) && ((loto2 == random1) && (loto2 == random2))) {
                printf("Chuc mung ban trung gia nhat \n");
            } else if(loto1 == random1 || loto1 == random2 || loto2 == random1 || loto2 == random2) {
                printf("Chuc mung ban trung gia nhi \n");
            } else {
                printf("Chuc ban may man lan sau \n");
            }
            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');
    }
//End

//10. Làm việc với phân số
    struct phanSo {
        float mauSo, tuSo;
    };

    int UCLN(int a, int b) {
        a = abs(a);
        b = abs(b);
        while (a * b != 0) {
            if (a > b) {
                a %= b;
            } else {
                b %= a;
            }
            return a + b;
        } 
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

    struct phanSo rutGon(struct phanSo a) {
        struct phanSo c;
        c.tuSo = a.tuSo / UCLN(a.tuSo, a.mauSo);
        c.mauSo = a.mauSo / UCLN(a.tuSo, a.mauSo);
        return c;
    }
    struct phanSo cong(struct phanSo a, struct phanSo b) {
        struct phanSo c;
        c.tuSo = a.mauSo * b.tuSo + a.tuSo * b.mauSo;
        c.mauSo = a.mauSo * b.mauSo;
        c = rutGon(c);
        return c;
    }
    struct phanSo tru(struct phanSo a, struct phanSo b) {
        struct phanSo c;
        c.tuSo = a.mauSo * b.tuSo - a.tuSo * b.mauSo;
        c.mauSo = a.mauSo * b.mauSo;
        c = rutGon(c);
        return c;
    }
    void phanSo() {
        char check0;
        do {
            struct phanSo ps1, ps2;
            struct phanSo tong, hieu;
            printf("Nhap phan so thu 1: \n");
            printf("Tu so: "); scanf("%f", &ps1.tuSo);
            printf("Mau so: "); scanf("%f", &ps1.mauSo);
            printf("Nhap phan so thu 2: \n");
            printf("Tu so: "); scanf("%f", &ps2.tuSo);
            printf("Mau so: "); scanf("%f", &ps2.mauSo);
            // Xử lý
            tong = cong(ps1, ps2);
            hieu = tru(ps1, ps2);

            printf("Tong hai phan so = %.1f / %.1f \n", tong.tuSo, tong.mauSo); 
            printf("Hieu hai phan so = %.1f / %.1f \n", hieu.tuSo, hieu.mauSo); 


            printf("Ban co muon tiep tuc chuc nang khac khong ( Y/N )\n");
            scanf("%s", &check0);
            if (check0 == 'y') {
                break;
            } 
        } while (check0 == 'n');            
    }
//End

