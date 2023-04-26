
//   accessing and traversing element 
// let data=[ 1,2,3,4,5,6,7,8]
// for( let i=0; i<data.length; i++)
// {
//     console.log(`${i} is ${data[i]}`)
// }

//  inserting element 

// let data=[ 1,2,3,4,5,6,7,8];

// let ele=66;
// let pos =4;

// for( let i = data.length-1; i >= 0; i--)
// {
//       if(i>=pos)
//       {
//         data[i+1]=data[i]
//         if(i==pos)
//         {
//             data[i]=ele
//         }
//       }
     
// }

// console.log(data)

// deletion of element 

// let data=[ 1,2,3,4,5,6,7,8];

//  let pos =4;

// for( let i =pos; i <data.length-1; i++)
// {
      
//     data[i]=data[i+1]
// }

// data.length= data.length-1

// console.log(data)

// searching of en element 



let data=[ 1,2,5,4,5,6,7,8];

let ele=5;

// let arr=[];
let bag='';

// let index = undefined;

for(let i=0; i<data.length; i++)
{
    if(data[i]===ele)
       bag= bag + ` ${ele} of index value is ${i} --`
}

console.log(bag)

// console.log(index)


