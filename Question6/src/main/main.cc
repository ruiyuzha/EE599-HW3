#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> v={10,20,30,40,50,60,70,80,90,100};
    vector<int>::iterator currentLocation = v.begin();
    solution.SetV(v);
    solution.SetIt(currentLocation);
    int choice=0; 
    while(choice !=5){
        solution.print_menu();
        cin>>choice;
        switch(choice){
        case 1:
            solution.FindFirstElem();
            break;
        case 2:
            solution.FindLastElem();
            break;
        case 3:
            solution.FindCurrentElem();
            break;
        case 4:
            cout<<"Enter the value of i::"<<endl;
            int i;
            cin>>i;
            solution.FindithElem(i);
            break;
        case 5:
            cout << "Exit!"<<endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}