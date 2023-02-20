#include <iostream>
using namespace std;
int main()
{
    char line[150];
    int vowels,sentence;

    vowels =  sentence = 0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        // else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        // {
        //     ++words;
        // }
    //     else if(sentence==' ')
    //     {
    //         sentence;
    //     }
    }

    cout << "Vowels: " << vowels << endl;
    // cout << "words: " << w << endl;
    //  cout << "Vwords: " << sentence << endl;
   

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
  
//   // declaring string
//   string sentence = "Mary had a little lamb";
//   // initialising no of words to 0
//   int words = 0;
//   // store length of string in lenOfSentence
//   int lenOfSentence = sentence.size();

//   // run for loop from i = 0 to i = lenOfSentence
//   // to iterate through each character of the string
//   for(int i = 0; i < lenOfSentence; i++)
//   {
//     // check if current character is a space
//     if(sentence[i] == ' ')
//     {
//       // if it is a space, increment word count
//       words++;
//     }

//   }
//   // at the end of the for loop, no. of spaces have been
//   // counted. Increment word count one more time to get
//   // no. of words
//   words = words + 1;

//   cout << "No. of words = " << words << endl;

// }


#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}