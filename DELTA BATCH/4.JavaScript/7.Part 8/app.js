// // let arr=[1,2,3,4,5];
// // arr.forEach(function disp(e){
// //     console.log(e);
// // });

// let arr=[1,2,3,4,5];
// let newArr=arr.map((el)=>{
//     return 2*el;
// });

// console.log(newArr);


// let n=[1,2,3,4,5,6,7,8,9,10];
// let even=n.filter((a)=>{
//     return a%2==0;
// })

// console.log(even);

// let num=[1,2,3,4,56,10,13,30,2,1,4,5];
// let max=0;
// let maxArr=num.reduce((max,el)=>{
//     if(el>max){
//         return el;
//     }
//     else{
//         return max;
//     }
// })

// console.log(maxArr);


let mul10=[10,20,30,40,50];
let result=mul10.every((el)=>{
    if(el%10==0){
        return true;
    }
})

console.log(result);

console.log(...mul10);

console.log(Math.max(...mul10));
