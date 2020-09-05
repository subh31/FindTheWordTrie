#include<iostream>
#include<string>
#include<map>
#include<fstream>
using namespace std;
struct TrieNode
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
void insert(TrieNode *root,string word,int value)
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

int getval(TrieNode *root,string word)
{
TrieNode *current=root;
for(int i=0;i<word.size();i++)
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
	myfile.open("EnglishDictionary.csv");
	while(myfile.good())
	{
		string word;
		string val;
		getline(myfile,word,',');
		getline(myfile,val,'\n');
		insert(root,word,stoi(val));
	}
string word;
cout<<"Enter the word: ";
cin>>word;
int ans=getval(root,word);
if(ans>0)
{
	cout<<"Yes, "<<ans<<endl;
}
else
cout<<"No"<<endl;

return 0;
} 
