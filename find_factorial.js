function abc(n) {
    var x = 1;
    while (n > 0) {
        x = x * n;
        n = n - 1;
    }
    return x;

}

console.log(abc(3));