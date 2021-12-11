#include <iostream>
using namespace std;

int main()
{
    int n, i;
    printf("Hay nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for(i=0;i<n;i++) {
        printf("array[%d] ", i);
        scanf("%d", &array[i]);
    }
    cout <<"Danh sach cac phan tu da nhap: ";
    for(i=0;i<n;i++) {
        printf("%d,", array[i]);
    }
    int tong=0;
    for(i=0;i<n;i++) {
        tong+=array[i];   
    }
    printf("\nTrung binh cong cua cac phan tu: %d\n", tong);
    int dem=0;
    tong=0;
    for (i=0;i<n;i++) {
        if(array[i]%3==0) {
            dem++;
            tong+=array[i];
        }
    }
    printf("Trung binh tong cac so chia het cho 3: %d\n", tong);
    
    

    

    return 0;
}  
