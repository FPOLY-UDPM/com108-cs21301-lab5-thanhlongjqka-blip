/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>


// Hàm tìm giá trị lớn nhất trong 3 số
int max3(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int x, y, z;
    int maxValue;

    // Nhập 3 số
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &x, &y, &z);

    // Gọi hàm tìm số lớn nhất
    maxValue = max3(x, y, z);

    // Xuất kết quả
    printf("So lon nhat trong 3 so la: %d\n", maxValue);

    return 0;
}
