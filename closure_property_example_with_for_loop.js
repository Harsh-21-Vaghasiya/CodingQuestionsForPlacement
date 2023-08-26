// Print the same value for i in using the var variable because it is globle 
// variable and each time it passed into closure then it pass the reference toof variable a 
// not send the value so for each loop variable is same and changing the value each 
// time while loop execute so it or also when settime out function run that time for 
// loop is executed fully so each time value is in variable is 6

// function a() {
//     for (var i = 0; i < 6; i++) {
//         setTimeout(() => {
//             console.log(i);
//         }, i * 1000)
//         console.log("Hello harsh");
//     }

//     console.log("hello world");
// }

// a();


// to print different value each at time we can use let varuable because let is the block scope variable
// and the for each time when loop execute so it or also when settime out function run that time for that
// each time new block is created so value is diffrent for the all diffrent block

// function a() {
//     for (let i = 0; i < 6; i++) {
//         setTimeout(() => {
//             console.log(i);
//         }, i * 1000)
//         console.log("Hello harsh");
//     }

//     console.log("hello world");
// }

// a();


// to print the diffrent value  using var variable we can use the set time out function in side the onother function 
// so vale of each var is diffrent because of the function local block

function a() {
    for (var i = 0; i < 6; i++) {
       function abc(i){
            setTimeout(() => {
                console.log(i);
            }, i * 1000)
        }
        abc(i);
        console.log("Hello harsh");
    }

    console.log("hello world");
}

a();
