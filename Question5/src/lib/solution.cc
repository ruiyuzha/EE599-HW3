#include "solution.h"
using namespace std;

AcademicRecord::AcademicRecord() { 
   Maths = 0;
   Computers = 0;
   Physics = 0;
}

AcademicRecord::AcademicRecord(int m_math, int m_computers, int m_physics): Maths(m_math), Computers(m_computers), Physics(m_physics){
}

AcademicRecord::AcademicRecord(const AcademicRecord &m){
   Maths = m.Maths;
   Computers = m.Computers;
   Physics = m.Physics;
}

void AcademicRecord::add(int &score, int i){
   if (score + i<100){
      score = score+i;
   }
   else{
      score = 100;
   }
}

//++ prefix overload
AcademicRecord AcademicRecord::operator++(){
   AcademicRecord::add(Maths,10);
   AcademicRecord::add(Computers,10);
   AcademicRecord::add(Physics,10);
   return *this;
}

//++ postfix overload
AcademicRecord AcademicRecord::operator++(int){
   AcademicRecord temp = *this;
   AcademicRecord::add(Maths,10);
   AcademicRecord::add(Computers,10);
   AcademicRecord::add(Physics,10);
   return temp;
}

void AcademicRecord::minus(int &score, int i){
   if (score - i>0){
      score = score-i;
   }
   else{
      score=0;
   }
}

//-- prefix overload
AcademicRecord AcademicRecord::operator--(){
   AcademicRecord::minus(Maths,20);
   AcademicRecord::minus(Computers,20);
   AcademicRecord::minus(Physics,20);
   return *this;
}

//++ postfix overload
AcademicRecord AcademicRecord::operator--(int){
   AcademicRecord temp = *this;
   AcademicRecord::minus(Maths,20);
   AcademicRecord::minus(Computers,20);
   AcademicRecord::minus(Physics,20);
   return temp;
}

AcademicRecord AcademicRecord::operator+=(int i){
   AcademicRecord::add(Maths,i);
   AcademicRecord::add(Computers,i);
   AcademicRecord::add(Physics,i);
   return *this;
}

AcademicRecord AcademicRecord::operator-=(int i){
   AcademicRecord::minus(Maths,i);
   AcademicRecord::minus(Computers,i);
   AcademicRecord::minus(Physics,i);
   return *this;
}

AcademicRecord AcademicRecord::operator==(const AcademicRecord &m){
   if(m.Maths == Maths & m.Computers == Computers & m.Physics == Physics){
      return *this;
   }
   else{
      return *this;
   }
}

void AcademicRecord::print(){
   cout<<"maths: "<<Maths<<endl;
   cout<<"Computers: "<<Computers<<endl;
   cout<<"Physics: "<<Physics<<endl;
}