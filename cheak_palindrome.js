function palindrome(x) {
    var temp=x;
    var b = 0;
    while (x > 0) {
        b = b * 10 + x % 10;
        b=Math.floor(b);
        console.log(b);
        x = x / 10;
        x = Math.floor(x);
    }

    if (b == temp) {
        return true;
    }
    else {
        return false;
    }
}

var x = 121;
console.log(palindrome(x));