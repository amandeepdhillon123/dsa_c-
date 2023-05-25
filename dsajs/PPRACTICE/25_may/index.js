
// accessing and traversing element 

// let data=[1,2,3,4,5,6,7,8];

// let pos =3;

// for(let i=0; i<data.length; i++)
// {
//     console.log(data[i])

//     if(i == pos){
//         console.log("amandeep")
//     }


// }


let data=[1,2,3,4,5,6,7,8];


let newEle=96;
let pos =4;

for(let i=data.length-1; i>=0; i--)
{
     if( i>=pos)
     {
        data[i+1]=data[i]

        if(i == pos)
        {
            data[i]=newEle
        }
     }
}

console.log(data)