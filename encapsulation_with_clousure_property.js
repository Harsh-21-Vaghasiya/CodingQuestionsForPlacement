
//  counstructor in node js with clousure property for data encapsulation

function Counter() {
    var count = 0;

    /// if we return the both function that time only first is caonsider as the return
    return this.increment = () => {
        count++;
        console.log("This is from incremented counter", count);
    }

    return this.decrement = () => {
        count--;
        console.log("This is from decrement counter", count);
    }


}

// console.log(count);  e can not use it outside the function so it can be said as the encapulation

//  if we dons't return then we can use that functions by their name
var counters = new Counter();
// counters.increment();
// counters.decrement();
