# Cplusplus-Program
Repository for C++ class portfolio

    Summarize the project and what problem it was solving.
This is a program for a grocery store that analyzes the text records generated throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They calculate how often items are purchased and output the frequency of a specific item or the entire list of purchased items.

    What did you do particularly well?
I felt that I grasped the parameters of this project rather quickly, so the coding portion didn't me long and I'm happy with the results of my maps implementation. 

    Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
    
I believe my program could use more scalability for higher quantities of data. It would benefit from the use of multi-threading where I would create threads that run in parallel and perform tasks such as reading the input file, calculating frequency of items, and printing the output. This would allow my program to perform its tasks concurrently, rather than sequentially. 

    Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The section I struggled with the most was the file input function. Originally my code would output the error message "Error: end of file never reached." upon execution but upon inspection, the file was fully input. I used ChatGPT for suggestions on how to more efficiently format the function and error handling. 

    What skills from this project will be particularly transferable to other projects or course work?
Given the chance to work with a broader range of data structures, I am excited to utilize maps more frequently in future projects. I also have a better understanding of writing basic I/O functions, which gives me confidence that I can tackle more complex forms of data storage (e.g. external databases). 

    How did you make this program maintainable, readable, and adaptable?
My code is maintainable in its descriptive variable names, explanatory comments, and separate functions for each process. The I/O operations are also in separate functions which makes them easier to modify if needed. For readability I clearly defined each function with its own specific purpose and used descriptive naming conventions. Functions that show adaptability are 1) inputFile(), 2) calcFrequency(), and 3) lookupItem(). The first can be easily modified to handle different input files by changing the name of the input file. The second can be modified to output frequency data in a different format. The third function can be modified to handle additional user input options. Additionally, the use of classes and functions also makes it easy to add extra functionality to the program in the future. 
