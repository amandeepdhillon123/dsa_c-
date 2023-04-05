

let data=[1,2,3,55,66,,77,88,99,66]

console.log(data.indexOf(66))

let search= 66;;
let index= undefined;
let sum=[]

for(let i=0;i<data.length;i++)
{
    if(data[i]===search)
    {
        index=i
        sum.push(data[i])
        
        console.log( "number value is " + data[i])
        console.log("index value is " +index)
    }
}
console.log(sum.length)

for(let j=0; j<sum.length-1;j++)
{
    // console.log(sum[])
}