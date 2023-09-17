var p = new Promise((resolve, reject) => {
    console.log("resolving p1");
    setTimeout(() => {
        resolve(56);
    }, 5000);
})

p.then((value) => {
    console.log(value);
    let p2 = new Promise((resolve, reject) => {
        console.log("resolving p2");
        setTimeout(() => {
            resolve(56);
        }, 5000);
    });
    return p2
}).then((value) => {
    console.log("we are done");
    return 2;
}).then((value) => {
    console.log("Last promise " + value);
});


//! Hear only value of p1 is printed
// var p = new Promise((resolve, reject) => {
//     console.log("resolving p1");
//     setTimeout(() => {
//         resolve(56);
//     }, 5000);

//     let p2 = new Promise((resolve, reject) => {
//         console.log("resolving p2");
//         setTimeout(() => {
//             resolve(57);
//         }, 5000);
//     });
//     return p2;
// }).then((value) => {
//     console.log(value);
// });

