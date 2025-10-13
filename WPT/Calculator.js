import { useState } from "react";

function Calcuator (){

    const[num1 , setNum1]=useState("");
    const[num2 , setNum2]=useState("");
    const[operation , setOperation]=useState('');
    const[result, setResult]=useState("");

    const Calculator =()=>{
        let n1 = Number(num1);
        let n2 = Number(num2);
        let res =0;

        switch(operation){
            case "add" :
                res= n1+n2;
                break;
            case "sub" :
                res= n1-n2;
                break;
            case "mul" :
                res= n1*n2;
                break;
            case "div" :
                res= n2!==0 ? n1/n2 : "Can Not Divide By zero";
                break;
            default :
                res = "Please Select Valid Operator"
        }

        setResult(res)
    }


    return(
        <>
        <h1>Calcuator</h1>
        <label>Enter First Number - </label>
        <br></br>
        <input
        type="number"
        value={num1}
        onChange={(e)=>setNum1(e.target.value)}
        placeholder="Enter First Number"
        ></input>
        <br/>
        <label>Enter Second Number - </label>
        <br/>
        <input
        type="number"
        value={num2}
        onChange={(e)=>setNum2(e.target.value)}
        placeholder="Enter Second Number"
        />
        <br/>
        <select value={operation} onChange={(e)=>setOperation(e.target.value)}>
            <option value="">--Please Select Operation--</option>
            <option value="add">Addition</option>
            <option value="sub">Substraction</option>
            <option value="mul">Multiplication</option>
            <option value="div">Division</option>
        </select>
        <br/>
        <button onClick={Calculator}>Calculate</button>
        <h3>Result</h3>
        <p>{result}</p>
        </>
    )
}

export default Calcuator;