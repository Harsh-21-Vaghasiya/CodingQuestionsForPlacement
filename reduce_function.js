var con = [5, 2, 3, 4, 5];

// hear in first argument we pass the function in which sum display the sum of elements
// and current is display the elements of the array 
// in second argument we pass in the reduce function is the intial value of sum
const output = con.reduce(function (sum, current) {
    sum = sum + current;
    return sum;
}, 0);

console.log(output);




// function to find maximum element in array
const maximum = con.reduce(function (sum, current) {
    if (sum < current) {
        sum = current;
    }
    return sum;
}, 0);

console.log(maximum);




// function to find number of users of particular age

const users = [
    { firstName: "Harsh", lastName: "Vaghasiya", age: 26 },
    { firstName: "donald", lastName: "trump", age: 75 },
    { firstName: "elon", lastName: "musk", age: 50 },
    { firstName: "deepika", lastName: "padukone", age: 26 },
];

const num = users.reduce(function (sum, user) {

    if (sum[user.age]) {
        sum[user.age] = sum[user.age] + 1;
    }
    else {
        sum[user.age] = 1;
    }
    return sum;
}, {});

console.log(num);

// function to find the firstname which age is less than 30
const lessage = users.reduce(
    function (sum, user) {
        if (user.age < 30) {
            sum.push(user.firstName);
        }
        
        return sum;
    }, []
);

console.log(lessage);