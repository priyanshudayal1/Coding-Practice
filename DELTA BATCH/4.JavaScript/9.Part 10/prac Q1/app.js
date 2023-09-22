let btn=document.querySelector("button")


btn.addEventListener("click",function(){
    let h1=document.querySelector("h1");
    let randomcol=randomColour();
    h1.innerText=randomcol;
    console.log("Colour updated")
    let div=document.querySelector("div");
    div.style.backgroundColor=randomcol;
})

function randomColour(){
    let red=Math.floor(Math.random()*255);
    let green=Math.floor(Math.random()*255);
    let blue=Math.floor(Math.random()*255);
    let colour=`rgb(${red},${green},${blue})`;
    return colour;
}