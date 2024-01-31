let getSiblings = (e) => {
  // for collecting siblings
  let siblings = [];
  // if no parent, return no sibling
  if (!e.parentNode) {
    return siblings;
  }
  // first child of the parent node
  let sibling = e.parentNode.firstElementChild;
  // collecting siblings
  while (sibling) {
    if (sibling.nodeType === 1 && sibling !== e) {
      siblings.push(sibling);
    }
    sibling = sibling.nextElementSibling;
  }
  return siblings;
};

let siblings = getSiblings(document.querySelector(".current"));
siblingText = siblings.map((e) => e.textContent);
console.log(siblingText);
