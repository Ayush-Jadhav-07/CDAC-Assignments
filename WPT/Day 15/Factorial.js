import React from "react";

function Factorial(props) {
  let factorial = 1;
  let num = parseInt(props.value);
  for (let i = 1; i <= num; i++) {
    factorial = factorial * i;
  }

  return (
    <div>
      <h1>Factorial of number is : {factorial} </h1>
    </div>
  );
}

export default Factorial;
