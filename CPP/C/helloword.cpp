#include <iostream>
using namespace std;

// int main()
// {
//     int min, max;
//     int tong = 0;
//     printf("Nhap gia tri min:");
//     scanf("%d", &min);
//     printf("Nhap gia tri max:");
//     scanf("%d", &max);
//     int so = min;
//     while(so<=max) {
//         if(so%2==0) {
//             tong+=so;
//         }
//         so++;
//     }
//     printf("Tong cac so chia het cho 2 tu %d --> %d la: %d\n", min,max,tong);

//     return 0;
// }    

int main() {
    int array[5][3];// hàng cột
    int i, j;
    for(i=0;i<5;i++) {
        for(j=0;j<3;j++) {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Danh sach mang:\n");
    for(i=0;i<5;i++) {
        for(j=0;j<3;j++) {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }

    int sum[5];
    for (i=0;i<5;i++) {
        sum[i]=0;
        for(j=0;j<3;j++) {
            sum[i]=sum[i]+array[i][j];
        }
        printf("\nTong [%d] = %d\n", i, sum[i]);
    }
}
