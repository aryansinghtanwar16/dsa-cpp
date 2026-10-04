/*  var ->  multiple declaration and assignment possible
    let->   cannot redeclare same variable unlike var


    undefine will come if we console variable from var 
    but error will come if we console before defining input from let 
    ex 
    console.log(a);
    var a=80
    ->  undefine will come 
    ->error will come in let 


    CONSTANT const
    assignment is necessary
    updation not possible 


    Var - Global Scope  varibale (can be access anywhere in the code )
    Let and Const - are block scope variable  (limited to blocks only )


    DATA types
    two types of data types 
    1-> Primitive data types 
    2->Reference /non primitive data types 

    1- Primitive data types
    1- String 
    2- Number 
    3- Boolean
    4- Undefined 
    5- null
    6- bigInt 
    7- Symbol()

    2- Reference Types 

    1- Array
    2- Objects 
    3- Functions  
    4- Set
    5- Date
    6- Map
    

    we can check the data type by 
    console.log(typeof varname )



    // REFERENCE DATA TYPE--

    Array --
    let a =[10,20,30,40]
    let arr=[ 10,'h', true,null]


    OBJECTS 

    {key:value}
    {
    name: 'ravi';
    age :17;
    add : saket ;
    }



    FUNCTIONS 
    kinda resusable block of code that perform specific task when called 

    syntax 
    function greet(){
    
    }

    // parameters and arguments (function)



    JAVASCRIPT --> GEC (Global Execution Context)
    all js code runs in execution context
    two things 
    1-> memory (also known as variable enviroment )(how its assign)    2->code (thread of execution )
         key:value                                                    code will execute 
         ex->                                                         its value will replace the undefine in memory 
         let a=10                                                     executes 
         a:10(in js memory)                                      line by line code executes also known as synchronous(line by line execution) or single threaded JS
         
         ex2->
         functions abcd(){
         10+20
         }
         =abcd:{}

        by default undifine comes 
        in memory 

 after execution code will push in CallStack


        GLOBAL EXECUTION CONTEXT-->

        in call stack GEC presents at bottom 
        ex 
        var num=10

        function sum(n1,n2){
        var result =n+n
        return result ;
        }
         var sum1 = sum(num,20);
         var sum2= sum(20,50);

         now whole explaination 
         1->in first phase all variables and functions will store in MEMORY 
         num= undefined
         sum:{}
         sum1=undefined
         sum2-undefined

         now in code phase 
         num=10 (executed)
         now in code phase therell be one more ECEXUTION CONTEXT for Functionin 
         in code btw 
         memory                     code
         n1:undefined                n1:10
         n2:undefined                n2:20
         result:undefined            result:30

         memory phase also known as variable enviroment 
         code phase also known as Thread of execution 



         


*/

var name="Sheriyans ";
console.log(typeof name);
console.log(name);

var number =355;
console.log(typeof number);
console.log(number);

var flag =true;
console.log(typeof flag);
console.log(flag);

var a;
console.log(typeof a);
console.log(a);


var b=null;
console.log(typeof b);
console.log(b);

var bigC= 6849039093093;
console.log(typeof bigC);
console.log(bigC);

var bigD=53839839n;
console.log(typeof bigD);
console.log(bigD);

let z=[10,20,"hello",null, {},]
console.log(z);


// objects 

let obj ={

    name: "Ravi",
    age:60,

}
console.log(typeof obj);

// function ---

function greet(){

    console.log("hey wassup..");
}
// call a function 
greet();
greet();
greet();


// parameters and arguments 
function sum(num1 , num2) {// parameters 

    console.log(num1+num2);

}
sum(40,70 ) //arguments  );
sum(40,-10 );
sum(40,-40 );
