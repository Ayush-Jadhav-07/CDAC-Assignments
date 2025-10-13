
import { BrowserRouter, Link, Route, Routes } from 'react-router-dom';
import './App.css';
import Home from './Home';
import StudentForm from './StudentForm';
import ResultPage from './ResultPage';
// import Calcuator from './Calculator';
// import FactorialClass from './FactorialClass';
// import TextConverter from './TextConverter';
// import Component from './Component';
// import Factorial from './Factorial';

function App() {
  return (
    <BrowserRouter>
    <div className="App">
      {/* <TextConverter></TextConverter> */}
      {/* <FactorialClass></FactorialClass> */}
      {/* <Calcuator></Calcuator> */}
      {/* <Factorial></Factorial> */}
      {/* <Component /> */}

    <nav>
    <Link to='/'>Home</Link> &nbsp;&nbsp;
    <Link to='/studentForm'>StudentForm</Link>&nbsp;&nbsp;
    <Link to='/resultPage'>Result</Link>&nbsp;&nbsp;
    </nav>

    <Routes>
      <Route path='/' element={<Home/>}></Route>
      <Route path='/studentForm' element={<StudentForm/>}></Route>
      <Route path='/resultPage' element={<ResultPage total={100}/>}></Route>
    </Routes>

    </div>
    </BrowserRouter>
  );
}

export default App;
