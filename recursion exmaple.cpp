//
//  main.cpp
//  Recursion
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//

#include <iostream>
using namespace std;
//int fun (int n);
int factorial (int n);
int main(int argc, const char * argv[]) {
    
    cout << "Factorial = " << factorial(4) << endl;;
    return 0;
}// end main

/*int fun (int n) {
    if (n==1) {
        return 1;
    } else {
        return 1 + fun(n-1);
    }
}

int fun (int n) {
    if (n==0) {
        return 0;
    } else {
        return n + fun(n-1);
    }
}*/

int factorial (int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
