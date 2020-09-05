#include<iostream>
#include<string>
#include<map>
#include<fstream>
using namespace std;
struct TrieNode//defining a structure for node of a trie.
{
map<char,TrieNode*> children;
bool endofword;
int val;
TrieNode()
{
endofword=false;
val=0;
}
};
void insert(TrieNode *root,string word,int value)//function to insert into the trie by passing the word and its respective frequency.
{
TrieNode *current=root;
for(int i=0;i<word.size();i++)
{
char ch=word[i];
TrieNode *node=current->children[ch];
if(!node)
{
node=new TrieNode();
current->children[word[i]]=node;
}
current=node;

}
current->val=value;
current->endofword=true;
}

int getval(TrieNode *root,string word)//function to return the frequency if it is in the trie and zero if not.
{
TrieNode *current=root;
for(int i=0;i<word.size();i++)//loop till every word gets match to the word in the trie.
{
char ch=word[i];
TrieNode *node=current->children[ch];
if(!node)
{
return 0;
}
current=node;
}
return current->val;
}

int main()
{
TrieNode *root=new TrieNode();
ifstream myfile;
	myfile.open("EnglishDictionary.csv");//Reading the csv file.
	while(myfile.good())//loop till every line of the csv file(dictionary) gets inserted to the trie.
	{
		string word;
		string val;
		getline(myfile,word,',');
		getline(myfile,val,'\n');
		insert(root,word,stoi(val));
	}
string word;
cout<<"Enter the word: ";
cin>>word;//Enter the word u want to find if is it present or not in the dictionary.
int ans=getval(root,word);
if(ans>0)
{
	cout<<"Yes, "<<ans<<endl;//the word is in the dictionary and printing its frequency.
}
else
cout<<"No"<<endl;//the word is not present.

return 0;
} 
