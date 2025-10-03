import React, { useState } from 'react';

function Password() {
    const [inputValue, setInputValue] = useState('');
    const [generatedPassword, setGeneratedPassword] = useState('');

    const generatePassword = () => {
        const uppercase = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
        const lowercase = 'abcdefghijklmnopqrstuvwxyz';
        const numbers = '0123456789';
        const symbols = '!@#$%^&*()_+-=[]{}|;:,.<>?';
        const allChars = uppercase + lowercase + numbers + symbols;

        let newPassword = '';
        const length = parseInt(inputValue);

        if (isNaN(length) || length <= 0) {
            alert('Please enter a valid password length');
            return;
        }

        for (let i = 0; i < length; i++) {
            const randomIndex = Math.floor(Math.random() * allChars.length);
            newPassword += allChars[randomIndex];
        }

        // Ensure at least one character from each category
        newPassword = newPassword.slice(0, -4) + 
            uppercase[Math.floor(Math.random() * uppercase.length)] +
            lowercase[Math.floor(Math.random() * lowercase.length)] +
            numbers[Math.floor(Math.random() * numbers.length)] +
            symbols[Math.floor(Math.random() * symbols.length)];

        // Shuffle the password
        newPassword = newPassword.split('').sort(() => Math.random() - 0.5).join('');

        setGeneratedPassword(newPassword);
    };

    const copyToClipboard = () => {
        if (generatedPassword) {
            navigator.clipboard.writeText(generatedPassword)
                .then(() => alert('Password copied to clipboard!'))
                .catch(err => console.error('Failed to copy:', err));
        }
    };

    return (
        <div >
            <h2>Password Generator</h2>
            <div>
                <label>Enter the length of password: </label>
                <input
                    type="number"
                    value={inputValue}
                    onChange={(e) => setInputValue(e.target.value)}
                    placeholder="Enter length"
                   
                />
            </div>
            <button 
                onClick={generatePassword}
                
            >
                Generate Password
            </button>
            {generatedPassword && (
                <div>
                    <label>Generated Password: </label>
                    <p >
                        {generatedPassword}
                    </p>
                    <button 
                        onClick={copyToClipboard}
                        
                    >
                        Copy to Clipboard
                    </button>
                </div>
            )}
        </div>
    );
}

export default Password;
