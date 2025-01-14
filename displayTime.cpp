//
//  main.cpp
//  chill
//
//  Created by Mai Ngoc Diem My on 12/05/2024.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int seconds;
    
    cout<<"Input the number of seconds here: ";
    cin>>seconds;
    
    int hour = seconds / 3600;
    int minute = (seconds - (hour * 3600)) / 60;
    int remainder_second = seconds % 60;
    
    cout<<"The hour: "<<hour<<endl;
    cout<<"The minute: "<<minute<<endl;
    cout<<"The remainder_second: "<<remainder_second <<endl;
    
    
    return 0;
}
