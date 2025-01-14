//
//  main.cpp
//  while
//
//  Created by Mai Ngoc Diem My on 23/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned char ch = 31;
    while(static_cast<unsigned int>(ch++) != 255) {
        cout<<static_cast<unsigned int>(ch)<<" = "<<ch<<endl;
    }
    
    return 0;
}
