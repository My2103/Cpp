//
//  main.cpp
//  CCT1(3)
//
//  Created by Mai Ngoc Diem My on 21/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    float kilometer, total = 0;
    
    cout<<"Enter the kilometer: ";
    cin>>kilometer;
    
    if(kilometer <= 2){
        total = kilometer*1;
    } else if (kilometer > 2 && kilometer <= 5) {
        total = 2 + (kilometer - 2)*0.9;
    } else if (kilometer > 5 && kilometer < 100) {
        total = 2 + (3*0.9) + ((kilometer - 5)*0.7);
    } else if (kilometer >= 100) {
        total = (2 + (0.9*3) + ((kilometer - 5)*0.7))*0.9;
    }
    
    cout<<"The total is: "<<total<<"$"<<endl;
    
    
    
    
    return 0;
}
