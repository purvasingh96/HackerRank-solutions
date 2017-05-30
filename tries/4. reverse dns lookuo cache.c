#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define chars 11
#define max 50

int getindex(char c){
	return (c=='.')?10:(c-'0');
}
struct trie{
	struct trie *child[chars];	//ip address
	bool isleaf;
	char *url;
};

struct trie *getnode(){
	struct trie *node = (struct trie *)malloc(sizeof(struct trie));
	node->isleaf=false;
	node->url=NULL;
	int i;
	for(i=0;i<chars;i++){
		node->child[i]=NULL;
	}
	return node;
}

void insert(struct trie *root, char *ipadd, char *url){
	struct trie *temp = root;
	int level;
	int len = strlen(ipadd);
	for(level=0;level<len;level++){
		int index = getondex(ipadd[level]);
		if(!(temp->child[index])){
			temp->child[index]=getnode();
		}
		temp=temp->child[index];
	}
	temp->isleaf=true;
	temp->url= new char[strlen(url)+1];
	strcpy(temp->url, url);
}

char *search(struct trie *root, char *ipadd){
	struct trie *temp=root;
	int level;
	int len = strlen(ipadd);
	for(level=0;level<len;level++){
		int index= getindex(ipadd[level]);
		if(!(temp->child[index])){
			return NULL;
		}
		temp=temp->child[index];
	}
	if(temp!=NULL && temp->isleaf){
		return temp->url;
	}
	return NULL;
}

int main(){
	char ipAdd[][max] = {"107.108.11.123", "107.109.123.255",
                         "74.125.200.106"};
    char URL[][50] = {"www.samsung.com", "www.samsung.net",
                      "www.google.in"};
    int n = sizeof(ipAdd)/sizeof(ipAdd[0]);
    struct trie *root = getnode();
 
    // Inserts all the ip address and their corresponding
    // domain name after ip address validation.
    int i;
    for (i=0; i<n; i++)
        insert(root,ipAdd[i],URL[i]);
 
    // If reverse DNS look up succeeds print the domain
    // name along with DNS resolved.
    char ip[] = "107.108.11.123";
    char *res_url = search(root, ip);
    if (res_url != NULL)
        printf("Reverse DNS look up resolved in cache:\n%s --> %s",
                ip, res_url);
    else
        printf("Reverse DNS look up not resolved in cache ");
    return 0;
}
