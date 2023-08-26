var con = [5, 2, 3, 4, 5];

const fun = function (x) {
    return x < 5 ? true : false;
}
const output = con.filter(fun);

console.log(output);


// function to find the first name whoseage is less than 30
// hear we use the chaining rule 


const users = [
    { firstName: "Harsh", lastName: "Vaghasiya", age: 26 },
    { firstName: "donald", lastName: "trump", age: 75 },
    { firstName: "elon", lastName: "musk", age: 50 },
    { firstName: "deepika", lastName: "padukone", age: 26 },
];


const firstname = users
    .filter(
        function (user) {

            if (user.age < 30) {
                return true
            }
            else {
                return false;
            }
        })
    .map(
        function (user) {
            return user.firstName
        });


console.log(firstname);