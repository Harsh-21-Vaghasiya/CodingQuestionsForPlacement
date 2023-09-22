const person = { firstName: 'John', lastName: 'Doe' };
const { firstName, lastName } = person;


const user = {
    name: 'Alice',
    address: {
        city: 'New York',
        zip: '10001',
    },
};

const { name, address: { city, zip } } = user;