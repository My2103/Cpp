//
//  main.cpp
//  chill2
//
//  Created by Mai Ngoc Diem My on 12/05/2024.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int number, sum = 0;
    string sum_string = "";
    
    cout<<"Enter a positive interger: ";
    cin>>number;
    
    for(int i = 1; i <= number; i++){
        sum += i;
        if (i == number) {
                    sum_string += to_string(i);
                } else {
                    sum_string += to_string(i) + "+";
                }
    }
    
    cout << "Sum = " << sum_string << " = " << sum << endl;
        
    return 0;
}
