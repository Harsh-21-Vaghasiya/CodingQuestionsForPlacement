function reverse(x) {
    var b = "";
    for (let i = x.length - 1; i >= 0; i--) {
        b = b + x[i];
    }
    return b;


}

var x = "Harsh Vaghasiya";
console.log(reverse(x));