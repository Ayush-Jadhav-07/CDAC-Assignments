const express = require('express');
const user1 = require('./Data.json');
const port = 4000;
const app = express();

app.get('/', (req , res ) => {
    res.send("Hello, I'm Express JS ");
})


app.get('/ash', (req , res ) => {
    res.json(user1);
})

app.get('/ash/:id', (req , res ) => {
    const id = Number(req.params.id);
    const ash = user1.find(
        ash => ash.id === id  
    )
    return res.json(ash);
    })
app.get('/ash/name/:first_name', (req , res ) => {
    const first_name = req.params.first_name;
    const ash1 = user1.find(
        ash1 => ash1.first_name === first_name
    )
        return res.json(ash1);
    })
app.get('/ash/email/:email', (req , res ) => {
    const email = req.params.email;
    const ash2 = user1.find(
        ash2 => ash2.email === email
    )

    return res.json(ash2);
})

app.post('/ash',(req,res) => {
    const newUser = req.body;
    user1.push(newUser);
    res.status(201).json({
        message: "User added successfully",
        ash: newUser
    });
});

app.delete('/ash/:id',(req,res) => {
   const idToDelete = Number(req.params.id);

    const index = user1.findIndex(obj => obj.id === idToDelete);

    if (index === -1) {
        return res.status(404).send("User not found");
    }

    const deletedUser = user1.splice(index, 1);

    res.json(deletedUser)
})

app.listen(port);
console.log("Server is started"); 
console.log('http://localhost:4000'); 

