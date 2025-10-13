import { useState } from "react"

function TextConverter (){

    const[text , setText]=useState('');
    const[caseType , setCaseType]=useState('');

    const handleInputChange =(e)=>{
        setText(e.target.value);
    }

    const handleCaseType =(e)=>{
        setCaseType(e.target.value);
    }

    const converter =()=>{
        if(caseType ==="UPPERCASE")
        {
            return text.toUpperCase();
        }
        else if(caseType ==="lowercase")
        {
            return text.toLowerCase();
        }
        else if(caseType ==="Title Case")
        {
            return text
                .split(" ")
                .map((word) => word.charAt(0).toUpperCase() + word.slice(1).toLowerCase())
                .join(" ")
        }
        else{
            return text
        }
    }
    

    return(
        <div>
            <h2>Text Converter</h2>
            <div>
                <label>Enter Text - </label>
                <br></br>
                <input 
                type="text"
                value={text}
                onChange={handleInputChange}
                />
            </div>
            <div>
                <lable>
                    <input 
                    type="radio"
                    value="UPPERCASE"
                    checked={caseType==="UPPERCASE"}
                    onChange={handleCaseType}/>
                    UPPERCASE
                </lable>
                <lable>
                    <input 
                    type="radio"
                    value="lowercase"
                    checked={caseType==="lowercase"}
                    onChange={handleCaseType}/>
                    lowercase
                </lable>
                <lable>
                    <input 
                    type="radio"
                    value="Title Case"
                    checked={caseType==="Title Case"}
                    onChange={handleCaseType}
                    />
                    Title Case
                </lable>
            </div>

            <h3>Output</h3>
            <p>{converter ()}</p>
        </div>
    )
}

export default TextConverter;