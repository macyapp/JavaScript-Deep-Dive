console.log(100);

console.log("Hello, World!");

console.log(20, "Hello", true);

const x = 100;

console.log(x);

console.error("Alert");

console.warn("Warning");

console.table({
  firstName: "Sid",
  email: "skn@gmail.com",
});

console.group("A group");
console.log(x);

console.error("Alert");

console.warn("Warning");

console.table({
  firstName: "Sid",
  email: "skn@gmail.com",
});
console.groupEnd();

const styles = "padding:10px; background-color:white; color:green";

console.log("%cHello, World!", styles);
