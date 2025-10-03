import React, { useCallback, useEffect, useState } from 'react'

function NewPassword() {

    const[password,setPassword]=useState('');
    const[length,setLength]=useState(12);
    const[includeNumber, setIncludeNumber]=useState(false)
    const[includeSymbol,setIncludeSymbol]=useState(false)

    const generatePassword=()=>{
        let characters="qQwWeErRtTyYuUiIoOpPlLkKjJhHgGfFdDsSaAzZxXcCvVbBnNmM";
        if(includeNumber){
            characters+="123456789";
        }
        if(includeSymbol){
            characters+="!@#$%^&*()_+";
        }

        let newPassword='';
        for(let i=0;i<length;i++){
            newPassword+=characters.charAt(
                 Math.floor(Math.random()*characters.length));
           
        }
        setPassword(newPassword);
    }

    
    useEffect(()=>{generatePassword()}, 
    [length,includeNumber,includeSymbol]
);
    useCallback(()=>{generatePassword()},
[length,includeNumber,includeSymbol])


  return (
    <div>
        <div id='main-content'> 
            <div>
                <h1>Password Generator</h1>
                <label id='name'>
                    Password Length :
                </label>
                <input
                type="number"
                value={length}
                onChange={(e)=>setLength(parseInt(e.target.value))}
                min="1"
                max="32"
                >
                </input>
            </div>
        
            <div>
                <label>
                    <input
                    type='checkbox'
                    checked={includeNumber}
                    onChange={()=>setIncludeNumber(!includeNumber)}>
                    </input>
                    Include Number
                </label>
            </div>

            <div>
                <label>
                    <input
                    type='checkbox'
                    checked={includeSymbol}
                    onChange={()=>setIncludeSymbol(!includeSymbol)}>
                    </input>
                    Include Symbols
                </label>
            </div>

            <div id='btn'>
                <button
                onClick={generatePassword}>Generate Password</button>
            </div>
            <div id='input'>
                <input id='display' type='text' value={password} readOnly />
            </div>
        </div>
    </div>
  )
}

export default NewPassword
