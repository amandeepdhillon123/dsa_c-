
// let data =[1,2,3,4,5,7]

// 1. problem

// console.log(data.length)



// for(let i=0; i<data.length-1; i++)
// {    
//     // traversing element 
//     console.log(data[i])

//     // accessing element 

//     if( data[i] == 4)
//     {
//         console.log("amandeeep")
//     }
// }


// problem 2.   insert element 


// let data =[1,2,3,4,5,6]
// let pos=4;

// let ele =77;

// for( let i=data.length-1; i>=pos; i--)
// {
   
//     if(i >= pos)
//     {
//        data[i+1] = data[i]

//        if(i== pos)
//        {
//         data[i] = ele
//        }
//     }

   
// }

// console.log(data)



//   problem 3

// let data =[1,2,3,4,5,6]
// let pos=4;

// let ele =77;

// for( let i=pos; i<data.length-1; i++)
// {
    
//     data[i]=data[i+1]

   
// }
// data.length= data.length-1

// console.log(data)

// 4.seracrhing



let data=[1,2,3,77,5,6,7];

let pos = 77;

let index= undefined;

   for( let i=0; i<data.length; i++)
   {
        if(data[i] == pos)
        {
            index = i
        }
   }

   console.log(index)





