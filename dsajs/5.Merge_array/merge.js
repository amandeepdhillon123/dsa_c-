
let data1 =[1,2,3,4]

let data2=[5,6,7,8]

let data3=[]

for(i=0;i<data1.length;i++)
{
    data3[i]=data1[i]
}
for(j=0;j<data2.length;j++)
{
    data3[data1.length+j] = data2[j]
}

console.log(data3)

// inbuilt method 

let data4=[...data1,...data2]

console.log("inbuilt method " + data4)