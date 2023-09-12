let todo=[];
let req=prompt("Enter your request");

console.log(req);
while (true){
    if(req=="list"){
        console.log("-----------------------");
        for(i of todo){
            console.log(i);
        }
        console.log("-----------------------");
    }
    
    else if(req=="add"){
        let item=prompt("Enter your task:");
        todo.push(item);
        console.log("task added");
    }
    else if(req=="delete"){
        let ind=prompt("Enter the task index you want to delete:");
        todo.splice(ind,1);
        console.log("task deleted");
    }
    
    else if(req=="quit"){
        break;
    }
    else{
        alert("Wrong request")
    }
    req=prompt("Enter your next request :");
}
