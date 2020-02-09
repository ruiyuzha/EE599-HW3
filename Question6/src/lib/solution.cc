#include "solution.h"
using namespace std;
#include <iostream>

void Solution::InitialCurrentLocation(vector<int> v){
  v_=v;
  currentLocation = v_.begin();
}

void Solution::print_vector(){
    if(v_.size()>0){
        cout<<"[";
        for(int i=0;i<int(v_.size());i++){
            cout<<v_[i]<<",";  
        }
        cout<<"\b]";
    }
    else{
        cout<<"[]";
    }
    cout<<endl;
}

void Solution::print_menu(){
  cout<<"*********************************************************************"<<endl;
  cout<<"*"<<endl;
  cout<< "Vector: ";
  Solution::print_vector();
  cout<<"*********************************************************************"<<endl;
  cout<<"*"<<endl;
  cout<<"Please choose any of the following options:"<<endl;
  cout<<"1. What is the first element?"<<endl;
  cout<<"2. What is the last element?"<<endl;
  cout<<"3. What is the current element?"<<endl;
  cout<<"4. What is the ith element from the current location?"<<endl;
  cout<<"5. Exit."<<endl;
  cout<<"*********************************************************************"<<endl;
  cout<<"*"<<endl;
}

void Solution::FindFirstElem(){
  cout<<*v_.begin()<<endl;
}

void Solution::FindLastElem(){
  cout<<*v_.rbegin()<<endl;
}

void Solution::FindCurrentElem(){
  cout<<*currentLocation<<endl;
}

void Solution::FindithElem(int i){
  if((currentLocation-v_.begin()+i)>v_.size()){
    cout<< "Sorry! You cannot traverse "<<i<<" elements from your current location."<<endl;
  }
  else{
    currentLocation=currentLocation+i;
    cout <<*currentLocation<<endl;
  }
}