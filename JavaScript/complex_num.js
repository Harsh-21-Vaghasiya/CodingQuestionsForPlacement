class Complex {


    sum(num) {
        this.i = this.i + num.i;
        this.j = this.j + num.j;
        console.log("Complex no is : " + this.i + "+" + this.j + "j");
    }

    set num(real) {
        this.i = real;

    }
    set num2(complex) {

        this.j = complex;
    }

    get num() {
        return this.i;

    }
    get num2() {

        this.j;
    }

}



var a = new Complex();
a.num = 1;
a.num2 = 2;
var b = new Complex(3, 4);
b.num = 1; b.num2 = 2;
b.sum(a);

