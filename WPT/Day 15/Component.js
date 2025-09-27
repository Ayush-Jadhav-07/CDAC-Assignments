import React from "react";

class Component extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      text: "",
    };
    // Bind the event handlers to this
    this.handleInputChange = this.handleInputChange.bind(this);
    this.handleUpperCase = this.handleUpperCase.bind(this);
    this.handleLowerCase = this.handleLowerCase.bind(this);
  }

  // Update text state when typing
  handleInputChange(event) {
    this.setState({ text: event.target.value });
  }

  // Log text in uppercase when button is clicked
  handleUpperCase() {
    console.log(this.state.text.toUpperCase());
  }

  // Log text in lowercase when button is clicked
  handleLowerCase() {
    console.log(this.state.text.toLowerCase());
  }

  render() {
    return (
      <div>
        <input
          type="text"
          value={this.state.text}
          onChange={this.handleInputChange}
          placeholder="Enter your text"
        />
        <button onClick={this.handleUpperCase}>UPPER CASE</button>
        <button onClick={this.handleLowerCase}>lower case</button>
      </div>
    );
  }
}

export default Component;
