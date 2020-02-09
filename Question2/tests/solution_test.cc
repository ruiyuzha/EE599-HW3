#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Ex1, ReturnEx1) {
  Solution solution;
  vector<int> v={3,7,11,15};
  int sum=10;
  vector<int> actual = solution.Sum(v,sum);
  vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}

TEST(Ex2, ReturnEx2) {
  Solution solution;
  vector<int> v={3,7,11,15};
  int sum=180;
  vector<int> actual = solution.Sum(v,sum);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(Ex3, ReturnEx3) {
  Solution solution;
  vector<int> v={1,4,3,2};
  int sum=5;
  vector<int> actual = solution.Sum(v,sum);
  vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}