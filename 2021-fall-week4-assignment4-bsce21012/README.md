# CE100: Computing Fundamentals & Programming 

### Instructions:

      • Email instructor or TA in case you are facing any difficulty in writing algorithm of any question.  
      • You cannot look at others’ solution or use others’ solution, however, you can discuss it with each other. 
        Plagiarism will lead to a straight zero with additional consequences as well.
      • Submission after due time will not be accepted.
      • Only working code shall be awarded marks.
      
     

## TASKS

Write the functions and also write code to call these functions in main() to test your code in all questions given below: 

### TASK 1 [20 marks]

Write a boolean function named `armstrongNumber` using while loop, that takes a number as parameter, and checks whether it is an Armstrong number or not. i.e a
number is an Armstrong number if the sum of the cubes of its individual digits is equal to the number itself. Function will return true if given 
number is Armstrong, otherwise it will return false.

e.g `4^3+0^3+7^3=407`

      bool armstrongNumber(int num){
      // write your code here
      }

### TASK 2 [20 marks]

Write a function named `raiseToPower` using do-while loop, that takes two numbers from the user and calculates the result of first number raise 
to power second number.

e.g 
  
  `Enter first number: 4`

  `Enter second number: 2`
    
  `Result is : 16`
    
    int raiseToPower (int num1, int num2){
    // Write your code here
    }

### TASK 3 [20 marks]

Write a boolean function named 'palindrome' using do-while loop, that inputs a number and checks whether it’s a
palindrome or not. i.e A palindrome is a number that remains the same when its digits are reversed. Function will 
return true if given number is palindrome, otherwise it will return false.


e.g `4994 and 16461`

    bool palindrome (int number){
    // Write your code here
    }

### TASK 4 [40 marks]

A program performs the arithmetic operation ( + , - , * , / , %) and then asks the user whether he/she
wants to use the program again or not. Use do-while loop for creating menu, and use switch cases to do 
the operation according to input taken from user. Make separate functions for each arithmetic operation.




### Function prototypes

Function prototype(s) should be written in Functions.h

### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 

`make test` This will run test.cpp executable


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

