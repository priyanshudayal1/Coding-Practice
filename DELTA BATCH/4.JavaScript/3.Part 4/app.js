//Q1
let arr=[1,2,3,4,5,6,2,3];
let num=2;
arr.splice(num,2);
console.log(arr);


//Q2
let n=287152;
let c=0;
while (n!=0){
    n=parseInt(n/10);
    c++;
}
console.log(c);

//Q3

let numb=287152;
let sum=0;
let ld;
while(numb!=0){
    ld=numb%10;
    sum=sum+ld;
    numb=parseInt(numb/10);
}
console.log("The sum of the digits is :",sum);


//Q4
let fact=1;
let nn=5;
for(let i=1;i<=nn;i++){
    fact=fact*i;
}
console.log(fact);

//Q5
let arr2=[1,10,2,30,50,100,99,1460,50,2,3,15];
let l=arr[0];
for(let i=1;i<arr2.length;i++){
    if(arr2[i]>l){
        l=arr2[i];
    }
}

console.log("The largest number in the array is :",l);


let student={
    name:"Piyush Dayal",
    age:19,
    city:"Jabalpur"
};
console.log(student);
console.log(student);