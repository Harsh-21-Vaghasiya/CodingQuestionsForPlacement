
var obj1 = {
    fn: "harsh",
    ln: "vaghasiya",
    name: function () {
        console.log(this.fn + this.ln);
    }

}

var obj2 = {
    fn: "meet",
    ln: "vora"
}

obj1.name.call(obj2);
