function file()
{
    let f=require('fs');
    //f.open('Ayush.txt');

    setTimeout(()=>{
        
    f.writeFile('Ayush.txt',"hello this data After the asyn function call", (err,value)=>{
            if(err)
            {
                console.log(err);
            }else{
                console.log(value)
            }
    });

     f.readFile("Ayush.txt",'utf8', (err,value)=>{
        if(err)
        {
            console.log(err);
        }else{
            console.log(value)
        }
    })


},2000)
    
    f.readFile("Ayush.txt",'utf8', (err,value)=>{
        if(err)
        {
            console.log(err);
        }else{
            console.log(value)
        }
    })
}

file()