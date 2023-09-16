var str = "harsh Vaghasiya";
var arr = str.split(" ");
console.log(arr);
var a = arr.reduce(function (sum, ele) {
    if (sum.length < ele.length) {
        return ele;
    }
    else {
        return sum;
    }

}, "");

console.log(a);
