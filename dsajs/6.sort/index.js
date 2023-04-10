// let numbers = [0, 1 , 6, 4, 10, 32, 30 ];
// numbers.sort( function( a , b){
  
//     console.log(a > b)
//     // console.log(b)
// });

// console.log(numbers);

// let employees = [
//     {name: 'John', salary: 90000, hireDate: "July 1, 2010"},
//     {name: 'David', salary: 75000, hireDate: "August 15, 2009"},
//     {name: 'Ana', salary: 80000, hireDate: "December 12, 2011"}
// ];
// employees.sort(function (x, y) {
//     return x.salary - y.salary;

//     // return x.name- y.name;
// });

// console.table(employees);

let employees = [
    {name: 'John', salary: 90000, hireDate: "July 1, 2010"},
    {name: 'David', salary: 75000, hireDate: "August 15, 2009"},
    {name: 'Ana', salary: 80000, hireDate: "December 12, 2011"}
];
employees.sort(function (x, y) {
    // return (x.salary - y.salary;

    // return x.name- y.name;

   
    let a = x.name.toUpperCase(),
    b = y.name.toUpperCase();
return a == b ? 0 : a > b ? 1 : -1;

  
});

console.table(employees);