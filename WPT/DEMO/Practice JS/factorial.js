function getFactorialImpl(choice){
    function forLoop(num){
        if (num<0){
            console.log("Please Enter Positive Number : ");
            return 1;
        }
        else{
            let fact1 = 1;
            for(let i =1; i<=num; i++)
            {
                fact1*=i;
            }
        }
        return fact1;
    }

    function recur(num){
        if (num == 0){
            return 1;
        }
        else{
            return (num * recur(num-1));
        }
    }

    if(choice ==="forLoop")
    {
        console.log("The Factorial of Number is Calculated Using ForLoop" )
        return forLoop;
    }
    else{
        console.log("The Factorial of Number is Calculated Using Recursive");
        return recur;
    }
}

let //rv = getFactorialImpl("forLoop");
// 	console.log("The Factorial of 3 is : ", rv(3));
	rv = getFactorialImpl();
    console.log("The Factorial of 5 is : ", rv(5));
