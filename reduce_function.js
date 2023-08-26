var con = [5, 2, 3, 4, 5];

// hear in first argument we pass the function in which sum display the sum of elements
// and current is display the elements of the array 
// in second argument we pass in the reduce function is the intial value of sum
const output = con.reduce(function(sum,current){
    sum=sum+current;
    return sum;
},0);

console.log(output);