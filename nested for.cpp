//
//  main.cpp
//  hello
//
//  Created by Mai Ngoc Diem My on 21/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int row, col;
    
    for (row = 1; row<= 3; row++) //outer
        for (col = 1; col <= 3; col++) //inner
            cout<<row * col <<endl;
    return 0;
}
