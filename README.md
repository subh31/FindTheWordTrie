# Trie-Project-Find-the-word-
Project made for bobble.ai
# C++ Trie Implementation

This is a C++ implementation of insert the word and their respective frequency from dictionary and find the word if it exists. Fot this implementation we have used [trie](https://en.wikipedia.org/wiki/Trie "Trie").

### When to use Trie
Using trie is beneficial when have a lot of very long strings having the common prefix 
(e.g. urls, file paths) and you want to use them as keys for set or map. 
Trie will provide you with performance, close to the one of hash table 
(still worse on average, however), but with some benefits, like partial search 
(currently by prefix substring).

How long is very long? Is would say that the real difference will only become 
noticeable when the average length is greater then CPU cache line (usually 64 bytes).
Below that I would not expect benefit in performance over the 
normal map operations.

## Requirements
1. You must have installed *GCC compiler* on your system.
2. Clone this repository into your system using:
```bash
git clone https://https://github.com/subh31/FindTheWordTrie.git
cd FindTheWordTrie
```
You have to download both the csv file(EnglishDictionary.csv) and the TRIES.cpp file in a same folder.

## Command for compile and run the program
Step 1 − Open a new terminal window or cmd if you are on windows.

Step 2 − Change the directory to the directory in which you have your source.cpp file. For example, if it is in C:/Users/Dell/Documents, enter your command line −
```bash
$ cd 'C:/Users/Dell/Documents'
```

Step 3 − Now enter the following command to compile the source file using g++.
```bash
$ g++ -o <name-you-want-to-give> source.cpp
```
In place of <name-you-want-to-give> replace it by any name like myprogram, etc.
  
 Step 4 − Run it! Now you can run the program using −
 ```bash
 $ ./myprogram
```

## Implementation Details
Wiki to read on subject:
* [Trie](https://en.wikipedia.org/wiki/Trie "Trie")
