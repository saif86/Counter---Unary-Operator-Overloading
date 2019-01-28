# Counter---Unary-Operator-Overloading
Unary Operator overloading concepts in OOP.

## Problem Statement

Define a class Counter having data member mCount (int), mSerialNo (int) (add any other data member if required). Perform following additional tasks on the Counter class:

  * Define a constructor that should initialize the mCount to 0, and mSerialNo to the correct serial no (object 1 should have serial no 1, object2 should have serial no 2 and so on).
  * Define the ++ unary operator that should increment value of count to 1. For example, for the code:
    ```
    counter c1,c2;
    ++c1;
    ```
    c1 should have mCount = 1, mSerialNo = 1, c2 should have mCount = 0, mSerialNo = 2. 
    (define only the increment operator, no need to define the postfix and prefix operators)
  * Define –(negation) unary operator that inverts the value of object for counter class and should allow the statements like 
    ```
    c1 = -c1; // or 
    c2 = -c1;
    ```
