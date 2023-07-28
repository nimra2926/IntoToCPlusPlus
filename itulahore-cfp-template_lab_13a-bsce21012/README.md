# CE100: Computing Fundamentals & Programming 

      Time allowed: 120 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## QUESTION

1. Suppose you own a hospital, and you have 30 doctors appointed in the hospital. You need to maintain the record of all the registered doctors and display their data when required. Create a structure Doctor, containing registration number (int), name (char []), address(nested), date of joining(nested) as structure members. Write a program that accomplish the following tasks<br>
●	Main function should ask the user to enter id and password to proceed further.<br>
●	Main function should display a menu either to enter the record or display the record. Program should call the function according to the user's choice.<br>
●	If the user chooses to enter the record, the program should store the data in a structure array of 30 members. Program should ask the user if he wants to enter the next record.<br>
●	If the user chooses to display the record and there is a record present, the program should display the list of records (in ascending order of date of joining), if there is no record present then it should display a message of “no record found”.<br>
●	Record displayed by point number 4 should be sorted in descending order of date of joining of doctors by using a sort function<br>

<br>

2. You are supposed to make a C++ Application for the Arfa CAFE management system. Suppose there are two employees who manage the counter, their employment IDs are 431 and 532. The program first login the employee with their ID. Do make a switching mechanism for the employee with a special flag variable. There they can make a transaction of only 2 out of 10 items for a student containing the items based on the below list.<br>
Serial No.<br>
item<br>
Name <br>
Price<br>
1 Tea 30
2 Small Pizza 40<br>
3 patties 40<br>
4 Pastry 40<br>
5 Samosa 10<br>
6 Green Salad 30<br>
7 Sandwich 70<br>
8 Burger 100<br>
9 Fries 100<br>
10 Coffee 50<br>
Display the list before purchase. Your system should serve n number of students, after purchasing anything the system display menu again. The program should display the Name of CAFE at the top of the console. When the employee switches the system to another employee, the program should display the total number of transactions he has done with the system and the program starts again to login system.


### Functions

Function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

