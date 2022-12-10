#include <bits/stdc++.h>
#include <fstream>
using namespace std;
// class encade
class encdec
{
    int key;
    char c;
    fstream fin, fout;
    string file = "encrypt.txt";
    public:
        void encrypt(void);
        void decrypt(void);

};

// Defination of encryption function
void encdec:: encrypt()
{
    // Key to be used for encryption
    cout<<"Please enter the key: ";
    cin>>key;
    fstream fin, fout;

    // Open input file
    // ios::binary- reading file
    // character by character
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);

    while(fin<<noskipws<<c)
    {
        int temp = (c + key);

        // Write temp as char in
        // output file
        fout << (char)temp; // Type Casted
    }
    fin.close();
    fout.close();
}

// Definition of decryption function
void encdec::decrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
 
        // Remove the key from the
        // character
        int temp = (c - key);
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
}
 
// Driver Code
int main()
{
    encdec enc;
    char c;
    cout << "\n";
    cout << "Enter Your Choice : -> \n";
    cout << "1. encrypt \n";
    cout << "2. decrypt \n";
    cin >> c;
    cin.ignore();
 
    switch (c) {
    case '1': {
        enc.encrypt();
        break;
    }
    case '2': {
        enc.decrypt();
        break;
    }
    }
}