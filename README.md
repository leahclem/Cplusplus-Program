# Cplusplus-Program
Repository for C++ class portfolio

     Project summary and the "problem" it solved:
This is a program for a grocery store that analyzes the text records generated throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They calculate how often items are purchased and output the frequency of a specific item or the entire list of purchased items.

    What was done well:
I felt that I grasped the parameters of this project rather quickly, so the coding portion didn't take me long and I'm happy with the results of my maps implementation. 

    Where could be enhanced or improved to make the code more efficient:
    
I my program would benefit with the improvement of scalability for higher quantities of data. I would also implement multi-threading, with threads that run in parallel and perform tasks such as reading the input file, calculating frequency of items, and printing the output. This would allow my program to perform its tasks concurrently, rather than sequentially. 

    Most challenging pieces of the code to write, and the tools or resources that could be utilized:
The section I struggled with the most was the file input function. Originally my code would output the error message "Error: end of file never reached." during execution, but, upon inspection, the file was fully input. I utilized ChatGPT for suggestions on how to more efficiently format the function and error handling, and I modified the suggestions to fit my project. 

    Transferable skills that will benefit other projects:
Given the chance to work with a broader range of data structures, I am excited to utilize maps more frequently in future projects. I also have a better understanding of writing basic I/O functions, which gives me confidence that I can tackle more complex forms of data storage (e.g. external databases). 

    Ways in which this program is maintainable, readable, and adaptable:
My code is maintainable through its descriptive variable names, explanatory comments, and separate functions for each process. The I/O operations are also in separate functions, making them easier to modify if needed. For readability I clearly defined each function with its own specific purpose and used descriptive naming conventions. Functions that show adaptability are 1) inputFile(), 2) calcFrequency(), and 3) lookupItem(). The first can be easily modified to handle different input files by changing the name of the input file. The second can be modified to output frequency data in a different format. The third function can be modified to handle additional user input options. Additionally, the use of classes and functions also facilitiates the addition of extra functionality to the program in the future. 
