//
//  main.cpp
//  queue
//
//  Created by Mai Ngoc Diem My on 9/1/25.
//

#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
    queue<string> languages;
    languages.push("C++ ");
    languages.push("Java ");
    languages.push("Python ");
    
    cout << "Queue: ";
    
    while(!languages.empty()) {
        cout << languages.front();
        languages.pop();
    }
    
    cout << endl;
    
    cout << "New queue: " << endl;// This is empty
    return 0;
}
