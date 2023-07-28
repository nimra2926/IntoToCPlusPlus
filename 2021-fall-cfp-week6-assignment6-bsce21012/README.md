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

Write a user-interactive menu-driven C++ program to print different solid and hollow shapes according to the user’s choice.

The following should appear on the screen when your program is executed:
      
      Enter 1 for solid, 2 for hollow and 3 for both:
      
(program should continue asking for the valid input if the input is other than 1, 2 or 3)

Once user enters 1 or 2, user will be given further choice about the shape by giving the following options to the user:

      Enter your option for the shape type (1 to 8 or E to exit):
      
      1) Right Triangle
      2) Isosceles Triangle
      3) Equilateral Triangle
      4) All shapes
      E) Exit

(program should continue asking for the valid input if input is other than 1, 2, 3, 4 or E)
When the user selects his/her choice, the program should prompt the user for the dimension 
(note that only one dimension will be required). 

e.g. the program should prompt as follows:
      
      Enter the dimension:

Finally, the program should ask about the character to be used to draw shapes. 

e.g. it should prompt the user in the following manner:

      Enter the character type:

Only following characters will be assumed as valid characters:
      
      *   ?   %   +   $   #   ~   @   (   ) 

(program should continue asking for the valid input if input is other these characters)

Your program should then draw the shape(s) according to the user’s requirements. 

The program should repeat itself unless user wishes to stop.

### EXAMPLES

#### Example 1: 

If the user enters options in the sequence 1 1 5 + (solid, right triangle, five rows, +)
following shape will be drawn:

      +
      ++
      +++
      ++++
      +++++

#### Example 2: 

If the user choices are 1 2 5 $ (solid, isosceles, 5 rows, $), the following shape will be drawn:

          $
         $$$
        $$$$$
       $$$$$$$
      $$$$$$$$$

#### Example 3:

Hollow right triangle of 5 rows with @
      
      @
      @@
      @ @
      @  @
      @@@@@

#### Example 4:

Hollow isosceles triangle of 5 rows with @

          @
         @ @
        @   @
       @     @
      @@@@@@@@@



### TASK 1 [20 marks]

Write pseudocode (for drawing shapes only)

### TASK 2 [80 marks]

Write code in C++ for above given task



### Function prototypes

Function prototype(s) should be written in Functions.h

### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 

### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

