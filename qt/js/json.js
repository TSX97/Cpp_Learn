let user = {
  name: "Pablo",
  age: 16,
  summary: {
    lang: "c++",
    isLinuxUser: true,
    level: "junior",
    tools: ["C++", "Qt", "SQL", "Qml", "Js", "Linux", "Git"]
  }
}
let json = JSON.stringify(user, null, 1)
let user2 = JSON.parse(json)
console.log(json)
json = JSON.stringify(user2.summary, null, 2)
console.log(json)