# Arrays

The declaration

```c
int ndigit[10];
```

declares ndigit to be an array of 10 integers.

## [Exercise 1-13](/Exercises/Exercise1-13.c)

**Input Processing**: The program reads input characters and processes them to determine word lengths.
It distinguishes between spaces, tabs, and newlines to identify word boundaries.

**Array Usage**: It utilizes an array word_lengths to store and count the occurrences of different word lengths.

1. **Array Declaration**:
   The array word_lengths is declared with a fixed size of `MAX_LENGTH` elements to store the count of word lengths.
   In C, arrays are a collection of elements of the same data type stored in contiguous memory locations.

2. **Array Initialization**:
   The array word_lengths is initialized to all zeros using the initialization syntax `{0}` at the time of declaration.
   Initialization ensures that each element of the array starts with a known value before counting the occurrences of word lengths.

3. **Array Indexing**:
   The array word_lengths is indexed from `0` to `MAX_LENGTH-1`, representing word lengths from 1 to 10 characters.
   The index of the array corresponds to the length of the word being counted.

4. **Array Element Update**:
   Within the program, when a word of a specific length is encountered, the corresponding element in the word_lengths array is incremented.
   This updating process helps in counting the occurrences of different word lengths efficiently.

5. **Array Traversal**:
   The program utilizes a loop to traverse through the word_lengths array to generate the histogram.
   By iterating through the array elements, the program displays the count of words for each word length in a formatted manner.
   **Looping**: The program uses loops to iterate through the input characters and calculate word lengths.

**Conditional Statements**: It employs conditional statements to check for word boundaries and update the state accordingly.

**Output Formatting**: The program generates a histogram displaying the distribution of word lengths in the input text.
