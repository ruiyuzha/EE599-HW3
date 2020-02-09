#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> v={3,7,11,15};
    vector<int> res;
    int sum=10;
    cout<<"Input: v = ";
    solution.print_vector(v);
    cout<<", sum = "<<sum<<","<<endl;
    res=solution.Sum(v,sum);
    cout<<"output: ";
    solution.print_vector(res);
    cout<<endl;

    int sum1=180;
    cout<<"Input: v = ";
    solution.print_vector(v);
    cout<<", sum = "<<sum1<<","<<endl;
    res=solution.Sum(v,sum1);
    cout<<"output: ";
    solution.print_vector(res);
    cout<<endl;

    int sum2=5;
    vector<int> v1={1,4,3,2};
    cout<<"Input: v = ";
    solution.print_vector(v1);
    cout<<", sum = "<<sum2<<","<<endl;
    res=solution.Sum(v1,sum2);
    cout<<"output: ";
    solution.print_vector(res);
    cout<<endl;

    return EXIT_SUCCESS;
}