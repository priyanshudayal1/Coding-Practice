// function savetoDb(data,success,failure){
//     let internetSpeed=Math.floor(Math.random*10)+1;
//     if (internetSpeed>4){
//        success();
//     }
//     else{
//         failure();
//     }
// }

// savetoDb(
//     "Piyush Dayal",
//     ()=>{
//     console.log("Your data was saved: ");
// },
// ()=>{
//     console.log("Weak connection.data not saved");
// }
// );


//Promises
// function savetoDb(data){
    
//     return new Promise((resolve,reject)=>{
//         let internetSpeed=Math.floor(Math.random*10)+1;    
//         if (internetSpeed>4){
//             resolve("success: data was saved");
//         }
//         else{
//             reject("failure: data was not saved ");
//         }
//     })
// }


// let req=savetoDb("apna college");
// req 
//   .then((result)=>{
//     console.log("data 1 saved promise accepted : ",result);
//     savetoDb("hello world")
//      .then((result)=>{
//         console.log("data 2 saved ",result);
//     })
//   })
//   .catch((error)=>{
//     console.log("promise was rejected error is : ",error);
//   })


// let h1=document.querySelector("h1");

// function changeColor(color,delay){
//     return new Promise((resolve,reject)={
//         setTimeout(() => {
//             h1.style.color = color;
//             resolve("colour changed");
//         }, delay);
//     });
// }

