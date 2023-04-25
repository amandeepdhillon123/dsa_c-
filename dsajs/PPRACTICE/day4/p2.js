let data=[20,30,40,55,66,70];

// console.log(data)

// insert element 
let element=99;2
let pos =4;

for(var i=data.length-1;  i>=0; i--)
{
     if(i >=pos)
     {
        data[i+1]=data[i]
        if(i==pos)
        {
            data[i]= element;
        }
     }
}
console.log(data)