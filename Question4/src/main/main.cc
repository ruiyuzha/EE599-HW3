#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution ;
    string s1 = "(a+b)";
    string s2 = "(a+b)[c*d]{5g+h}";
    string s3 = "(a+b]";
    string s4 = "(7h+[5c)+7]";
    string s5 = "{2k+[5j]}";
    string s6 = "{2k++[5--*j]}";

    cout<<"Input: "<<s1<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s1)); 
    cout<< endl;

    cout<<"Input: "<<s2<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s2)); 
    cout<< endl; 

    cout<<"Input: "<<s3<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s3)); 
    cout<< endl;
    
    cout<<"Input: "<<s4<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s4)); 
    cout<< endl;    
    
    cout<<"Input: "<<s5<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s5)); 
    cout<< endl;    
    
    cout<<"Input: "<<s6<<endl;
    cout << "output: ";
    solution.print_res(solution.isValid(s6)); 
    cout<< endl;    
    return EXIT_SUCCESS;
}