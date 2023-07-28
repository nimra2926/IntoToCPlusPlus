# CE100: Computing Fundamentals & Programming 

      Time allowed: 60 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A

Write a function 'baseToPowerExponent' that takes two parameters; base and exponent. It calculates the power of base according to the value of exponent and returns the answer. 
(Suppose that exponent cannot be greater than 5). In case of invalid input, return -1.

      e.g if base is 2 and exponent is 3, then answer should be 8.
      
      **Code**
      
      int baseToPowerExponent(int base, int exp){
      int result = 0;
   
      // Write your code here
   
      return result; // returns the variable that stored the answer
      }

      
### Task B

Use 'decimalToBinary' conversion code done in the previous lab (2B). Combine the individual bits into a single binary number. 

      int decimalToBinary(int n) {
      int bin = 0;
   
      // Write your code here
      // Hint: Use string concatenation OR calculate the binary value using mathematical operations. Either way you need to make sure you return an integer.
   
      return bin;  // returns the variable that stored binary value 
      }
      
      
### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 

`make test` This will run test.cpp executable


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

