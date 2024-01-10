// Ways to declare a variable
// var, let, const

let firstName = "Sidhant";
let lastName = "Nayak";

console.log(firstName, lastName);

let age = 30;

console.log(age);

// Naming Conventions
// - Only letters, numbers, underscores and dollar signs
// - Can't start with a number

let name1 = "Sid";

// Multi-Word Formatting
// firstName     camelCase
// first_name    snakeCase
// FirstName     PascalCase
// firstname     lowercase

// Re-assigning variables
age = 31;
console.log(age);

let score;
score = 1;

console.log(score);

if (true) {
  score = score + 1;
}

console.log(score);

const x = 100;

// x = 200;

const a = [1, 2, 3, 4];

// a = [1, 2, 3, 4, 5];

a.push(5);

console.log(a);

const person = {
  firstName: "Sid",
};

person.firstName = "Alt";
person.email = "new@mail.com";

console.log(person);

// Declare multiple values at once
let p, q, r;

const d = 10,
  e = 20,
  f = 30;

  console.log(d);