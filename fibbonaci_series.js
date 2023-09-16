var arr = [];
arr[0] = 1;
arr[1] = 1;


for (let index = 2; index < 20; index++) {
    arr[index] = arr[index - 1] + arr[index - 2];
}

for (let index = 0; index < arr.length; index++) {
    console.log(arr[index]);
    
}