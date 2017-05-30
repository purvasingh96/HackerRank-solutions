#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROW 4
#define COL 5

struct trie{
	struct trie *child[2];
	int isleaf;
};

struct trie *newnode(){
	struct trie *node = (struct trie*)malloc(sizeof(struct trie));
	node->isleaf=false;
	node->child[0]=NULL;
	node->child[1]=NULL;
	return node;
}

int insert(struct trie **root, int (*M)[COL], int row, int col)	//current row and col being processed
{
if(*root==NULL){
	*root=newnode();
}
if(col<COL){
	return insert(&((*root)->child[M[row][col]]), M, row, col+1);
}
else{
	if(!(*(root)->isleaf)){	//initially it is unique, after inserting full row, it becomes non unique so do isleaf=true
	//so that the whole expression becomes false due to ! operator when the same row is encountered again
		return (*root)->isleaf=1;
	}
	return 0;
}
}	
void printRow( int (*M)[COL], int row )
{
    int i;
    for( i = 0; i < COL; ++i )
        printf( "%d ", M[row][i] );
    printf("\n");
}
 
// The main function that prints all unique rows in a
// given matrix.
void findUniqueRows( int (*M)[COL] )
{
    struct trie *root = NULL; // create an empty Trie
    int i;
 
    // Iterate through all rows
    for ( i = 0; i < ROW; ++i )
        // insert row to TRIE
        if ( insert(&root, M, i, 0) )
            // unique row found, print it
            printRow( M, i );
}
 
// Driver program to test above functions
int main()
{
    int M[ROW][COL] = {{0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 1, 0, 0}
    };
 
    findUniqueRows( M );
 
    return 0;
}
