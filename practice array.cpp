//
//  main.cpp
//  practice array
//
//  Created by Mai Ngoc Diem My on 06/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
void sortAscendingArray(int array[100], int size);
void printAscendingArray(int array[100], int size);
void sortDescendingArray(int array[100], int size);
void printDescendingArray(int array[100], int size);
/*int sumAllElements (int array[100], int size);
int sumEvenElements (int array[100], int size);
int sumOddIndex (int array[100], int size);
void findMax (int array[100], int size);
void findMin (int array[100], int size);
void findNegative (int array[100], int size);
void findAllNegative (int array[100], int size);
int checkPrime (int number);
void findPrime (int array[100], int size);
void findAllPrime (int array[100], int size);*/
//int checkNegative (int array[100], int size);
int main(int argc, const char * argv[]) {
    int array[100], size;
    
    //Get the array from user and output
    getArray (array, size);
    printArray(array, size);
    
    //Ascending array
    sortAscendingArray(array, size);
    printAscendingArray(array, size);
    
    //Descending array
    sortDescendingArray(array, size);
    printDescendingArray(array, size);
    
    /*//Sum all the elements of the array
    cout<<"Sum all elements of the array = "<<sumAllElements(array, size)<<endl;
    
    //Sum even elements in the array
    cout<<"Sum all even elements of the array = "<<sumEvenElements(array, size)<<endl;
    
    //Sum elements in odd position
    cout<<"Sum all elements in odd position of the array = "<<sumOddIndex(array, size)<<endl;
    
    //Find the max element
    findMax(array, size);
    
    //Find the min element
    findMin(array, size);
    
    //Check negative
    if(checkNegative(array, size)==1){
        cout<<"The array has at least one negative element."<<endl;
    } else {
        cout<<"The array has no negative element."<<endl;
    }
    
    //Check negative
    findNegative(array, size);
    
    //Check all negative
    findAllNegative(array, size);
    
    //Check Prime
    findPrime(array, size);
    
    //Check all prime number
    findAllPrime(array, size);*/
    
    return 0;
}//end main

void getArray (int array[100], int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"a["<<i<<"]"<<" = ";
        cin>>array[i];
    }
}//end getArray

void printArray (int array[100], int size){
    cout<<"Your array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end printArray

/*int sumAllElements (int array[100], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}//end sumAllEllements

int sumEvenElements (int array[100], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        if(array[i]%2==0){
            sum += array[i];
        }
    }
    return sum;
}//end sumEvenElements

int sumOddIndex (int array[100], int size){
    int sum = 0;
    
    for(int i = 1; i < size; i = i + 2){
        sum += array[i];
    }
    return sum;
}//end sumOddIndex

void findMax (int array[100], int size){
    int max = array[0];
    
    for(int i = 1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    cout<<"The max elements in the array is: "<<max<<endl;
}//end findMax

void findMin (int array[100], int size){
    int min = array[0];
    
    for(int i = 1; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    cout<<"The min elements in the array is: "<<min<<endl;
}//end findMin

int checkNegative (int array[100], int size){
    for(int i = 0; i < size; i++){
        if(array[i] < 0){
            return 1;
        }
    }
    return 0;
}

void findNegative (int array[100], int size){
    int negative = false;
    for(int i = 0; i < size; i++){
        if(array[i] < 0){
            negative = true;
            break;
        }
    }
    if(negative==true){
        cout<<"The array has at least one negative element."<<endl;
    } else {
        cout<<"The array has no negative element."<<endl;
    }
}

void findAllNegative (int array[100], int size){
    int positive = false;
    
    for(int i = 0; i < size; i++){
        if(array[i] > 0){
            positive = true;
            break;
        }
    }
    
    if(positive==true){
        cout<<"The array does not have all negative number."<<endl;
    } else {
        cout<<"The array have all negative number."<<endl;
    }
}

int checkPrime (int number) {
    if(number <= 1){
        return 0;
    }
    for(int i = 2; i * i <= number; i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}// end check Prime

void findPrime (int array[100], int size){
    int prime = false;
    
    for(int i = 0; i < size; i++){
        if(checkPrime(array[i])==1){
            prime = true;
            break;
        }
    }
    if(prime==true){
        cout<<"The array has at least one prime number."<<endl;
    } else {
        cout<<"The array does not have prime number."<<endl;
    }
}

void findAllPrime (int array[100], int size){
    int not_prime = false;
    
    for(int i = 0; i < size; i++){
        if(checkPrime(array[i])==0){
            not_prime = true;
            break;
        }
    }
    if(not_prime==true){
        cout<<"The array does not have all prime number."<<endl;
    } else {
        cout<<"The array has all prime number."<<endl;
    }
}*/

void swap (int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void sortAscendingArray(int array[100], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(array[i] > array[j]){
                swap(array[i], array[j]);
            }
        }
    }
}//end sortAscendingArray

void printAscendingArray(int array[100], int size){
    cout<<"Your ascending array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void sortDescendingArray(int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] < array[j]){
                swap(array[i], array[j]);
            }
        }
    }
}//end sortDescendingArray

void printDescendingArray(int array[100], int size){
    cout<<"Your descending array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
