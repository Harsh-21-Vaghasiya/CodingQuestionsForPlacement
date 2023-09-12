// (function () {
//     setTimeout(() => console.log(1), 2000);
//     console.log(2);
//     setTimeout(() => console.log(3), 0);
//     console.log(4);
// })();


// let x = {}, y = { name: "Ronny" }, z = { name: "John" };
// x[y] = { name: "Vivek" };
// x[z] = { name: "Akki" };
// console.log(x[y]);


// function runFunc() {
//     console.log("1" + 1);
//     console.log("A" - 1);
//     console.log(2 + "-2" + "2");
//     console.log("Hello" - "World" + 78);
//     console.log("Hello" + "78");
// }
// runFunc();


// let a = 0;
// let b = false;
// console.log((a == b));
// console.log((a === b));

// var x = 23;
// (function () {
//     var x = 43;
//     (function random() {
//         x++;
//         console.log(x);
//         var x = 21;
//     })();
// })();




// console.log(x);
// var x=20;




// let hero = {
//     powerLevel: 99,
//     getPower() {
//         return this.powerLevel;
//     }
// }
// let getPower = hero.getPower;
// let hero2 = { powerLevel: 42 };
// console.log(getPower());
// console.log(getPower.apply(hero2));



// const a = function () {
//     console.log(this);
//     const b = {
//         func1: function () {
//             console.log("Second" + this);
//         }
//     }
//     const c = {
//         func2: () => {
//             console.log("Thired" + this);
//         }
//     }
//     b.func1();
//     c.func2();
// }
// a();





// const b = {
//     name: "Vivek",
//     f: function () {
//         var self = this;
//         console.log(this+this.name);
//         (function () {
//             console.log("Second"+this+this.name);
//             console.log("third"+self+self.name);
//         })();
//     }
// }
// b.f();




// (function (a) {
//     return (function () {
//         console.log(a);
//         a = 23;
//     })()
// })(45);



// function bigFunc(element) {
//     let newArray = new Array(700).fill('♥');
//     return newArray[element];
// }
// console.log(bigFunc(599));
// console.log(bigFunc(670));
// console.log(bigFunc(500)===bigFunc(670));



// function randomFunc() {
//     for (var i = 0; i < 2; i++) {
//         setTimeout(() => console.log(i), 1000);
//     }
// }
// randomFunc();



//! Write a function that performs binary search on a sorted array.

// const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];


// function binaryserach(arr, length, key) {
//     var first = 0;
//     var last = arr.length;
//     // var mid = (first + last) / 2;
//     while (first<last) {

//         var mid = Math.floor((first + last) / 2);
//         // console.log(mid);

//         if (arr[mid] == key) {
//             // console.log(mid);
//             return mid;
//         }
//         else if (arr[mid] > key) {

//             last = mid - 1;
//         }
//         else {
//             first = mid + 1;
//         }
//     }

// }


// var a=binaryserach(arr, arr.length, 3);
// console.log("index of key is "+a);




//!  Implement a function that returns an updated array with r right rotations on an array of integers a .

// function right(arr, x) {
//     for (var j = 0; j < x; j++) {
//         let lastElement = arr[arr.length - 1];

//         for (let i = arr.length - 2; i >= 0; i--) {
//             arr[i + 1] = arr[i];
//         }
//         arr[0] = lastElement;


//     }
//     return arr;
// }


// let array = [1, 2, 3, 4, 5];
// console.log(right(array, 2));


//!  Implement a function that returns an updated array with r left rotations on an array of integers a .

// function left(arr, x) {
//     for (var j = 0; j < x; j++) {
//         let first = arr[0];

//         for (let i = 0; i <arr.length-1; i++) {
//             arr[i] = arr[i+1];
//         }
//         arr[arr.length - 1] = first;


//     }
//     return arr;
// }


// let array = [1, 2, 3, 4, 5];
// console.log(left(array, 2));


//!  Cheak to string is anagram or not

// function cheak(str1, str2) {

//     var a = str1.toLowerCase().split("").sort().join();
//     var b = str2.toLowerCase().split("").sort().join();

//     if (a === b) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }
// var str1 = "harsh";
// var str2 = "hrahs";
// console.log(cheak(str1, str2));





// to find vovels in a string

// hear you have to pass each charecter if you pass whole array then it cheak for the all elements in arr
// using loop you can cheak for all vovels
// var str = "harsh";
// var arr = ['a', 'e', 'i', 'o', 'u'];
// var ans = str.includes('a');
// console.log(ans);


// const b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// for (let i = 0; i < 10; i++) {
//     setTimeout(() => console.log(b[i]), 1000);
// }
// for (var i = 0; i < 10; i++) {
//     setTimeout(() => console.log(b[i]), 1000);
// }


//! How to convert Object in to array?

// let obj = { id: "1", name: "user22", age: "26", work: "programmer" };
// console.log(Object.keys(obj));
// console.log(Object.values(obj));
// console.log(Object.entries(obj));
