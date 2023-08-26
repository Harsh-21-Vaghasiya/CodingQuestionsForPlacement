var con = [5, 2, 3, 4, 5];

const fun = function (x) {
    return x * 2;
}
const output = con.map(fun);

console.log(output);

// function to print the full name

const users = [
    { firstName: "akshay", lastName: "saini", age: 26 },
    { firstName: "donald", lastName: "trump", age: 75 },
    { firstName: "elon", lastName: "musk", age: 50 },
    { firstName: "deepika", lastName: "padukone", age: 26 },
];


const full = users.map(function (user) {
    return user.firstName + " " + user.lastName;
});
console.log(full);


