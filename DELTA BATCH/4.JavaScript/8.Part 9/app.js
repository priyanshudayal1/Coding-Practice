// // let smallImages=document.getElementsByClassName("oldImg");


// // for(let i=0;i<smallImages.length;i++){
// //     console.log(smallImages[i]);
// // }

// // let a=document.getElementsByTagName(p);
// // console.log(a);

// // console.dir(document.querySelector("h1"));
// // console.dir(document.querySelector("div a"));
// // console.dir(document.querySelectorAll("p"));

// let a=document.querySelectorAll(".pubInfo a");
// for(let i=0;i<a.clientHeight;i++){
//     a[i].style.color="yellow";

// }



let para1=document.createElement("p");
para1.innerHTML="Hey I am red!";
document.querySelector("body").append(para1);
para1.classList.add("red");


let h3=document.createElement("h3");
h3.innerHTML="I'm blue H3!";
document.querySelector("body").append(h3);
h3.classList.add("blue");



let div=document.createElement("div");
document.querySelector("body").append(div);
div.classList.add("div");
let h1=document.createElement("h1");
let p=document.createElement("h1");
h1.innerHTML="I m in a div";
p.innerHTML="ME TOO!";
document.querySelector("div").append(h1);
document.querySelector("div").append(p);

let btn=document.createElement("button");
btn.innerHTML="Click me";
document.querySelector("body").append(btn);

btn.setAttribute("placeholder","username");
btn.setAttribute("id","btn");

let btq=document.querySelector("button");
let btnid=document.getElementById("btn");
btq.style.backgroundColor="blue";
btnid.style.color="white";

let head=document.createElement("h1");
document.querySelector("body").prepend(head);
head.innerHTML="DOM Practice";
head.classList.add("purple");

let p1=document.createElement("p");
p1.innerHTML="Apna College <b>Delta</b> Practice";
document.querySelector("body").prepend(p1);