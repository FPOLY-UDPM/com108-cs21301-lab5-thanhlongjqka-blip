/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>


void hoanVi(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Nhập số a: ");
    scanf("%d", &a);
    printf("Nhập số b: ");
    scanf("%d", &b);
    printf("Trước khi hoán vị: a = %d, b = %d\n", a, b);
    hoanVi(&a, &b);
    printf("Sau khi hoán vị: a = %d, b = %d\n", a, b);


    // //Gọi hàm trong hàm main 
    
    return 0;
}

