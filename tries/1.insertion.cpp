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

bool search(struct trie *root, char *key){
	int index;
	int level;
	int len = strlen(key);
	struct trie *temp = root;
	for(level=0;level<len;level++){
		index = convert(key[level]);
		if(!temp->child[index]){
			return false;
		}
		temp=temp->child[index];
			}
			return (temp!=NULL && temp->isleaf);
}
int main()
{
    // Input keys (use only 'a' through 'z' and lower case)
    char keys[][8] = {"the", "a", "there", "answer", "any",
                     "by", "bye", "their"};
 
    char output[][32] = {"Not present in trie", "Present in trie"};
 
 
    struct trie *root = getnode();
 
    // Construct trie
    int i;
    for (i = 0; i < ARRAY_SIZE(keys); i++)
        insert(root, keys[i]);
 
    // Search for different keys
    printf("%s --- %s\n", "the", output[search(root, "the")] );
    printf("%s --- %s\n", "these", output[search(root, "these")] );
    printf("%s --- %s\n", "their", output[search(root, "their")] );
    printf("%s --- %s\n", "thaw", output[search(root, "thaw")] );
 
    return 0;
}
