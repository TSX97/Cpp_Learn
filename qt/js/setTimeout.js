function nothing(){return;}
function wait(sec) {
  setTimeout(nothing, sec)
}
for(let i = 0; i < 10; i++){
  wait(1000)
  console.log(i)
}