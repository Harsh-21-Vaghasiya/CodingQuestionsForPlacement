var strSplit = ["The", "The", "The", "fox", "jumped", "over", "the", "lazy", "dog"];
strSplit.sort();

for (let index = 0; index < strSplit.length; index++) {
    if (strSplit[index] == strSplit[index + 1]) {
        delete strSplit[index];
    }
}
strSplit.sort();

while (strSplit[strSplit.length - 1] == undefined) {
    strSplit.pop();
}
console.log(strSplit);