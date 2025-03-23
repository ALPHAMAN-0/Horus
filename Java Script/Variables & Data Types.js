// var - function scoped (older style)
var x = 10;

// let - block scoped (modern, recommended for variables that change)
let y = 20;

// const - block scoped, cannot be reassigned (modern, recommended when possible)
const z = 30;
console.log(x, y, z);

// String - text data
const name = "JavaScript";
const greeting = 'Hello';
const template = `Value: ${x}`;  // Template literals

// Number - integers and floats
const integer = 42;
const float = 3.14;
const infinity = Infinity;
const notANumber = NaN;

// Boolean - true or false
const isValid = true;
const isDisabled = false;

// Undefined - variable declared but not assigned
let unassigned;

// Null - intentional absence of value
const empty = null;

// Symbol - unique identifier
const uniqueId = Symbol('id');

// BigInt - large integers
const bigNumber = 9007199254740991n;

// Object - collection of key-value pairs
const person = {
  firstName: "John",
  lastName: "Doe",
  age: 30,
  greet() { return `Hello, ${this.firstName}`; }
};

// Array - ordered collection of values
const fruits = ["apple", "banana", "orange"];
const mixed = [1, "two", true, null, {key: "value"}];

// Function - reusable blocks of code
function add(a, b) {
  return a + b;
}

// Arrow function
const multiply = (a, b) => a * b;

// Function vs Block scope
function scopeDemo() {
  var functionScoped = "I'm function scoped";
  let blockScoped = "I'm block scoped";
  
  if (true) {
    var varInBlock = "I'm visible outside the block";
    let letInBlock = "I'm only visible in this block";
    console.log(functionScoped); // accessible
    console.log(blockScoped);    // accessible
  }
  
  console.log(varInBlock);     // accessible
  // console.log(letInBlock);  // ERROR: not accessible
}

// typeof operator
console.log(typeof "Hello");     // "string"
console.log(typeof 42);          // "number"
console.log(typeof true);        // "boolean"
console.log(typeof undefined);   // "undefined"
console.log(typeof null);        // "object" (known JavaScript quirk)
console.log(typeof {});          // "object"
console.log(typeof []);          // "object" (arrays are objects)
console.log(typeof function(){}); // "function"

// Array checking
console.log(Array.isArray([]));  // true
console.log(Array.isArray({}));  // false

// String conversions
String(42);         // "42"
(42).toString();    // "42"
42 + "";           // "42"

// Number conversions
Number("42");       // 42
parseInt("42px");   // 42
parseFloat("3.14"); // 3.14
+"42";              // 42

// Boolean conversion
Boolean(0);         // false
Boolean("");        // false
Boolean(null);      // false
Boolean(undefined); // false
Boolean(NaN);       // false
Boolean(1);         // true
Boolean("hello");   // true
Boolean([]);        // true
!!42;               // true (shorthand)