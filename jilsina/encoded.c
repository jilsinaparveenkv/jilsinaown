/*Write your code to complete this challenge. Do not modify/delete the given code.*/
 

#include <stdio.h>
#include <string.h>

char alphebets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


void encode(char plaintext[], char encoded_text[], int k)
{
	//plaintext: An array that contains the original text
	//encoded_text: Store the encoded text in this array
	//k: (number) an encoding key to specify 'k' places farther down the alphabet

	//TO CODE HERE
	int i,j;
	for(i=0;i<strlen(plaintext);i++)
	{
	    for (j=0;j<strlen(alphebets);j++)
		{
			if(plaintext[i]=='')
			{
				encoded_text [i]=='';
			}
			if(alphebets[j]==pailntext[i])
			{
			  encoded_text[i]=alphebets[(j+k)%26];
			}
		}
	}
}


void decode(char encoded_text[], char plaintext[], int k)
{
	//encoded_text: An array that contains encoded text
	//plaintext: An array to store the decoded text
	//k: (number) a decoding key

	//TO CODE HERE
	int i,j;
	for(i=0;i<strlen(encoded_text);i++)
	{
		for(j=0;j<strlen(alphebets);j++)
		{
			if(encoded text[i]==' ')
			{
			plaintext[i]=' ';
			}
			if (alphebets[j]==encoded_text[i])
			{
			plaintext[i]=alphebets[((j)%26)-k];
		
			}
		}
	}
}

int main()
{
    // DO NOT MODIFY/DELETE THE BELOW CODES

    // Variable Declarations
    char text[] = "hello world"; // Original Text
    int k = 3; //encoding and decoding key
    char encoded_text[strlen(text)], plaintext[strlen(text)]; //Array to store encoded text and plaintext
  
    //Function Calls
    encode(text, encoded_text, k);
    printf("Encoded text is: %s\n", encoded_text);
    decode(encoded_text, plaintext, k);
    printf("Original text is: %s\n", plaintext);
    return 0;
}

