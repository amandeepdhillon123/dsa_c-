//   accessing element and travesing element 
/*
let data =[1,2,3,4,5,6,7,8,9]
console.log(data)
let pos=3;

for(let i=0; i<data.length; i++)
{   
    // traversing element 
    console.log(data[i]);

    // accessing element 
console.log(data[pos])
  
}

*/

// insertion an element 

/*
let data =[1,2,3,4,5,6,7,8,9];

let pos=3;
let ele=55;

for(let i=0; i<data.length-1; i++){
    if(i >= pos)
    {
        if(i == pos)
            {
                data[i]=ele;
            }
        // console.log(data[i])
        // data[i]=data[i+1]
            // console.log(data)

            
    }
}

console.log(data);

*/

// deletion 

/*

let data =[1,2,3,4,5,6,7,8,9];

let pos=3;
let ele=55;

for(let i=0; i<data.length-2; i++){
    if(i >= pos)
    {
      
        data[i]=data[i+1]
            // console.log(data)

            
    }
}
// data.length= data.length-1

console.log(data);

*/
// merging

let data1=[1,2,3,4];
let data2=[5,6,7,8,9];
let data3=[];

for(let i=0; i<data1.length; i++)
{
    data3[i]=data1[i]
}
for(let i=0; i<data2.length; i++)
{
    data3[data1.length + i]=data2[i]
    // data3[i]=data=data2[i]
}
console.log(data3);



