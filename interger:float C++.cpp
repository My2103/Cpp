//
//  main.cpp
//  on c++
//
//  Created by Mai Ngoc Diem My on 09/05/2024.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    float b;
    
    cout << "int a= ";
    cin >> a;
    
    cout << "float b= ";
    cin >> b;
    
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    
    cout << "b= " << fixed << setprecision(2) << b << endl;
    
    return 0;
}
