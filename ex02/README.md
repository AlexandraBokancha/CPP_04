**abstract classes**

pure virtual function (virtual = 0) : no implementation;
-the class will have a missing behavior; 
-it can't be instantiated (creation of a new instance of the class);
- derived class have to override that function;
- an abstract class can have a constructor;

**interface** 

-no attributes;
-it does not have an implementation of any of its methods;
-it can be considered as a collection of method declarations;
-it can be simulated by making all methods pure virtual;
-we can think of Interface as a header files in C++;