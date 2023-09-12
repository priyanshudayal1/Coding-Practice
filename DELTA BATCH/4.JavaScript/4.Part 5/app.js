const post={
    username:"@piyushdayal108",
    content:"This is my first post",
    likes:150,
    reposts:5,
    tags:["@apnacollege","@elonmusk"]
};

console.log(post.username);
console.log(post.likes);
console.log(post["content"]);

post.likes=200;
console.log(post.likes);


let n=(Math.random())*100;
let intn=parseInt(n)+1;
console.log(intn);

