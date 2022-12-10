#include <iostream>

using namespace std;


int main()
{
    String Q1 ="MS-Word is an example of _____\nA) An operating system	\nB) A processing device\nC) Application software	\nD) An input device";
    String Q2 ="Ctrl, Shift and Alt are called .......... keys.\nA) modifier	\nB) function\nC) alphanumeric	\nD) adjustment\n";
    String Q3 ="A computer cannot boot if it does not have the _____\nA) Compiler	\nB) Loader\nC) Operating system	\nD) Assembler\n";
    String Q4 ="________ is the process of dividing the disk into tracks and sectors\nA) Tracking	\nB) Formatting\nC) Crashing	\nD) Allotting\n";
    String Q5 ="Junk e-mail is also called ______\nA) Spam	\nB) Spoof\nC) Sniffer script	\nD) Spool\n";
    String Q6 ="Microsoft Office is an example of a\nA) Closed source software	\nB) Open source software\nC) Horizontal market software	\nD) vertical market software\n";
    String Q7 ="By default, your documents print in ________ mode\nA) Landscape	\nB) Portrait\nC) Page Setup	\nD) Print View\n";
    String Q8 ="_____are attempts by individuals to obtain confidential information from you by falsifying their identity\nA) Phishing trips	\nB) Computer viruses\nC) Phishing scams	\nD) Spyware scams\n";
    String Q9 ="Storage capacity of magnetic disk depends on\nA) disk pack in disk surface	\nB) tracks per inch of surface\nC) bits per inch of tracks	\nD) All of the above\n";
    String Q10 ="Several computers linked to a server to share programs and storage space________\nA) Network	\nB) GroupinC) Library	\nD) Integrated system\n";
    System.out.println(Q1);

    
    if (answer == 'c' || answer == 'C')
    {
        System.out.println(Q2);
        cin>>answer;
        if (answer == 'a' || answer == 'A')
        {
            System.out.println(Q3);
            cin>>answer;
            if (answer == 'C' || answer == 'c')
            {
                System.out.println(Q4);
                cin>>answer;
                if (answer == 'b' || answer == 'B')
                {
                    System.out.println(Q5);
                    cin>>answer;
                    if (answer == 'a' || answer == 'A')
                    {
                        System.out.println(Q6);
                        cin>>answer;
                        if (answer == 'c' || answer == 'C')
                        {
                            System.out.println(Q7);
                            cin>>answer;
                            if (answer == 'B' || answer == 'B')
                            {
                                System.out.println(Q8);
                                cin>>answer;
                                if (answer == 'c' || answer == 'C')
                                {
                                    System.out.println(Q9);
                                    cin>>answer;
                                    if (answer == 'd' || answer == 'D')
                                    {
                                        System.out.println(Q10);
                                        cin>>answer;
                                        if (answer == 'a' || answer == 'A')
                                        {
                                            System.out.println("\nCongratulation You are winner of this game");
                                        }
                                        else 
                                        {
                                            System.out.println("Sorry You Lost");
                                        }
                                    }
                                    else 
                                    {
                                        System.out.println("Sorry You Lost");
                                    }
                                }
                                else 
                                {
                                    System.out.println("Sorry You Lost");
                                }
                            }
                            else 
                            {
                                System.out.println("Sorry You Lost");
                            }
                        }
                        else 
                        {
                            System.out.println("Sorry You Lost");
                        }
                    }
                    else 
                    {
                        System.out.println("Sorry You Lost");
                    }
                }
                else 
                {
                    System.out.println("Sorry You Lost");
                }
            }
            else 
            {
                System.out.println("Sorry You Lost");
            }
        }
        else 
        {
            System.out.println("Sorry You Lost");
        }
    }
    else 
    {
        System.out.println("Sorry You Lost");
    }

}