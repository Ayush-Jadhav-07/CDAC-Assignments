import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import MyFunction from './Myfunction';
import { Function2 , Function3 } from './Myfunction';
import Component from './Component';


const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
 <div className='index'>
<App/>
   
     <Component>

      </Component>

    
    <MyFunction  data="user"
      skills="[{WPT , C , C++}] "
      doj="">

    </MyFunction>

    <Function2></Function2>
    <Function3></Function3>

    </div>


   
 
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
