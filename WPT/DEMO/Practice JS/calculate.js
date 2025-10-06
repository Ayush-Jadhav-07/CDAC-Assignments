function calculate(...a){
    console.log("Input Numbers : ",a);
    let sum =0;

    for(let num of a){
        sum+=num;
    }
    console.log("The Addition of all data is : ",sum)
    console.log("The Odd Numbers In the Data is - ")
    
    for(let index in a)
    {
        if(a[index]%2!=0)
        {
            console.log(a[index])
        }
    }
}

function mathMax(...a){
    return Math.max(...a);
}

console.log("The Max Number in the element is : ",mathMax(5,8,48,56,84,21));
calculate(10,15,7,5,6,52);