function isprime(x) {
    var prime = true;
    var count = 0;

    if (x <= 1) {
        return false;
    }
    for (let index = 2; index <= Math.floor(x / 2); index++) {
        if (x % index == 0) {
            return false;
        }

    }

    return true;
}

for (let index = 2; index < 10; index++) {
    if (isprime(index)) {
        console.log(index);
    }


}