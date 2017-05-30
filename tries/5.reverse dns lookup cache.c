#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define chars 27
#define max 100

int getindex(char c){
	return (c=='.')?26:(c-'a');
}

struct trie{
	struct trie *child[chars];
	bool isleaf;
	char *ipadd;
};

struct trie *getnode(){
	struct trie *node = (struct trie *)malloc(sizeof(struct trie));
	node->isleaf=false;
	int i;
	for(i=0;i<chars;i++){
		node->child[i]=NULL;
	}
	node->ipadd=NULL;
	return node;
}

void insert(struct trie *root, char *url, char *ipadd){
	int len = strlen(url);
	struct trie *temp = root;
	int level;
	for(level=0;level<len;level++){
		int index= getindex(url[level]);
		if(!temp->child[index]){
			temp->child[index]=getnode();
		}
		temp=temp->child[index];
	}
	temp->isleaf=true;
	temp->ipadd= new char[strlen(ipadd)+1];
	strcpy(temp->ipadd, ipadd);
}

char *search(struct trie *root, char *url){
	struct trie *temp = root;
	int level;
	int len = strlen(url);
	for(level=0;level<len;level++){
		int index=getindex(url[level]);
		if(!(temp->child[index])){
			return NULL;
		}
		temp=temp->child[index];
	}
	if(temp!=NULL && temp->isleaf){
		return temp->ipadd;
	}
	return NULL;
}

int main()
{
    char URL[][50] = { "www.samsung.com", "www.samsung.net",
                       "www.google.in"
                     };
    char ipAdd[][max] = { "107.108.11.123", "107.109.123.255",
                          "74.125.200.106"
                        };
    int n = sizeof(URL) / sizeof(URL[0]);
    struct trie *root = newTrieNode();
 
    // Inserts all the domain name and their corresponding
    // ip address
    for (int i = 0; i<n; i++)
        insert(root, URL[i], ipAdd[i]);
 
    // If forward DNS look up succeeds print the url along
    // with the resolved ip address.
    char url[] = "www.samsung.com";
    char *res_ip = search(root, url);
    if (res_ip != NULL)
        printf("Forward DNS look up resolved in cache:\n%s --> %s",
               url, res_ip);
    else
        printf("Forward DNS look up not resolved in cache ");
 
    return 0;
}

