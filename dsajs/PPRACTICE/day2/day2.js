// accessing data and traversing data
/*
let data =[1,2,3,4,5,6,7,8,9]

let pos=3;

for(i=0; i<data.length; i++)
{
    // console.log(data[i])
    console.log("---->>" + data[pos])
}
*/
//  insertion an element

let data = [1, 2, 3, 4, 5, 7, 8];
let pos = 3;
let ele = 777;

for (let i = 0; i < data.length - 1; i++) {
 
    if (i == pos) {
      data[i] = ele;
    }
  
}
console.log(data);
