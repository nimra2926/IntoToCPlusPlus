# CE100: Computing Fundamentals & Programming 

### Instructions:

      • Email instructor or TA in case you are facing any difficulty in writing algorithm of any question.  
      • You cannot look at others’ solution or use others’ solution, however, you can discuss it with each other. 
      • Plagiarism will lead to a straight zero in all previous assignments with additional consequences as well.
      • Code should be yours, not from your internet or any other source.
        If any instance is found copied from an online source, it will be also considered as cheating.
      • Submission after due time will not be accepted.
      • From no onward, heavy penalty will be there for un-indented code and codes with improper comments.
      • Display appropriate input and output messages whether mentioned in question or not.
      • Dry run your solution. It helps in finding out bugs in your program.
     

## REPORT

Solve the following and comment on every step of your algorithm as if you are explaining your code to your fellows to demonstrate clear understanding. 
Submit the PDF of report containing code and screenshot of output. 

## TASK

Write a user-interactive menu-driven C++ program 

### Task 1

Write a C++ program that reads an integer number from the user as an input. It should then separate the digits and store each in an array. The user can enter up to 8 digits. The program prints a new number on the using the following rule:


Numbers with the odd number of digits is rotated about the middle number and even numbers are rotated about the 2 middle digits. In order to understand this question, see the example below. The numbers having the same color are swapped to produce the rotated new number:


Example 1: User Entered 12345 then program should print 54321


Example 2: User Entered 123456 then program should print 653421



### Task 2

Write a program to calculate pow(x,n), x, and n are two integers. write a function to compute x^n.



### Task 3

Write a C++ program that will read two numbers from the user and perform the following operations i.e. add, subtract, multiply, divide and remainder (sort of calculator) by using pointers. There should be one function against one functionality. e.g. int sum(-------)



### Function prototypes

Function prototype(s) should be written in Functions.h

### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 

### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

