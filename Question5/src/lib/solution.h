#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class AcademicRecord {
public:
  int Maths;
  int Computers;
  int Physics;
  AcademicRecord();
  AcademicRecord(int m_math, int m_computer, int m_physics);
  AcademicRecord(const AcademicRecord &m);
  void add(int &score, int i);
  AcademicRecord operator++();
  AcademicRecord operator++(int);
  void minus(int &score, int i);
  AcademicRecord operator--();
  AcademicRecord operator--(int);
  AcademicRecord operator+=(int i);
  AcademicRecord operator-=(int i);
  AcademicRecord operator==(const AcademicRecord &m);
  void print();
};

#endif