// ! destructureing and spread operator
//! ... is used to copy the array in destinations 


// var arr = [1, 2, 3,4,5,6,7,8];
// var [a, b, , ...arr] = arr;

// console.log(a,b,arr);



// !

// var { a, b } = { a: 1, b: 2 };
// console.log(a, b);

// 1 to conver array to object

// var arr = [1, 2, 3, 4, 5, 6, 7, 8];
// var obj = { ...arr };

// console.log(obj);
// console.log(typeof obj);

// function abc(a, b,) {

// }
// var arr = [1, 2];
// abc(arr[0],arr[1])   ==   abc(...arr);   both are same 


var obj = {
    name: "harsh",
    age: 20
}

console.log({ ...obj });
console.log({ ...obj, name: "vagha" });
console.log({ name: "vagha", ...obj });

