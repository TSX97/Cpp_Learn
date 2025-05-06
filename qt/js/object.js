const user = {
  name: "dima",
  age: 15,
  lang: "ruby",
  self() {return this}
}

function Print_Info(){
  for(let key in this){
    console.log(this[key])
  }
  return;
}

user.f = Print_Info
user.f()

console.log(user.self()) //ахуеть я не знал что это реально просто map с функциями
