let favMov="spiderman";
let guess=prompt("Enter your guess:");
while (guess!=favMov){
    if(guess==favMov){
        console.log("You guess it right");
    }
    else if(guess=="quit"){
        break;
    }
    else{
        guess=prompt("Enter again:");
    }

}

for(i of "Hello"){
    console.log(i);
}