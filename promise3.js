let p1 = new Promise((resolve, reject) => {
    setTimeout(() => {
        // resolve("Value 1");
        reject(new Error("Error"));

    }, 100);
});
let p2 = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve("Value 2");
        // reject(new Error("Error"));
    }, 2000);
});

let p3 = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve("Value 3");
    }, 3000);
});

// !to Get result of all promice at once 
// !Retuan array of promises values
// ! if there is error in any promice then it dosent return any promice
// let promiceall=Promise.all([p1, p2, p3]);

// ! Retuen only value of promise will be resolved or dosen't  give the error
// ! it print ans with error message
// let promiceall=Promise.allSettled([p1, p2, p3]);

// !  Which will be solved first it gives only that promise
// ! If first is error then it prints the error
// let promiceall=Promise.race([p1, p2, p3]);

// ! it is same as race which will executed first then it shows 
// ! it dosen't show the method which is not resolved
// ! only return only one promise
let promiceall=Promise.any([p1, p2, p3]);





promiceall.then((value)=>{
    console.log(value);
})

// !