console.log("if else ");

let temperature=29;
if(temperature<=20){
    console.log("winters");
}
else{
    console.log("summers");
}

// eleigible to vote or not 
let age=20;

if (age>=18){
    console.log("The person is eligible for voting ");
}else{
    console.log("Person is not eligible for voting ");
}

// check marks for students 
//if 90> then a+
// 75 to 89=a
//65 to 74=b
//55 to 64=c
//35 to 54=d
//35< fail

let marks=prompt("Enter students marks ");
if (marks>=90){
    console.log("Student got A+");
}else if (marks>=75){
    console.log("Student got A");
}else if (marks>=65){
    console.log("Student got B");
}else if (marks>=55){
    console.log("Student got C");
}else if (marks>=35){
    console.log("Student got D");
}else {
    console.log("Student got Failed");
}



// check the leap year 

var year=prompt("Enter year :");
if (year%4==0 && year%100!=0 || year%400==0){
    console.log("is leap year")
}else {
    console.log("Year is not");
}
//shortcut condition method 
let result= ((year%4==0 && year%100!=0 || year%400==0))? "Leap Year ": "Not a leap year ";


//2 electricity bill calculator 
// first 100 unit = 5rs per unit 
// next 100 unit(101-200 = 8 rs per unit)
//above 200=10rs per unit 

let unit= prompt("Enter Unit");
let bill;
if (unit>200){
    bill=unit*10;
    console.log("bill is",bill);
}else if(unit>100 && unit<=200){
    bill=unit*8;
    console.log("bill is ",bill);
}else{
    bill=unit*5;
    console.log("bill is ",bill);
}
//shortcut
let unit2=prompt("Enter unit");
let rate=unit2>200?10 : (unit2>100?8:5);
let bill2=unit2*rate;
console.log("bill is",bill2);



// traingle classifier 
let a = Number(prompt("Enter side a:"));
let b = Number(prompt("Enter side b:"));
let c = Number(prompt("Enter side c:"));
if (a+b>c && b+c>a && a+c>b){


if (a===b && b===c){
    console.log("Equilateral triangle ");
}else if(a===b || b===c || a===c){
    console.log("two side are equal Isosceles triangle ")
}else{
    console.log("All side are different ");
}

}else{
    console.log("Not a triangle ");
}