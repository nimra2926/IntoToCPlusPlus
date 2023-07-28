# CE100: Computing Fundamentals & Programming 

      Time allowed: 120 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## QUESTION

1. A customer wants you to design and then build an online store. While interviewing the customer following information was extracted:<br>
Track products and related information. <br>
To do: extract details (i.e. other information to track) from interview notes.<br>
Abilities the customer wants in the system:<br>
Identify a product that will be for sale. You should read in the name, model number, wholesale cost, and retail cost for the product.Enter a new customer. You should read in the customer name and ID.<br>
Take a shipment of new products. Read in the model number and quantity. If you don't know what the product is that you're getting, reject the shipment, otherwise add that to inventory.<br>
Let a customer buy something. The customer ID, product model number, and quantity should be taken as input. If there is sufficient quantity of the product on hand, then the customer should be charged that amount and the product be deducted from inventory. If there is not sufficient quantity, the sale should be rejected. Let a customer make a payment. Read in the customer ID and the amount of payment. It's OK for customers to have a positive balance, but they cannot make negative payments. Find out about a customer: enter a customer ID number, and print out the customer's name, current balance, and a list of what the customer has previously purchased. Find out about a product: enter a model number and get the name of the product, the amount that has already been sold, and the amount in inventory. Print lists of all information about all customers and all products.

<br>



2. Write a method to replace all spaces in a string with '%2e: You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: In C++, please use a character array so that you can perform this operation in place.)<br>
EXAMPLE <br>
Input: "Mr John Smith JJ”, 13<br>
Output: "Mr%2eJohn%2eSmith" 


      
### Functions

Function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 


### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

