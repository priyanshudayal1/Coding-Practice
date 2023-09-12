// function printPoem(){
//     console.log("twinkle twinkle little star");
//     console.log("How I wonder what you are");
// }

// printPoem();



// function rollDice(){
//     let n=parseInt(((Math.random()*6)+1));
//     console.log("The number on the dice is:",n);
// }

// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();
// rollDice();

function printName(name){
    console.log("Hello ",name);
}

printName("piyush");
printName("ronaldo");
printName("rinshu")

function avg(a,b,c){
    console.log((a+b+c)/3);
}

avg(4,1,5);
avg(3,3,3);

function table(n){
    for(let i=1;i<=10;i++){
        console.log(n," X ",i," = ",i*n);
    }
}

table(5);
table(7);

function sumN(a){
    let sum=0;
    for(let i=1;i<=a;i++){
        sum=sum+i;
    }
    return sum;
}

console.log(sumN(3));
console.log(sumN(10));

function cont(arr){
    let str="";
    for(let i=0;i<arr.length;i++){
        str=str+arr[i];
    }
    return str;
}

console.log(cont(["hi","hello",'go']));