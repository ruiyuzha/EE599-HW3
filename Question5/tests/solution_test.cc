#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, ReturnTest1) {
  AcademicRecord m(95, 100, 85);
  m++;
  int actual1 = m.GetMaths();
  int actual2 = m.GetComputers();
  int actual3 = m.GetPhysics();
  EXPECT_EQ(100, actual1);
  EXPECT_EQ(100, actual2);
  EXPECT_EQ(95, actual3);
}

TEST(Test2, ReturnTest2) {
  AcademicRecord m(30, 20, 10);
  m--;
  int actual1 = m.GetMaths();
  int actual2 = m.GetComputers();
  int actual3 = m.GetPhysics();
  EXPECT_EQ(10, actual1);
  EXPECT_EQ(0, actual2);
  EXPECT_EQ(0, actual3);
}

TEST(Test3, ReturnTest3) {
  AcademicRecord m(50, 70, 90);
  m+=20;
  int actual1 = m.GetMaths();
  int actual2 = m.GetComputers();
  int actual3 = m.GetPhysics();
  EXPECT_EQ(70, actual1);
  EXPECT_EQ(90, actual2);
  EXPECT_EQ(100, actual3);
}

TEST(Test4, ReturnTest4) {
  AcademicRecord m(40, 20, 10);
  m-=20;
  int actual1 = m.GetMaths();
  int actual2 = m.GetComputers();
  int actual3 = m.GetPhysics();
  EXPECT_EQ(20, actual1);
  EXPECT_EQ(0, actual2);
  EXPECT_EQ(0, actual3);
}
