#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class AcademicRecord {
public:
  AcademicRecord();
  AcademicRecord(int m_math, int m_computer, int m_physics);
  AcademicRecord(const AcademicRecord &m);

  int GetMaths() const { return maths_; };
  int GetComputers() const { return computers_; };
  int GetPhysics() const { return physics_; };
  void SetMaths(int maths) { maths_ = maths; };
  void SetComputers(int computers) { computers_ = computers; };
  void SetPhysics(int physics) { physics_ = physics; };

  void add(int &score, int i);
  AcademicRecord operator++();
  AcademicRecord operator++(int);
  void minus(int &score, int i);
  AcademicRecord operator--();
  AcademicRecord operator--(int);
  AcademicRecord operator+=(int i);
  AcademicRecord operator-=(int i);
  bool operator==(const AcademicRecord &m);
  void print();
private:
  int maths_;
  int computers_;
  int physics_;
};

#endif