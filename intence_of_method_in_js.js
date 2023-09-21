class Animal {

    name = "harsh";
    get name() {
        return this.name;
    }

    set name(value) {
        this.name = value;
    }

    display() {
        console.log(this.name);
    }
}


class Lion extends Animal {

}


let a = new Animal();
let c = new Lion();
a.display();
a.name = "vaghasiya";
console.log(a.name);
b = 10;
console.log(b);

console.log(a instanceof Animal);
console.log(b instanceof Animal);
console.log(c instanceof Animal);
console.log(c instanceof Lion);


