// String
const firstName = "Sid";

// Number
const age = 24;
const temp = 98.9;

// Boolean
const hasKids = false;

// Null
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/typeof#typeof_null
const aptNumber = null;

// Undefined
let score;

// Symbol
const id = Symbol("firstName");

// BigInt
const n = 12345678901234567890n;

// Reference Types
const numbers = [1, 2, 3, 4];

const person = {
  firstName: "Sid",
};

function sayHello() {
  console.log("Hello, World!");
}

const output = sayHello;
console.log(output, typeof output);
