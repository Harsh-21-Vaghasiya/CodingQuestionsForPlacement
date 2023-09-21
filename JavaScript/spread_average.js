const a = (text) => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(text)
        }, 2000);
    });
};
(
    async () => {
        const text = await a("hello");
        console.log(text);
        const text2 = await a("world");
        console.log(text2);
    }
)();