function Accumulator(cnt_start){
  this.value = cnt_start
  this.read = function(n){this.value += n}
}

let acc = new Accumulator(0)
let print = (num) => {acc.read(num); 
   console.log(acc.value)} //впадлу было писать много лишний раз
print(4)
print(3)
print(-5)
