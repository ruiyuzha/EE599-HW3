#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
private:
  vector<int>::iterator currentLocation;
  vector<int> v_;
public: 
  void InitialCurrentLocation(vector<int> v);
  void SetV(vector<int> v){v_=v;}
  void SetIt(vector<int>::iterator iter){currentLocation = iter;}

  void print_vector();
  void print_menu();
  void FindFirstElem();
  void FindLastElem();
  void FindCurrentElem();
  void FindithElem(int i);
};

#endif