
var obj1 = {
    fn: "harsh",
    ln: "vaghasiya",
    name: function (message) {
        console.log(this.fn + this.ln+message);
    }

}

var obj2 = {
    fn: "meet",
    ln: "vora"
}

obj1.name.apply(obj2,["awesome"]);
