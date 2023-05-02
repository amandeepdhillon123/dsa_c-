



// console.log(data)

// let pos =4;

// for( let i=0; i<data.length; i++)
// {
//     // acessing elements 

//    if(data[i] == pos)
//    {
//     console.log(`=============== ${data[i]} ===========`)
//    }

// //    traversing

//   console.log(data[i])

// }

// probelm 2

let data=[ 1,2,3,4,5,6,7]
 
let pos =4;
let ele=77;
for(let i=data.length-1; i>=0; i--)
{

    console.log(data[i])

    if(i >= pos)
    {
        data[i+1]= data[i]

         i== pos ? data [i] =ele : undefined ;
    }
 
 

}

console.log(data)