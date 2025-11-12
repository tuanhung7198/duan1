#include <stdio.h>

int main(){
    float ChieuDai, ChieuRong;
    float ChuVi, DienTich;
    int LuaChon;
    printf("Tinh dien tich chu vi hinh chu nhat\n");

    printf("Nhap chieu dai: ");
    scanf("%f", &ChieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &ChieuRong);
    
    printf("Nhan phim 1 de tinh chu vi, phim 2 de tinh dien tich\n");

    printf("Nhap lua chon: ");
    scanf("%d", &LuaChon);

    ChuVi = (ChieuDai + ChieuRong)*2;
    DienTich = ChieuDai * ChieuRong;

    if (LuaChon == 1){
        printf("Chu vi hinh chu nhat:(%f.1 + %f.1)*2 =%f.1\n", ChieuDai, ChieuRong, ChuVi);
    }

    else if(LuaChon ==2){
        printf("Dien tich hinh chu nhat:%f.1 * %f.1 =%f.1\n", ChieuDai, ChieuRong, DienTich);
    }

    else {
        printf("Khong hop le");
    }


    return 0;

}








