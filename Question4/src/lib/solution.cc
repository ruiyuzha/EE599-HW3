#include "solution.h"
#include <stack>
#include <iostream>
using namespace std;

bool Solution::isValid(const string &input) { 
  stack<char> test;
  for (int i=0;i<input.size();i++){
    if(input[i]=='{'){
      test.push('}');
    }
    else if(input[i]=='['){
      test.push(']');
    }
    else if(input[i]=='('){
      test.push(')');
    }
    else if(test.top() == input[i]){
      test.pop();
    }
  }
  return test.empty();
}

void Solution::print_res(bool res){
  if (res==1){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
}