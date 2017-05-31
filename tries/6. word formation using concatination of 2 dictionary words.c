// C implementation of search and insert operations
// on Trie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define alpha_size 26
#define convert(c) ((int)c-(int)'a')

struct trie{
	struct trie *child[alpha_size];
	bool isleaf;
};

struct trie *getnode(){
	struct trie *node = NULL;
	node = (struct trie*)malloc(sizeof(struct trie));	//made an error by putting extra *
	if(node){
		node->isleaf=false;
		int i;
		for(i=0;i<26;i++){
			node->child[i]=NULL;
		}
	}
	return node;
}

void insert(struct trie *root, char *key){
	int index;
	int level;
	int len = strlen(key);
	struct trie *temp = root;
	for(level=0;level<len;level++){
		index = convert(key[level]);
		if(!temp->child[index]){
			temp->child[index]=getnode();
		}
		temp=temp->child[index];
	}
	temp->isleaf=true;
}

int findprefix(struct trie *root, string key){
	int pos=-1, level;
	//int len = strlen(key);
	struct trie *temp = root;
	for(level=0;level<key.length();level++){
		if(temp->isleaf==true){
			pos=level;
		}
		if(!(temp->child[level])){
			return pos;
		}
	}
	if(temp!=NULL && temp->isleaf){
		return level;
	}
}

//check word formation possible or not
bool ispossible(struct trie *root, string word){
	
	//search for word in trie and find position till it is matched
	int len = findprefix(root, key);
	if(len==-1){
		return false;
	}
	string split_word(word, len, word.length()-len);
	int split_len= findprefix(root, split_word);
	
	return (len+split_len == word.length());
	
}
