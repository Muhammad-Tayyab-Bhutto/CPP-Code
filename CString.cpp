#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char str[4] = {'C', '+', '+', '\0'};
    char str[4] = "C++";
    char str2[4];
    strcpy(str2, "Bye");
    int num = strlen(str);
    char str3[] = "Hello! ";
    // cin >> str3; // this will ignore space so for it we have another solution using getline
    cin.get(str3, 20);
    strcat(str3, " World :)");
    char my_str[13] = {'H', 'e', 'l', 'l', 'o',' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char my_str2[13];
    strncpy(my_str2, my_str, 10);

    cout << "The value of my str2 is. " << my_str2 << endl;

    cout << num << endl;
    if (strcmp(str, str2))
    {
        cout << "Strings are not same" << endl;
    }
    else
    {
        cout << "Strings are same" << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << str[i];
    }
    int index = 0;
    while (str3[index] != '\0')
    {
        cout << str3[index];
        // cout << index;
        index++;
    }
    // strncat is used to concate two string it takes three arguments
    char str_fun[40];
    // Assingning value using strcpy
    strcpy(str_fun, "Hello World!");
    strncat(str_fun, "Bye.", 5);
    cout << endl << str_fun << endl;

    // atoi==> it is used for type cast string into integers
    //   -atol===> atol returns a value of type long
    //   -atof===> atof  returns a value of type double char str[] = "9.999";


    // char str_fun2[] = "#1234"; This will return 0 because # is not a digit
    char str_fun2[] = "1234";
    cout << atoi(str_fun2) << endl;


    return 0;
}