//
//  main.cpp
//  Code lab 2
//
//  Created by Mai Ngoc Diem My on 22/3/25.
//

#include <iostream>
using namespace std;

class Trip {
public:
    void performTrip() {
        doComingTransport();
        doDayA();
        doDayB();
        doDayC(); // Optional
        doReturningTransport();
    }

protected:
    void doComingTransport() { cout << "Arriving at destination." << endl; }
    void doReturningTransport() { cout << "Returning home." << endl; }
    virtual void doDayA() = 0;
    virtual void doDayB() = 0;
    virtual void doDayC() {} // Optional, default does nothing
};

class PackageA : public Trip {
protected:
    void doDayA() override { cout << "Day A: Sightseeing in the city." << endl; }
    void doDayB() override { cout << "Day B: Visiting museums." << endl; }
    void doDayC() override { cout << "Day C: Shopping and free time." << endl; }
};

class PackageB : public Trip {
protected:
    void doDayA() override { cout << "Day A: Beach day and relaxation." << endl; }
    void doDayB() override { cout << "Day B: Water sports activities." << endl; }
};

int main() {
    cout << "Executing Package A:\n";
    PackageA tripA;
    tripA.performTrip();

    cout << "\nExecuting Package B:\n";
    PackageB tripB;
    tripB.performTrip();

    return 0;
}
