#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    AcademicRecord obj1, obj2;
    obj1.Maths = 5;
    obj1.Computers = 10;
    obj1.Physics = 95;

    cout << "Value before incrementation ::"<<endl; 
    obj1.print();
    obj1++;
    cout<< "Value after incrementation ::"<<endl; 
    obj1.print();
    obj1--;
    cout<< "Value after decrementation ::"<<endl;
    obj1.print();
    obj2=obj1;
    cout<< "Value of Object 2::"<<endl; 
    obj2.print();
    obj2+=50;
    cout<< "Value of Object 2 after increasing marks by 50 for each subject::"<<endl; 
    obj2.print();
    obj2-=30;
    cout<< "Value of Object 2 after decreasing marks by 30 for each subject::"<<endl; 
    obj2.print();

    return EXIT_SUCCESS;
}