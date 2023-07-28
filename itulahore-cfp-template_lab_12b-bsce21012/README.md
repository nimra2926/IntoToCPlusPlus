# CE100: Computing Fundamentals & Programming 

      Time allowed: 120 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## QUESTION

1. A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. Your program should read a four-digit integer in main() entered by the user and encrypt it as follows:<br>
      1. Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit with the third, and swap the second digit with the fourth. Then display the encrypted integer.<br>
      2. After encryption, the program will ask input an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the original number and return the decrypted number.
<br>



2. A bank account charges $10 per month plus the following check fees for a commercial checking account:<br>
$.10 each for fewer than 20 checks<br>
$.08 each for 20-39 checks<br>
$.06 each for 40-59 checks<br>
$.04 each for 60 or more checks<br>
The bank also charges an extra $15 if the balance of the account falls below $400(before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank’s service fees for the month and cheque amount will also be deducted from the balance<br>
*Input validation*: Do not accept a negative value for the number of checks written. If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.


      
### Functions

Function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

