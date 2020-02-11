# HW3-Q5

## Description

Write a class that stores a student’s academic record. The academic record should hold marks for the following subjects:

1. Maths.

2. Computers. 

3. Physics.

Requirements:

● Implement the default constructor that initializes grades to 0.

● Implement a constructor that takes the initial grades as three parameters.

● Implement the copy constructor.

● The class should support “++” and “--” operators (both postfix and prefix)

○ A “++” call should increase ​all​ marks of each subject by ​10​.

○ A “--” call should decrease ​all​ marks of each subject by ​20​.

● The class should support “+=” and “-=”, which affect all grades of the object.

● The class should support “==” for comparison.

● After any operation, marks for any subject should stay within the range of ​0 ​and ​100​:

○ If after any operation, marks for any subject are exceeding 100 then your code should simply set the marks of that particular subject as 100.

○ Similarly, if after any operation the mark of any subject below is 0 then your code should just set the marks of that particular subject to 0.

● Print(), which returns a string that contains all marks and can later be used to print the marks.

GTest​:

Create an Object and write test cases for the following scenarios:

● Check if the marks for all the subjects of the object do not go above 100 when performing increment(“++”) operation.

● Check if the marks for all the subjects of the object do not go below 0 when performing decrement(“--”) operation.

● For each operation mentioned in the question (--, ++, +-, -= ) check if the marks of each subject of the object are as expected after the operations are performed. You can check the example for reference.

● Create an object of the class, say ​obj1​. Further, create another object, say ​obj2​ and copy the contents of ​obj1​ to ​obj2​ and check if the marks of all subjects in ​obj2​ are similar to respective subjects in ​obj1.
