# CE100: Computing Fundamentals & Programming 

### Instructions:

      • Email instructor or TA if there are any questions. You cannot look at others’ solution or use others’ solution, however, you can discuss it with each other. Plagiarism           will lead to a straight zero with additional consequences as well.
      • Submission after due time will not be accepted.
      • Only working code shall be awarded marks.
     

## TASKS

Write the functions and also write code to call these functions in main() to test your code in all questions given below: 

### TASK 1

Write a function named lowerOrUpper that takes a character input from the user and checks whether the entered character is lowercase (a to z) or uppercase (A to Z). Return ‘U’ if the entered character is uppercase and return ‘L’ if the entered character is lowercase. Throw an error in case of invalid input and return ‘I’.

Function will look like this:
     
     char lowerOrUpper(char ch){ 
      //Write your code here
      return character;
      }


### TASK 2

Write a boolean function that takes a year as an input. It checks if that year is a leap year or not. Function must return true if it is a leap year, returns false if it is not.
(Note: If a year is divisible by 4 then it is a leap year, but if the year is a century year like 2000, 1900, 2100 then it must be divisible by 400)

Function will look like this:

      bool leapYear(int year){ 
      //Write your code here
      }


### TASK 3

A 4 digit number is entered through the keyboard. Write a program to print a new number with digits reversed as of the original one without using any loop, you can only use if-else statements if required. 
    
      e.g.
      INPUT : 1234        OUTPUT : 4321
      INPUT : 5982        OUTPUT : 2895

Function will look like this:

      int reverseOfNumber(int num){
      //Write your code here
      }

### TASK 4

A student will not be allowed to sit an exam if his/her attendance is less than 75%. Ask the user if he/she has a medical cause or not ( 'Y' or 'N' ), allow the student to sit if he/she has a medical cause. 
Take following inputs from user:
Number of total classes held
Number of classes attended
Had medical cause or not
Display:
Percentage of classes attended
Is a student allowed to sit an exam or not? Return true if he is allowed to sit and false otherwise

Function will look like this:

      bool examPermission(int , int , char){
      //Write your code here
      }
 
### TASK 5

Jason typically uses the Internet to buy various items. If the total cost of the items ordered, at one time is $400 or more, then the shipping and handling is free. If the total cost of the items ordered, at one time is $300 or more, then the shipping and handling is $5 per item. Otherwise, the shipping and handling is $10 per item. Write a program that prompts Jason to enter the number of items ordered and the price of each item. The program then outputs the total billing amount.

Function will look like this:

      int calculateCostOfItems(int numberOfItems)
      {
       // Ask user to enter price of each item according to the number of items passed as parameter in function
 
      return cost;
      }
 
      int calculateBillPayment(int numberOfItems){
 
      calculateCostOfItems(numberOfItems); //returns cost to be used
 
      //Write your code to calculate final bill after adding shipping charges
 
      return bill;
      }

      
### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 

`make test` This will run test.cpp executable


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

