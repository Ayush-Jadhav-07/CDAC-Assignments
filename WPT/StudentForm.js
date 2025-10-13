import React, { useState } from 'react'

function StudentForm() {

    const[stream , setStream] = useState("");

  return (
    <div>
        <h1>Welcome, Students!</h1>
        <h3>---Select Your Field---</h3>
        <select value={stream} onChange={(e)=>setStream(e.target.value)}>
            <option value="">---Select Field---</option>
            <option value="Graduate">Graduate</option>
            <option value="Post Graduate">Post Graduate</option>
            <option value='UnderGraduate'>UnderGraduate</option>
        </select>
        <br/>
        {/* <button onClick={Education}>Provide Data Enter!</button> */}

     {stream === "Graduate" && (
        <div>
          <h3>Graduate Details</h3>
          <label>Degree: </label>
          <input type="text" placeholder="Enter Degree" /><br /><br />
          <label>Year: </label>
          <input type="text" placeholder="Enter Year" /><br /><br />
          <label>University: </label>
          <input type="text" placeholder="Enter University" /><br /><br />
        </div>
      )}

      {stream === "Post Graduate" && (
        <div>
          <h3>Post Graduate Details</h3>
          <label>PG Degree: </label>
          <input type="text" placeholder="Enter PG Degree" /><br /><br />
          <label>Thesis Topic: </label>
          <input type="text" placeholder="Enter Thesis Topic" /><br /><br />
        </div>
      )}

      {stream === "UnderGraduate" && (
        <div>
          <h3>UnderGraduate Details</h3>
          <label>SSC Marks: </label>
          <input type="text" placeholder="Enter SSC Marks" /><br /><br />
          <label>HSC Marks: </label>
          <input type="text" placeholder="Enter HSC Marks" /><br /><br />
        </div>
      )}
    </div>
  )
}

export default StudentForm