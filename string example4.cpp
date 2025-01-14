//
//  main.cpp
//  string3
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Enter your text: ";
    string strText;
    getline(cin, strText, '_');//được nhập trên nhiều dòng khác nhau cho đến khi thấy ký tự quy ước
    
    cout<<"Your text: "<<endl;
    cout<<strText<<endl;
    
    return 0;
}
