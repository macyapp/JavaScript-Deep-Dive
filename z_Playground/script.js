const container = document.querySelector("#container");
// selects the #container div (don't worry about the syntax, we'll get there)

console.dir(container.firstElementChild);
// selects the first child of #container => .display

const controls = document.querySelector(".controls");
// selects the .controls div

console.dir(controls.previousElementSibling);
// selects the prior sibling => .display
