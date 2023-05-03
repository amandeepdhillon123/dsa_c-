// deletion  of na element in an array

// let data= [1,2,3,4,5,6];

// let pos =3;

// for(i=pos; i<data.length-1; i++)
// {
//     data[i]=data[i+1]
// }

// data.length = data.length-1

// console.log(data)


// insert element in array 

let data= [1,2,3,4,5,6];

let pos =3;

let ele= 55;

for(i = data.length-1; i>=0; i--)
{
    if(i>=pos)
    {
        data[i+1]= data[i]

        if( i== pos)
        {
            data[i]= ele
        }
    }
}

console.log(data)