let data= [20,30,40,55,60]

  let pos =2;
for(let i=2; i<data.length-1; i++)
{
    console.log(data[i])
    data[i]=data[i+1]
}
data.length=data.length-1 // 
console.log(data)