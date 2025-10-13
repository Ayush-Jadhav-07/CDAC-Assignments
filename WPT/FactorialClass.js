import React from "react";

class FactorialClass extends React.Component {
  constructor(props) {
    super(props);
    console.log("🔵 constructor() - Component is being created");

    this.state = {
      num: 0,
      result: 1
    };
  }

  handleInputChange = (e) => {
    this.setState({ num: e.target.value });
  };

  calculateFactorial = () => {
    const n = Number(this.state.num);
    let fact = 1;
    for (let i = 1; i <= n; i++) {
      fact *= i;
    }
    this.setState({ result: fact });
  };

  // 🟢 Mounting Phase
  componentDidMount() {
    console.log("🟢 componentDidMount() - Component added to DOM");
  }

  // 🟡 Updating Phase
  componentDidUpdate(prevProps, prevState) {
    console.log("🟡 componentDidUpdate() - Component updated");
    if (prevState.result !== this.state.result) {
      console.log("Factorial value updated from", prevState.result, "to", this.state.result);
    }
  }

  // 🔴 Unmounting Phase
  componentWillUnmount() {
    console.log("🔴 componentWillUnmount() - Component will be removed");
  }

  render() {
    console.log("🧩 render() - Component rendering...");
    return (
      <>
        <h2>Factorial Calculator - Class Component</h2>
        <input
          type="number"
          value={this.state.num}
          onChange={this.handleInputChange}
          placeholder="Enter Number"
        />
        <br />
        <button onClick={this.calculateFactorial}>Calculate</button>
        <h3>Result: {this.state.result}</h3>
      </>
    );
  } 
}

export default FactorialClass;
