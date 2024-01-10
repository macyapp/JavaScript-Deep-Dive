// Value is stored in the stack
const firstName = 'John';
const age = 30;

// Reference is stored in the heap
const person = {
  name: 'Brad',
  age: 40,
};

let newName = firstName;
newName = 'Jonathan';

let newPerson = person;
newPerson.name = 'Bradley';

console.log(firstName, newName); // John, Jonathan
console.log(person, newPerson); // { name: 'Bradley', age: 40 }, { name: 'Bradley', age: 40 }
