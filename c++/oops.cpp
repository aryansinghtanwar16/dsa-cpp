/*
What is Object Oriented Programming

- Oops main focus are on data 
- it binds the data to the functions using it 
- programme- divided into objects 
1 data
2 functions 

CLASS
fundamental unit of OOP
user defined data types
define data/properties & methods/functions


CONSTRUCTOR 
used to initialize an object
this is function which is called when an object is created
same name as class name 
types-
default constru
parameterised
copy


DESTRUCTOR 
function is called when object is deleted 
cannot pass any parameters into 
name-  ~(class_name)


ENCAPSULATION
bindind of methods and variables together into a single unit (class)
also leads to data abstaction (ADT) 

ABSTRACTION
enables us to display only essential info while hiding unncessary details 
eg. pow(x,y)---x^y


INHERITANCE 
a class inherits properties of another class 
A(parent class)--->B(child class)

1- public
-
data and functions can be accesed anywhere in the code 

2-Protected 
-
theyll be accessible in own class, parent class &derived class

3-Private
-
They re accessible only in own class 


Types of INHERITANCE 
1 Single inheritance 
Class A------>classB

2 Multi-level inheritance 
parent class is derived from another class 

3 Multiple  Inheritance 

4 Hierarchical Inheritance 

5 Hybrid Inheritance 



POLYMORPHISM 
=
ability of objects/methods to take different forms 

Function Overloading 
- define a number of functions with same function name they perform differently acc. to arguments passed 


Operator Overloading 


*/
#include<iostream>
using namespace std;

class Fruit {
    public:
    string name;      // it is private until we use public
    string color;
};

class Student{
string name;
int rollno;
};

 class Rectangle {
    public:
        int l;
        int b;

        Rectangle(){ //default constructor
            l=0;
             b=0;   
        }
        Rectangle (int x, int y){ // parametrised
            l=x;
            b=y;

        }

        Rectangle( Rectangle&r) {// copy constructor- initilize object by any other existing object 
            l=r.l;
            b=r.b;
 
        }

        ~Rectangle(){// destructor 
            cout<<"Destructor is called "<<endl;
        }
 };

int main(){

    Fruit apple;     //object 
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" "<<apple.color<<endl;


    Fruit *mango = new Fruit();
    mango->name= "Mango";
    mango->color="Yellow";
    cout<<mango->name<<" - "<<mango->color<<endl;

    Rectangle* r1;
    cout<<r1->l<<" "<<r1->b<<endl;
    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;
    delete r1;

    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
  
  
  
    return 0;
}