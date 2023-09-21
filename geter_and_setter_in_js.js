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
a.display();
a.name="vaghasiya";
console.log(a.name);
