let div = document.querySelector(".container");

// compose DOM nodes
let fragment = document.createDocumentFragment();
for (let i = 0; i < 1000; i++) {
  let p = document.createElement("p");
  p.textContent = `Paragraph ${i + 1}`;
  fragment.appendChild(p);
}

// append the fragment to the DOM tree
div.appendChild(fragment);
