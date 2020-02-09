#include "solution.h"
using namespace std;

AcademicRecord::AcademicRecord() { 
   maths_ = 0;
   computers_ = 0;
   physics_ = 0;
}

AcademicRecord::AcademicRecord(int m_math, int m_computers, int m_physics): maths_(m_math), computers_(m_computers), physics_(m_physics){
}

AcademicRecord::AcademicRecord(const AcademicRecord &m){
   maths_ = m.GetMaths();
   computers_ = m.GetComputers();
   physics_ = m.GetPhysics();
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
   AcademicRecord::add(maths_,10);
   AcademicRecord::add(computers_,10);
   AcademicRecord::add(physics_,10);
   return *this;
}

//++ postfix overload
AcademicRecord AcademicRecord::operator++(int){
   AcademicRecord temp = *this;
   AcademicRecord::add(maths_,10);
   AcademicRecord::add(computers_,10);
   AcademicRecord::add(physics_,10);
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
   AcademicRecord::minus(maths_,20);
   AcademicRecord::minus(computers_,20);
   AcademicRecord::minus(physics_,20);
   return *this;
}

//++ postfix overload
AcademicRecord AcademicRecord::operator--(int){
   AcademicRecord temp = *this;
   AcademicRecord::minus(maths_,20);
   AcademicRecord::minus(computers_,20);
   AcademicRecord::minus(physics_,20);
   return temp;
}

AcademicRecord AcademicRecord::operator+=(int i){
   AcademicRecord::add(maths_,i);
   AcademicRecord::add(computers_,i);
   AcademicRecord::add(physics_,i);
   return *this;
}

AcademicRecord AcademicRecord::operator-=(int i){
   AcademicRecord::minus(maths_,i);
   AcademicRecord::minus(computers_,i);
   AcademicRecord::minus(physics_,i);
   return *this;
}

bool AcademicRecord::operator==(const AcademicRecord &m){
   if(m.maths_ == maths_ & m.computers_ == computers_ & m.physics_ == physics_){
      return 1;
   }
   else{
      return 0;
   }
}

void AcademicRecord::print(){
   cout<<"maths: "<<maths_<<endl;
   cout<<"Computers: "<<computers_<<endl;
   cout<<"Physics: "<<physics_<<endl;
}