class Animal {
    display() {
        console.log("this is class Animal");
    }
}

class Dog extends Animal {
  
    display() {
        console.log("this is class dog");
    }
}


var a=new Dog();
a.display();