#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    vector<int> input={1,2,3};
    SinglyLinkedList solution(input,3);
    cout<<"Input: ";
    solution.print();
    
    cout<<"Is this list empty? ";
    if (solution.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    cout<<"Size of this list: "<<solution.size()<<endl;

    int num=4;
    cout<<"Inserts "<< num<<" at the back: ";
    solution.push_back(num);
    solution.print();

    cout<<"Inserts "<< num<<" at the front: ";
    solution.push_front(num);
    solution.print();

    int num1=5;
    int location=2;
    ListNode *pnew = solution.GetIthPointer(location);
    solution.insert_after(pnew, num1);
    std::cout << "Inserts "<<num1<<" after "<< location+1 << "(th) pointer: ";
    solution.print();

    solution.erase(pnew);
    cout<<"Erase "<<location+1<<"(th) node: ";
    solution.print();

    solution.pop_front();
    cout<<"Removes the first item: ";
    solution.print();

    solution.pop_back();
    cout<<"Removes the last item: ";
    solution.print();

    cout<<"The value of first item: "<<solution.front()<<endl;

    cout<<"The value of last item: "<<solution.back()<<endl;

    std::cout << "Pointer to last item: " << solution.GetBackPointer() << std::endl;

    std::cout << "Pointer to "<<location+1<<"th element: " << solution.GetIthPointer(location) << std::endl;

    return EXIT_SUCCESS;
}