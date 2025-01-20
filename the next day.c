//
//  main.c
//  p rac tit thuiii
//
//  Created by Mai Ngoc Diem My on 23/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
        int ngay, thang, nam;
        printf("Nhap ngay, thang, nam: ");
        scanf("%d %d %d", &ngay, &thang, &nam);
        
        int ngayTrongThang;
        switch (thang) {
            case 4:
            case 6:
            case 9:
            case 11:
                ngayTrongThang = 30;
                break;
            case 2:
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                    ngayTrongThang = 29;
                } else {
                    ngayTrongThang = 28;
                }
                break;
            default:
                ngayTrongThang = 31;
                break;
        }
        
        if (ngay < ngayTrongThang) {
            ngay++;
        } else {
            ngay = 1;
            if (thang == 12) {
                thang = 1;
                nam++;
            } else {
                thang++;
            }
        }
        
        printf("Ngay tiep theo la: %d/%d/%d\n", ngay, thang, nam);
    
    return 0;
}
