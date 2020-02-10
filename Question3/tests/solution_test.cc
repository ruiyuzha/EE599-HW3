#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FunctionEmpty, CheckFunctionEmpty) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  bool actual = solution.empty();
  EXPECT_EQ(0, actual);
}

TEST(FunctionSize, CheckFunctionSize) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int actual = solution.size();
  EXPECT_EQ(3, actual);
}

TEST(FunctionBack, CheckFunctionBack) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int actual = solution.back();
  EXPECT_EQ(3, actual);
}

TEST(FunctionFront, CheckFunctionFront) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int actual = solution.front();
  EXPECT_EQ(1, actual);
}

TEST(Functionpush_back, CheckFunctionpush_back) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int num=4;
  solution.push_back(num);
  int actual = solution.back();
  EXPECT_EQ(4, actual);
}

TEST(Functionpush_front, CheckFunctionpush_front) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int num=4;
  solution.push_front(num);
  int actual = solution.front();
  EXPECT_EQ(4, actual);
}

TEST(Functioninsert_after, CheckFunctioninsert_after) {
  vector<int> input={1,2,3};
  SinglyLinkedList solution(input,3);
  int num1=5;
  int location=1;
  ListNode *pnew = solution.GetIthPointer(location);
  solution.insert_after(pnew, num1);
  ListNode *insert = solution.GetIthPointer(location+1);
  int actual = insert -> val;
  EXPECT_EQ(5, actual);
}

TEST(Functionerase, CheckFunctionerase) {
  vector<int> input1={1,2,3,4};
  vector<int> input2={1,2,4};
  SinglyLinkedList solution1(input1, 4);
  ListNode *k = solution1.GetIthPointer(2);
  solution1.erase(k);
  ListNode *test1 = solution1.GetIthPointer(2);
  int actual = test1 -> val;
  SinglyLinkedList solution2(input2, 3);
  ListNode *test2 = solution2.GetIthPointer(2);
  int expected = test2 -> val;
  EXPECT_EQ(expected, actual);
}

TEST(Functionpop_back, CheckFunctionpop_back) {
  vector<int> input1={1,2,3,4};
  vector<int> input2={1,2,3};
  SinglyLinkedList solution1(input1, 4);
  solution1.pop_back();
  int actual = solution1.back();
  SinglyLinkedList solution2(input2, 3);
  int expected = solution2.back();
  EXPECT_EQ(expected, actual);
}

TEST(Functionpop_front, CheckFunctionpop_front) {
  vector<int> input1={1,2,3,4};
  vector<int> input2={2,3,4};
  SinglyLinkedList solution1(input1, 4);
  solution1.pop_front();
  int actual = solution1.front();
  SinglyLinkedList solution2(input2, 3);
  int expected = solution2.front();
  EXPECT_EQ(expected, actual);
}