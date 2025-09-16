// Get reference to the display input element
const display = document.querySelector('input[name="display"]');

let resultDisplayed = false;

// Function to clear the entire display
function clearDisplay() {
    display.value = '';
    resultDisplayed = false;
}

// Function to delete the last character from display
function deleteChar() {
    display.value = display.value.slice(0, -1);
}

// Function to append a value to the display
function appendToDisplay(value) {
    // If result is displayed and the next input is a number, clear display
    if (resultDisplayed && '0123456789'.includes(value)) {
        display.value = '';
        resultDisplayed = false;
    }
    display.value += value;
}

// Function to calculate the result
function calculate() {
    try {
        display.value = eval(display.value);
        resultDisplayed = true;
    } catch (error) {
        display.value = 'Error';
        setTimeout(clearDisplay, 2000);
    }
}

// Add keyboard support
document.addEventListener('keydown', function(event) {
    const key = event.key;
    // Check if the pressed key is a number or operator
    if ('0123456789+-*/.'.includes(key)) {
        appendToDisplay(key);
    } 
    // Handle Enter key or equals sign for calculation
    else if (key === 'Enter' || key === '=') {
        calculate();
    } 
    // Handle Escape key to clear display
    else if (key === 'Escape') {
        clearDisplay();
    } 
    // Handle Backspace key to delete last character
    else if (key === 'Backspace') {
        deleteChar();
    }
});