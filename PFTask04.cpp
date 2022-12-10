#include <iostream>
using namespace std;

int main()
{
    string Q1 ="MS-Word is an example of _____\nA) An operating system	\nB) A processing device\nC) Application software	\nD) An input device";
    string Q2 ="Ctrl, Shift and Alt are called .......... keys.\nA) modifier	\nB) function\nC) alphanumeric	\nD) adjustment\n";
    string Q3 ="A computer cannot boot if it does not have the _____\nA) Compiler	\nB) Loader\nC) Operating system	\nD) Assembler\n";
    string Q4 ="________ is the process of dividing the disk into tracks and sectors\nA) Tracking	\nB) Formatting\nC) Crashing	\nD) Allotting\n";
    string Q5 ="Junk e-mail is also called ______\nA) Spam	\nB) Spoof\nC) Sniffer script	\nD) Spool\n";
    string Q6 ="Microsoft Office is an example of a\nA) Closed source software	\nB) Open source software\nC) Horizontal market software	\nD) vertical market software\n";
    string Q7 ="By default, your documents print in ________ mode\nA) Landscape	\nB) Portrait\nC) Page Setup	\nD) Print View\n";
    string Q8 ="_____are attempts by individuals to obtain confidential information from you by falsifying their identity\nA) Phishing trips	\nB) Computer viruses\nC) Phishing scams	\nD) Spyware scams\n";
    string Q9 ="Storage capacity of magnetic disk depends on\nA) disk pack in disk surface	\nB) tracks per inch of surface\nC) bits per inch of tracks	\nD) All of the above\n";
    string Q10 ="Several computers linked to a server to share programs and storage space________\nA) Network	\nB) GroupinC) Library	\nD) Integrated system\n";
    
    char answer;
    char choice;
    int count = 1;
    do
    {
        cout<<"Do You Want To Continue (y/n): ";
        cin>>choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
        cout<<Q1<<endl;
        cin>>answer;
        if (answer == 'c' || answer == 'C')
        {
            cout<<Q2;
            cin>>answer;
            if (answer == 'a' || answer == 'A')
            {
                cout<<Q3<<endl;
                cin>>answer;
                if (answer == 'C' || answer == 'c')
                {
                    cout<<Q4;
                    cin>>answer;
                    if (answer == 'b' || answer == 'B')
                    {
                        cout<<Q5;
                        cin>>answer;
                        if (answer == 'a' || answer == 'A')
                        {
                            cout<<Q6;
                            cin>>answer;
                            if (answer == 'c' || answer == 'C')
                            {
                                cout<<Q7;
                                cin>>answer;
                                if (answer == 'B' || answer == 'B')
                                {
                                    cout<<Q8;
                                    cin>>answer;
                                    if (answer == 'c' || answer == 'C')
                                    {
                                        cout<<Q9;
                                        cin>>answer;
                                        if (answer == 'd' || answer == 'D')
                                        {
                                            cout<<Q10;
                                            cin>>answer;
                                            if (answer == 'a' || answer == 'A')
                                            {
                                                cout<<"\nCongratulation You are winner of this game";
                                            }
                                            else 
                                            {
                                                cout<<"Sorry You Lost";
                                            }
                                        }
                                        else 
                                        {
                                            cout<<"Sorry You Lost";
                                        }
                                    }
                                    else 
                                    {
                                        cout<<"Sorry You Lost";
                                    }
                                }
                                else 
                                {
                                    cout<<"Sorry You Lost";
                                }
                            }
                            else 
                            {
                                cout<<"Sorry You Lost";
                            }
                        }
                        else 
                        {
                            cout<<"Sorry You Lost";
                        }
                    }
                    else 
                    {
                        cout<<"Sorry You Lost";
                    }
                }
                else 
                {
                    cout<<"Sorry You Lost";
                }
            }
            else 
            {
                cout<<"Sorry You Lost"<<endl;
            }
        }
    else 
    {
        cout<<"Sorry You Lost";
    }
    count++;
    } while (count < 4);
    

    return 0;
}