//
//  main.cpp
//  break1
//
//  Created by Mai Ngoc Diem My on 28/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i, number, sum = 0;
    
    for (i=0; i<=5; i++){
        cout<<"Input number"<<i<<" = ";
        cin>>number;
        
        //If the user input negative number, break the loop
        if(number<0){
            continue;
        }
        sum = sum + number;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}

