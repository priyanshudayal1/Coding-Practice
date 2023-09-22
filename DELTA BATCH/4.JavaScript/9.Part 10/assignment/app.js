// let btn=document.querySelector("button");
// btn.addEventListener("click",function(){
//     btn.style.backgroundColor="green";
//     btn.style.color="white";
//     console.log("button was clicked")
// })
let h2=document.querySelector("h2");
let inp=document.querySelector("input");
inp.addEventListener("input",function (){
    console.log(inp.value)
    // if (inp.value in [..."abcdefghijklmnopqrstuvwxyz"] || inp.value in [..."ABCDEFGHIJKLMNOPQRSTUVWXYZ"]){
        h2.innerText=this.value;
})