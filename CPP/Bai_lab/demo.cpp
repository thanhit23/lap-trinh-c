#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;


struct studentf {
    char name[50];
    float point;
}list[100];
void arrstudent() {
    printf("sap xep sinh vien\n");
    int i,j;
    printf("nhap so luong sinh vien");
    scanf("%d", &j);
    for (i=0; i<j; i++) {
        printf("sinh vien thu %d\n", i+1);
        fflush(stdin);
        printf("xin moi nhap ten: ");
        gets(list[i].name);
        printf("xin moi nhap diem: ");
        scanf("%f", &list[i].point);
    }
    for (i=0; i<j; i++) {
        printf("%s co diem %f\n", list[i].name, list[i].point);
    }
}
int main(){
    arrstudent();
    // char password;
    // printf("Moi nhap mat khau: ");
    // scanf("%c", &password);
    // switch (password) {
    //     case 'a':
    //     printf("\nNha khoa hoc\n");
    //         break;
    //     case 'b':
    //     printf("\nNghien cuu sinh\n");
    //         break;   
    //     case 'c':
    //     printf("\nSinh vien\n");
    //         break;
    //     case 'd':
    //     printf("\nBao ve\n");
    //         break;
    //     default:
    //         printf("Co ke xam nhap");
    // }

    // SO NGUYEN TO
    // int i, x;
    // int check = 0;
    // // float x;
    // printf("Xin moi nhap so X :");
    // scanf("%d", &x);
    // if (x==(int)x) {
    //     printf("%.d la so nguyen\n", x);
    // } else {
    //     printf("%.d khong phai la so nguyen\n", x);
    // }
    // if (x>0) {
    //     for(i=2;i<=x;i++) {
    //         if(x%2 == 0) {
    //             check = 1;
    //             break;
    //         }
    //     }
    //     if(check==0) {
    //         printf("%d la so nguyen to\n", x);
    //     } else {
    //         printf("%d khong phai la so nguyen to\n", x);
    //     }
    // }


    // TỔNG TỪ 1 ĐẾN 1000
    // int count = 1;
    // int tong = 0;
    // while(count <= 1000) {
    //     tong = tong + count;
    //     count ++;
    // }
    // printf("Tong= %d", tong);

    // float diem;
    // do{
    // printf("Xin moi nhap diem:");
    // scanf("%d", &diem);
    // } while (diem < 0 || diem >10);
    // printf("Diem thi hop le: %f", diem);


    // printf("Bang cuu chuong tu 1 den 10\n");
    // int i,j;
    // for(i=1;i<10;i++) {
    //     for(j=1;j<10;j++) {
    //         printf("%d x %d = %d", i,j,i*j);
    //     }
    //     printf("\n");
    // }
    
    // các phép toán
    // double x = sqrt(9);
    // printf("%f\n", x);
    // double y = ceil(1.6);
    // printf("%f\n", y);
    // double z = floor(1.6);
    // printf("%f\n", z);


    // time_t seconds;
    // seconds = time(NULL);
    // srand((unsigned) seconds);
    // int soChon;
    // printf("Xin moi nhap mot so tu 1 den 15\n");
    // scanf("%d", &soChon);
    // int soNgauNhien = rand()%15 + 1;

    // printf("So ban chon la: %d\nQuay so: %d", soChon,soNgauNhien);
    // if(soChon == soNgauNhien) {
    //     printf("Chuc mung ban da trung so doc dac ");
    // } else {
    //     printf("Chuc ban may ban may man lan sau");
    // }

    // MẢNG
    // int i, n;
    // cout << "xin moi nhap gia tri cua mang: "; cin >> n;
    // int arr[n];
    // for (i=0;i<n;i++) {
    //     printf("xin moi nhap vao gia tri vao vi tri thu arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Toi muon lay ra vi tri thu hai trong bang: %d\n", arr[1]);

    //SẮP XẾP THỨ TỰ
        // int i, j, n;
        // cout << "Xin moi nhap gia tri n: "; cin >> n;
        // int array[n];
        // for (i=0;i<n;i++) {
        //     cout << "Xin moi nhap vi tri thu array["<< i << "] = ";
        //     cin >> array[i];
        // }
        // for (i=0;i<n-1;i++) {
        //     for (j=i+1;j<n;j++) {
        //         if (array[j]>array[i]) {
        //             int temp;
        //             temp = array[j];
        //             array[j] = array[i];
        //             array[i] = temp;
        //         }
        //     }
        // }
        // for (i=0;i<n;i++) {
        //     printf("Vi tri thu array[%d] la: %d\n", i, array[i]);
        // }

        //Mảng 2 chiều
        // int i, j, n, m;
        // cout << "Xin moi nhap vao so hang: "; cin >> n;
        // cout << "Xin moi nhap vao so cot: "; cin >> m;
        // int arr[n][m];
        // for (i=0;i<n;i++) {
        //     for (j=0;j<m;j++) {
        //         printf("xin moi nhap vao mang vi tri thu arr[%d][%d]", i, j);
        //         scanf("%d", &arr[i][j]);
        //     }
        // }
        // for (i=0;i<n;i++) {
        //     for (j=0;j<m;j++) {
        //         printf("%d\t", arr[i][j]);
        //     }
        //     printf("\n");
        // }
    // End

    

    //-----STRING-----//
    
        // strcpy(b,a) cho phép copy từ a sang b
        // strcat(a,b) cho phép nối hai chuỗi a và b
        // strrev(a) đảo ngược 
        // strlwr(a) đưa về chứ thường
        // strupr(a) in hoa chữ

        // char s[] = "Nguyen Duy Thanh";
        // char *sub;
        // sub = strstr(s, "Duy");
        // printf("%s\n", sub);

        // char a[50];
        // char b[] = " vip";
        // char c[50];
        // START: printf("Xin moi nhap ten game cua ban: ");
        // gets(a);
        // if (strlen(a) > 10) {
        //     printf("ten khong duoc dai hon 10 ky tu! \n");
        //     printf("Xin moi nhap lai \n");
        //     goto START;
        // }
        // strcpy(c,a);
        // printf("ten game cua ban la: %s\n", a);
        // printf("ten nhan vat trong game la: %s\n", strcat(c,b));
    


    

    return 0;
}

    // int max(int a, int b, int c) {
    //     if(a>b && a>c) return a;
    //     if(b>a && b>c) return b;
    //     if(c>a && c>b) return c;
    // }

    // int main() {
    //     int a, b, c;
    //     printf("a="); scanf("%d",&a);
    //     printf("b="); scanf("%d",&b);
    //     printf("c="); scanf("%d",&c);
    //     printf("Max=%d\n", max(a, b, c));
    //     return 0;
    // }