
/* Recursion in JavaScript*/

function sum(n) {
  if (n > 0) {
    return n + sum(n - 1);
  }
  else {
  return 0;
  }
}

for (let i = 0; i < 1000000; i++) {
  console.log(sum(100));
}
