#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){

    int CMDS = 30;
    int TOKENS = 5;
    int MAXWORDS = 50;    
    int cl[CMDS];
    char *tokens[TOKENS]={"[N]","[AV]","[V]","[AJ]"};
    char *lists[CMDS][MAXWORDS];
    char *cmds[CMDS]={"NOUNS","ADVERBS","VERBS","ADJECTIVES","END"};


    *(tokens+5) = "MY";
    cout<<*(tokens+5); 

    for (size_t i = 0; i < TOKENS; i++)
    {
        cout<<*(tokens+i);
    
    

    return 0;
}