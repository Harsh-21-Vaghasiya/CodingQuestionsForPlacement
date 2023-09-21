class animal {
    name = "harsh";
    eat() {
        console.log("eating : " + this.name);
    }
}
class b extends animal {

}


let a=new b();
a.eat();