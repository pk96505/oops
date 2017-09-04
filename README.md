List of Practicals (Aq1 - Aq35 )

1. Write a class representing bank accounts. The class should have following data members : Customer Name, Account Number, Type of Account (Savings/Current etc), Account Balance. The class should allow basic operations like creating a new account, deposit an amount, withdraw money after checking the balance, display account details.

2. Write an Employee class representing an Employee with an Organization. The class has following data: Employee ID, Employee Name, Date of Birth, Salary of the employee. Write functions to add employee details and display employee details.

3. Passing by reference is also an effective way to allow a function to return more than one value. Write a program that returns the previous and next numbers of the first parameter passed using the concept of pass by reference.

4. Write a program to sort two numbers using call by reference.  Smallest number should be output first

5. Implement a resource allocator using the concept of static data member and static member function. A Resource class should have a static data member to keep track of resource allocation (Boolean variable). Instances of this class will be allocated resource only if no other instance is holding the resource.

6. Create two classes KILOS and POUNDS which store the value of weights. KILOS store weight in kilograms and grams and POUNDS in pounds and ounces. Write a program using friend function to add weight of a KILOS object to weight of POUNDS object. Store the result as POUNDS object. (Use 1 pound = 16 ounces, 1 ounce = 28 grams)

7. Write an overloaded volume function to calculate the volume of a cube (side*side*side), a cuboid (l*b*h) and a circle.


MEMORY OPERATIONS USING NEW DELETE

8. Write a program to copy data from one int array to another. Use the concept of new and delete to allocate and de-allocate memory for the arrays.

CONSTRUCTOR & DESTRUCTOR - DYNAMIC MEMORY – COPY CONSTRUCTOR

9. Write a box class with class member’s length, breadth, height and a function to calculate the volume of the box. Constructor should be passed arguments for length, breadth, height. Also define a second constructor which takes default height value of 10.

10. Write a class with a “int *” member function whose constructor takes a int argument and allocates memory using “new” and destructor frees that memory. (Note : Copy constructor should also be defined for this class.)

11. Write a class with a simple integer as class member and a member function that returns that value. There should be two overloaded constructors one which takes an integer as argument and the other taking a “char *” as argument.(Note : Can use atoi function to convert “char *” to int.)

12. Extend assignment 2 to have employees data entered through constructor(s). Write default and copy constructors

13. Write a Matrix class with attributes: row, col, dynamically created two-dimensional int array. Define constructors to allocate memory dynamically for the dimensions supplied. Write methods to set, get values of individual matrix elements, display contents of the matrix etc.

OPERATOR OVERLOADING

14. Overload the ‘+’ operator to add two Rational Numbers

15. Overload the ‘*’ operator to multiply two matrices

16. Overload “<<” and “>>” operators for Employee, Matrix & Rational class defined in above assignments and test the input and output for the same using cout and cin respectively.

17.  Design a Point class with co-ordinates x and y representing point on plane (use constructors and overload << and >> operators). Design a Polar class which represent class using polar coordinates radius(r) and angle(a). Write program which takes input data for a Point object and perform type conversion so as to convert the Point data into Polar data.
Use the following formulas where required:
 	x = r * cos(a);
    y = r * sin(a);
   a = atan(y/x);
   r = sqrt(x*x + y*y);  
INHERITANCE


18. Write a base class with protected class members length and breadth. Derived class should have a function to calculate the area using length and breadth of  base class

19. Write a base and derived class with simple integer class members. Implement concept of base class constructor initialization in the derived class constructor. Both the classes should have member function to display their class member values. This method should be protected in the base class and invoked from the derived class.

20. Implement multiple and multi-level inheritance. Derived class derived should have protected and private inheritance from base classes base1 and base2, where base1 and base2 have protected data members. Derived class derivedL2 should in turn publicly inherit from class derived. Try and access protected data members of base1 and base2 classes in derivedL2. Write destructor functions to see the sequence of destructor calls.

21. Defining class Manager which inherits from Employee. Manager has additional attributes (bonus, employees_managed)  and behavior as (getbonus, setbonus, addemployees_managed and getemployees_managed). Write the corresponding functions and test them. Write corresponding constructors, destructors and Operator overloading functions.

22.  Consider a class network at drawn below. Define all the four classes and write a program to create, update and display the information contained in the master objects. Write constructors, destructors and Operator overloading functions where applicable.

                                                                                
POLYMORPHISM

23. Define a Employee class with class members as ID, name and salary. Define a member function “greater” which takes one parameter (object of class Employee) as function argument. The function should compare the salary of two Employees and return the object whose salary is greater. Achieve the above using “this” pointer.


24. Define a class shape with 2 data members to store length and height. Define member functions get_data() and display_area(). Display_area() should be virtual function. Define 2 derived classes from shape, triangle and rectangle which redefine display_area() for their own specific area calculation.

25. Extend the above program to calculate are of a circle by introducing a new derived class called circle. The get_data() function in the shape class can be modified by taking default value for the second parameter.

FILE HANDLING

26.  Accept 3 file names as command line arguments. The first 2 are input files in which first file has to be created as a float file and the second file has to created as a string file. Merge the contents of these 2 files into the 3rd file. It should be one integer from the first file followed by one line from the second file. Display the merged file.
Design a user-defined manipulator to display the output for float values as
a) 10 column width
b) Right-Justified
c) Two digit precision
d) Filling unused space with ‘*’
e) Trailing zeros shown
f) Show sign for positive values

27.  Use the class Employee as defined above. Get the details of employee into array of Employees. Store the employees in a file (Employee.txt). Provide the following menu options
a. Get the record by specifying the name.
b. Get a random record by specifying the ID.
c. Get a record by specifying the record number.
d. Update salary of an employee by 10%

EXCEPTION HANDLING

28. Create a class Stack storing stack of integers. Use exception handling to deal with situation of overflow and underflow

29. Write a program to compute square root of a number. If the number is negative, a user defined exception my_sqrt() should be raised

Function Template

30. Write a function to reverse the elements of an array. The function should be a template which can operate on any type of data. Invoke the reverse function for arrays with different data types from main().

31. Define a simple user defined class with one integer data member. Write an explicit specialized function template for the reverse function which will reverse an array containing elements of this user defined class

Class Templates

32. Write a class template to contain a sorted array. The class should have addElem and deleteElem functions. While adding elements to the array, ordering should be maintained.Also duplicate entries should not be allowed. This class should be able to store elements of all data types including user defined types.

33. Define a simple user defined class with one integer data member. Perform array operations on elements of this class using the sorted array class. 
STL

34. Write a program to store and display Employee objects in a list using LIST container

35. Create a vector with even numbers and a list with odd numbers. Merge two sequences of numbers into a vector using algorithm merge(). Display the contents of vector.

EXTRA QUESTIONS:

Q1.An electricity board charges the following rates to domestic users to discourage large consumption of energy:
For the first 100 units   -  60P per unit
For next 200 units        -  80P per unit
Beyond 300 units          -  90P per unit
All users are charged a minimum of Rs. 50.00. If the total amount is more than Rs. 300.00 then an additional surcharge of 15% is added.
Write a program to read the names of users and number of units consumed and print out the charges with names.