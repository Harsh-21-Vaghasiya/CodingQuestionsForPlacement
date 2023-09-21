var a = () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("hello");
        }, 2000);
    }

    )
}

var b = () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("world");
        }, 2000);
    }

    )
}

async function abc(a, b) {
    await a();
    await b();
}

// a();
abc(a, b);