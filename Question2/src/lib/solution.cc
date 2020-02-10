#include "solution.h"
#include <map>
#include <iostream>
using namespace std;

//O(n^2)
vector<int> Solution::Sum(vector<int> v,int sum) { 
  map<int,int> sumMap;
  vector<int> res;
  vector<int> res1;
  for (int i = 0; i<v.size(); ++i){
    sumMap.insert(pair<int,int>(v[i], i));
  }
  for (auto j:sumMap){
    for (auto k:sumMap){
      if ((j.first + k.first == sum) & j<k){
        res.push_back(j.second);
        res.push_back(k.second);
      }
    }
  }
  if (res.size()>2){
    res1.push_back(res[0]);
    res1.push_back(res[1]);
    return res1;
  }
  else{
    return res;
  }
}

//O(n)
void Solution::print_vector(vector<int> v){
    if(v.size()>0){
        cout<<"[";
        for(int i=0;i<int(v.size());i++){
            cout<<v[i]<<",";  
        }
        cout<<"\b]";
    }
    else{
        cout<<"[]";
    }
}
