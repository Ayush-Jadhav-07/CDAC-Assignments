import React, { useState } from 'react'

function ResultPage({total}) {
    const[marks , setMarks]=useState('');

    const percentage =(marks/total)*100;

    let grade ='';

    if(percentage>=95) grade='A+'
    else if(percentage>=90) grade='A';
    else if(percentage>=80) grade='B+';
    else if(percentage>=75) grade='B';
    else if(percentage>=65) grade='C';
    else if(percentage>=50) grade='D';
    else grade ='Fail';


  return (
    <div>
        <h1>Student Percentage</h1>
        <lable>Enter Student Marks</lable>
        <br/>
        <input
        type='number'
        value={marks}
        onChange={(e)=>setMarks(Number(e.target.value))}
        placeholder='Enter Marks'
        ></input>
        <br/>
        
        <h3>Percentage : {percentage.toFixed(2)}</h3>
        <h3>Grade : {grade}</h3>
    </div>
  )
}

export default ResultPage