# Trie-Project-Find-the-word-
Project made for bobble.ai
# C++ Trie Implementation

This is a C++ implementation of insert the word and their respective frequency from dictionary and find the word if it exists. Fot this implementation we have used [trie](https://en.wikipedia.org/wiki/Trie "Trie").
To use it, you don't need to clone the repository. You need to download the TRIES.cpp along with EnglishDictionary.csv file in a same folder.
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

## Implementation Details

Wiki to read on subject:
* [Trie](https://en.wikipedia.org/wiki/Trie "Trie")
