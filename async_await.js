

async function test() {
    let b = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("this is harsh...");
            console.log("this is harsh...");
        }, 5000);
    });

    // const c = new Promise((resolve, reject) => {
    //     setTimeout(() => {
    //         resolve("this is meet...");
    //         console.log("this is meet...");
    //     }, 5000);
    // });

    // const ab = await c;
    const bc = await b;
};


const chery = () => {

    console.log("this is checkout");
};

const hhhh = async () => {

    // first run the test anfter the test completes then other function run

    // hear first test function run and in that it wait for the 5 seconds after that cheary function call and
    // print the this is cheak out
    let a =await test();
    let b =await chery();

    // if i not write await before the function calling it first print the this is cheak out and after 5 seconds 
    // it print this is harsh
}

hhhh();
// console.log(a);