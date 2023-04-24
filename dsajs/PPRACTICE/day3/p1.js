

let data= [1,2,3,4,5,6,7]

let pos =2;

let ele = 70;


for(let i=data.length-1;  i>=0; i--)
{
   if( i>=pos )
   {

    data[i+1]=data[i]
    if( i== pos)
    {
        data[i] =ele;
    }
   
   }
}

console.log(data)