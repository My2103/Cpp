//
//  main.cpp
//  final
//
//  Created by Mai Ngoc Diem My on 19/06/2024.
//

#include <iostream>
using namespace std;
struct fraction {
    int num;
    int den;
};
void inputFraction (fraction &a);
void outputFraction (fraction a);
fraction addFraction (fraction a, fraction b);
fraction subtractFraction (fraction a, fraction b);
fraction multipleFraction (fraction a, fraction b);
fraction divisionFraction (fraction a, fraction b);
int main(int argc, const char * argv[]) {
    fraction a, b;
    
    //Input fraction
    cout<<"Enter the value for fraction a "<<endl;
    inputFraction(a);
    cout<<endl;
    
    cout<<"Enter the value for fraction b "<<endl;
    inputFraction(b);
    cout<<endl;
    
    //Output the fraaction
    cout<<"Fraction a: ";
    outputFraction(a);
    
    cout<<"Fraction b: ";
    outputFraction(b);
    
    //Output the sum of two fraction
    cout<<"The sum of two fraction is: ";
    outputFraction(addFraction(a, b));
    
    //Output the subtract of two fraction
    cout<<"The subtract of two fraction is: ";
    outputFraction(subtractFraction(a, b));
    
    //Output the multiple two fractions
    cout<<"The multiple of two fraction is: ";
    outputFraction(multipleFraction(a, b));
    
    //Output the division of two fraction
    cout<<"The division of two fraction is: ";
    outputFraction(divisionFraction(a, b));
    
    return 0;
}//end main

void inputFraction (fraction &a){
    cout<<"Numerator: ";
    cin>>a.num;
    cout<<"Denominator: ";
    cin>>a.den;
}//end inputFraction

void outputFraction (fraction a){
    if(a.num == 0){
        cout<<"0";
    } else {
        cout<<a.num<<"/"<<a.den;
    }
    cout<<endl;
}//end outputFraction

fraction addFraction (fraction a, fraction b){
    fraction sum;
    
    sum.num = (a.num*b.den) + (b.num*a.den);
    sum.den = a.den*b.den;
    
    return sum;
}//end sum

fraction subtractFraction (fraction a, fraction b){
    fraction subtract;
    subtract.num = (a.num*b.den) - (a.den*b.num);
    subtract.den = (a.den*b.den);
    
    return subtract;
}//end subtract

fraction multipleFraction (fraction a, fraction b){
    fraction multiple;
    multiple.num = a.num * b.num;
    multiple.den = a.den * b.den;
    
    return multiple;
}//end multiple

fraction divisionFraction (fraction a, fraction b){
    fraction division;
    
    division.num = a.num * b.den;
    division.den = a.den * b.num;
    
    return division;
}

