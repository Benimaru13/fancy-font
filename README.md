# Chibueze Benneth
# Fancy Font personal project

This project is inspired by a personal attempt to create a custom font design using c++. this will (hopefully help me develop my understanding of c++ and help me create gorgeous fonts)

it is supposed to work like this:

- The user inputs a name / sentence they want formatted

- my project parses the input and seperates it into individual characters

- Loop through each character and feed it into a font function, which takes in each one and returns the fancy font as output

- The way the fancy font could work is that it could hold a dictionary mapping of each letter's design

the designs would look like this 

An 'A' would return a function that outputted this with text
So there could be a line in the function that looks like " fontMap[letter](); // this calls the function associated with the letter font
{
    'A' = letterA;
    'B = letterB;
    ...
}
where letterA, letterB, and so on are funciton names that can be called like letterA();

    ___
   /  \ \
  / ___\ \
 / /    \ \ 
/_/      \_\

B:
 ____
|  _  \
| |_|  |
|.    /
|. _  \
| |_|  |
|_____/
