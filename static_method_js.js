class animal {

    constructor(name) {
        this.name = animal.capi(name);
    }
    disply()
    {
        console.log(this.name);
    }
    static capi(name) {
        return name.charAt(0).toUpperCase() + name.substr(1, name.length);
    }


}

let a = new animal("harsh");
a.disply();
let b = "harsh";
let c = animal.capi(b);
console.log(c);


