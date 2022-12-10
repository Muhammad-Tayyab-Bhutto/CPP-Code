#include <iostream>
using namespace std;

int main()
{
    int charCount = 0, vowelCount = 0;
    int wordCount = 1, consonantCount = 0, semicolonCount = 0;
    // wordCount initialized from 1 because loop will start from space (2)
    char aplphabet;
    string paragraph = "Start with questioning (Can Artificial Intelligence replace humans some times yes >:( AI is a simulation of the human process by machines especially computer systems"
"and almost all businesses today employ some type of AI-specific applications of AI including expert systems, natural language process speech recognition and machine vision. AI can be categories as weak and strong AI. Week AI is a system designed and trained from a particular task. Strong AI which generalized human abilities mean it can find solutions and solve tasks without human interaction)."
"AI has made its way into a variety of industries that benefits both businesses and consumers like healthcare, finance, law and manufacturing in fact many technologies incorporate AI including automation, machine learning, natural learning processing, robotics and machine vision. The application of AI raises legal, ethical and security corners. for if an autonomous vehicle is involved in an accident, liability is unclear and hackers are using sophisticated and machine learning tools to gain access to sensitive systems. Despite risks, there are very few governing the use of AI tools. But experts assure that AI simply improves products and services and won't replace us, humans, anytime soon.";    

    for (int i = 1; i < paragraph.length(); i++)
    {
        charCount++;
        aplphabet = paragraph.at(i);
    

        if (aplphabet == 'a' || aplphabet == 'e' || aplphabet == 'i' || aplphabet == 'o'
        || aplphabet == 'u' || aplphabet == 'A' || aplphabet == 'E' || aplphabet == 'I' || aplphabet == 'O'
        || aplphabet == 'U')
        {
            vowelCount++;
        }
        else if (aplphabet == ';')
        {
            semicolonCount++;
        }
        else
        {
            consonantCount++;
        }
        if (aplphabet == ' ')
        {
            // cout<<paragraph.at(i+1);
            wordCount++;
        }
    }
    
    
    cout<<"Character in paragraph are: "<<charCount<<endl;
    cout<<"Vowels in paragraph are: "<<vowelCount<<endl;
    cout<<"Consonant in paragraph are: "<<consonantCount<<endl;
    cout<<"Semicolons in paragraph are: "<<semicolonCount<<endl;
    cout<<"Words in paragraph are: "<<wordCount<<endl;
    
    return 0;
}