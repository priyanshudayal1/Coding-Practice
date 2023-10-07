//Axios Library
let url="https://catfact.ninja/fact";
let url2="https://dog.ceo/api/breeds/image/random";

async function getFacts(){
    try{
        let res=await axios.get(url);
        return res.data.fact;
    }
    catch(r){
        return "No fact found";
    }
}

let btn=document.querySelector("button");

btn.addEventListener("click",async ()=>{
    let result=await getFacts();
    console.log(result);
    p.innerText=result;
})

let p=document.getElementById("fact");
console.log(p);

async function getImage(){
    try{
        let res=await axios.get(url2);
        return res.data.message;
    }
    catch(r){
        return "No image found";
    }
}
let p2=document.querySelector("#dog");
let btn2=document.querySelector(".btn2");

btn2.addEventListener("click",async ()=>{
    let res=await getImage();
    p2.src=res;
})


let url3="https://icanhazdadjoke.com/slack";

async function getJokes(){
    try{
        const config={headers:{Accept:"application/json"}};
        let res=await axios.get(url3,config);
        console.log(res.data);
    }
    catch(e){
        console.log("Error: ",e);
    }
}



//Activity usign query string 
let url4="http://universities.hipolabs.com/search?name=";

let btn3=document.querySelector("#clg");
btn3.addEventListener("click",async ()=>{
    let country=document.querySelector("input").value;
    let data=await getColleges(country);
    console.log(data);
    show(data);
})

function show(data){
    list.innerText="";
    for(col of data){
        console.log(col.name);
        let li=document.createElement("li");
        li.innerText=col.name;
        ul.appendChild(li);
    }
}

let ul=document.querySelector("#list");



async function getColleges(country){
    try{
        let res=await axios.get(url4+country);
        return res.data;
    }catch(e){
        console.log("Error: ",e);
        return [];
    }
}