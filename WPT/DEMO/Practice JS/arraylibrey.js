function arrlibrary(num){
    let arr = [1,2,3,4,5,6,7,8,9];

    
    switch(num){
        case 1 :
            arr.push(10);
            console.log(arr);
            break;
        case 2 :
            arr.pop();
            console.log(arr);
            break;
        case 3 :
            arr.shift();
            console.log(arr);
            break;
        case 4 :
            arr.unshift(0);
            console.log(arr);
            break;
        case 5 :
            let slice = arr.slice(1,5);
            console.log(slice);
            break;
        case 6 :
            arr.splice(2, 2, 21,22);
            console.log(arr);
            break;
        default:
            console.log("Enter Valid Num !");
            break;    
    }
}

// arrlibrary(8)
for(let i =1; i<=6;i++){
    arrlibrary(i);
}
