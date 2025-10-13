import { useState } from "react";

function Factorial (){
    let fact = 1;
    const [num ,setNum]=useState(0)
    for(let i = 1; i<=num; i++){
        fact =fact*i;
    }

    const handlerInputChange=(e)=>{
        setNum(e.target.value);
    }
    return(
        <>
            <h1>Factorial Calcuator</h1>
            <input
            type="number"
            placeholder="Enter Number"
            value={num}
            onChange={handlerInputChange}
            ></input>
            <br></br>
            <h3>The Factorial Of Number Is : {fact}</h3>      
        </>
    )
}

export default Factorial;