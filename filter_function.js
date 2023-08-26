var con = [5, 2, 3, 4, 5];

const fun = function (x) {
    return x<5?true:false;
}
const output = con.filter(fun);

console.log(output);