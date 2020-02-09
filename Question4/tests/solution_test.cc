#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(Ex1, ReturnEx1) {
  Solution solution;
  string s1="(a+b)";
  int actual = solution.isValid(s1);
  EXPECT_EQ(1, actual);
}

TEST(Ex2, ReturnEx2) {
  Solution solution;
  string s1="(a+b)[c*d]{5g+h}";
  int actual = solution.isValid(s1);
  EXPECT_EQ(1, actual);
}

TEST(Ex3, ReturnEx3) {
  Solution solution;
  string s1="(a+b]";
  int actual = solution.isValid(s1);
  EXPECT_EQ(0, actual);
}

TEST(Ex4, ReturnEx4) {
  Solution solution;
  string s1="(7h+[5c)+7]";
  int actual = solution.isValid(s1);
  EXPECT_EQ(0, actual);
}

TEST(Ex5, ReturnEx5) {
  Solution solution;
  string s1="{2k+[5j]}";
  int actual = solution.isValid(s1);
  EXPECT_EQ(1, actual);
}

TEST(Ex6, ReturnEx6) {
  Solution solution;
  string s1="{2k++[5--*j]}";
  int actual = solution.isValid(s1);
  EXPECT_EQ(1, actual);
}