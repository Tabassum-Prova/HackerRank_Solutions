#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m-1][k-1];

}

char*** kth_paragraph(char**** document, int k) {
    return document[k-1];

}

char**** get_document(char* text) {
     int paragraph=0,sentance=0,word=0,chr=0;
    char ****documentp=NULL;
    char ***sentancep=NULL;
    char **wordp=NULL;
    char *charp=NULL;
    int len=strlen(text);
    for(int i=0;i<len;i++)
    {
        if(text[i]==' ')
        {
        word++;
        charp[chr]='\0';
        //assign word in wordp
        wordp=realloc(wordp,sizeof(char*)*word);
        wordp[word-1]=charp;
        chr=0;
        // charp is null because it store next word;
        charp=NULL;
        continue;
        }
        if(text[i]=='.')
        { 
            if(text[i+1]=='\n'||i==len-1)
            {   
                sentance++;
                //allocate space for sentance 
                 sentancep=realloc(sentancep,sizeof(char**)*sentance);
                 word++;
                 //total word are contain in wordp and we asssign sentance with wordp
                 wordp=realloc(wordp,sizeof(char*)*word);
                  charp[chr]='\0';
                  //same above store char collection in wordp or word 
                 wordp[word-1]=charp;
                 //store collection of word in sentance ;
                 sentancep[sentance-1]=wordp;
                 //null assign for next word and char 
                 wordp=NULL,word=0,chr=0,charp=NULL;
                i++;
                paragraph++;
                //same as paragraph store sentance 
                documentp=realloc(documentp,sizeof(char***)*paragraph);
                documentp[paragraph-1]=sentancep;
                sentancep=NULL,sentance=0;
                continue;
            }
             if(i!=len-1)
             {  
                 word++; charp[chr]='\0';
                 wordp=realloc(wordp,sizeof(char*)*word);
                 wordp[word-1]=charp;
                 charp=NULL;
                  sentance++;
                 sentancep=realloc(sentancep,sizeof(char**)*sentance);
                  sentancep[sentance-1]=wordp;
                  wordp=NULL,word=0; chr=0;
                 continue;
             }
             
        }
       chr++;
       charp=realloc(charp,sizeof(char)*chr+1);
        charp[chr-1]=text[i]; 
    }
return documentp;

}

