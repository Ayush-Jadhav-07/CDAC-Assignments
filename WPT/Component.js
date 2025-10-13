import React, { useState } from 'react'

function Component() {

    const[text, setText] = useState('');
    const[result , setResult] = useState('');

    const handlerInputChange=(e)=>{
        setText(e.target.value);
    }
    const handlerUppercase=()=>{
        setResult(text.toUpperCase());
    }

    const handlerLowercase=()=>{
        setResult(text.toLowerCase());
    }
  return (
    <div>
        <h1>Text Transform</h1>
        <label for="text1">Enter Text </label>
        <input 
        type='text'
        value={text}
        onChange={handlerInputChange}
        id='text1'
        placeholder='Enter Text'
        />
        <br></br>
        <button onClick={handlerUppercase}>UPPERCASE</button>
        <button onClick={handlerLowercase}>lowercase</button>
        <h2>Result</h2>
        <p>{result}</p>
    </div>
  )
}

export default Component