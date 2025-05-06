function User(name, age, lang) {
  this.name = name
  this.age = age
  this.lang = lang
  this.self = function() {return this;}
}

user1 = new User("sanya", 16, "c++")
console.log(user1.self())
