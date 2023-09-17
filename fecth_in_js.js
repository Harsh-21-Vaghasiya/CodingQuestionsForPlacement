let a = fetch("https://goweather.herokuapp.com/weather/Ny")
a.then(
    (val) => {
        return val.json()
    }

).then
    (
        (val) => {
            console.log(val);
        }
    )