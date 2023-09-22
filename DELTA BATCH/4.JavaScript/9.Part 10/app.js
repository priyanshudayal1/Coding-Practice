
//Mouse Events
// let btn=document.querySelector("button");
// console.dir(btn);
// // btn.onclick= ()=>{
// //     console.log("button was clicked")
// // }

// function click(){
//     alert("Hello");
// }

// btn.onclick=click ;

// btn.addEventListener("click",()=>{
//     console.log("button clicked ")
// })


// let btn=document.querySelector("button");
// btn.addEventListener("click",function(){
//     console.log("button was clicked");
// })

//Keyboard Event
// let input=document.querySelector("input");
// input.addEventListener("keydown",function(){
//     console.log("key was pressed");
// })


//Form Events
// let form=document.querySelector("form");
// form.addEventListener("submit",function(event){
//     event.preventDefault();
//     let inp=document.querySelector("#username");
//     let pass=document.querySelector("#pass");
//     console.dir(inp);
//     console.log(inp.value);
//     console.log(pass.value);
//     alert(`Hello ${inp.value} your password is : ${pass.value}`)
      
// })
let form=document.querySelector("form");
form.addEventListener("submit",function(event){
    event.preventDefault()})
let usr=document.querySelector("#username");
usr.addEventListener("change",function(event){
    event.preventDefault();
    console.log("input changed");
    console.log(this.value)
})

usr.addEventListener("input",function(event){
    event.preventDefault();
    console.log("input Event");
    console.log(this.value)
})