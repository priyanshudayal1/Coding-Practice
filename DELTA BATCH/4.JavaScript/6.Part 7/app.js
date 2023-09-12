// console.log("Hi there,");
// setInterval(() => {
//     console.log("Apna College");    
// }, 4000);

// console.log("Welcome to :")

// clearInterval();

let sq= (n)=>{
    return (n*n);
};


console.log(sq(5));

console.log(sq(4));

// setInterval(() => {
//     for(let i=0;i<5;i++){
//         console.log("Hello World")
//     }
// }, 2000);


const arrayAverage=(arr)=>{
    let sum=0;
    for(let i=0;i<arr.length;i++){
        sum=sum+arr[i];
    }
    let avg=sum/(arr.length);
    return avg;
}

let arr=[3,3,3];
console.log(arrayAverage(arr));