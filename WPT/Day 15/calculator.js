import React from "react";

function Calculator(props) {
  let a1 = parseInt(props.num1);
  let a2 = parseInt(props.num2);
  function Addition() {
    return a1 + a2;
  }
  return (
    <div>
      <h3>Calculator</h3>

      <h1> Addition is : {Addition()}</h1>

      <h1> Multiplication :{a1 * a2}</h1>
      <h1> Substraction :{a1 - a2}</h1>
      <h1> Division :{a1 / a2}</h1>
    </div>
  );
}

export default Calculator;
