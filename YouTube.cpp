// Pure virtual funtions in class
// Abstract base class must have at least one pure virtual fuction
#include <iostream>
using namespace std;

class YouTube
{
    protected:
    string ytchannel;    
    public:
       
        // YouTube(string ytchannel, float subscribers, float views, float watchHours):
        YouTube(string ytchannel)
        {
            this->ytchannel = ytchannel;
        }
        // using virtual pure function in concept of abstraction
        virtual void display() = 0;

};

class Ranking: public YouTube
{
    protected:
    int totalvideos;
    int views;
    int subscribers;
    int rank;
    public:
        void setData(int totalvideos, int views, int subscribers)
        {
            this->totalvideos = totalvideos;
            this->views = views;
            this->subscribers = subscribers;
        }
        void display()
        {
            cout<<"Total Channel Vidoes: "<<totalvideos<<endl;
            cout<<"Your Channel Views: "<<views<<endl;
            cout<<"Your Channel subscribers are: "<<subscribers;
            if (views >= 1000000 || subscribers > 1000000)
            {
                cout<<"Your has high rank according to youtube."<<endl;
            }
            else if (views >= 100000 || subscribers > 100000)
            {
                cout<<"Your has high rank according to youtube."<<endl;
            }           
            else if (views >= 100000 || subscribers > 10000)
            {
                cout<<"Your has middle rank according to youtube."<<endl;
            }
            else if (views >= 1000000 || subscribers > 10000)
            {
                cout<<"Your has high middle according to youtube."<<endl;
            }
            else if (views >= 100000 || subscribers > 1000)
            {
                cout<<"Your has low rank according to youtube."<<endl;
            }
            else
            {
                cout<<"Your Channel Needs Imrovements. Thanks!"<<endl;
            }
        }
};

class Earing: public Ranking
{
    float ytearning;
    public:
        void setData()
        {
            ytearning = (views/1000)*10;    
        }    
        void display()
        {
            cout<<"Your Channel Earing is: ";
            setData();
        }
};
int main()
{
    YouTube* y1[2];
    Ranking *absBase_class_ptr;
    Earing *derived_class_ptr;
    absBase_class_ptr->setData(15000, 461564, 151564);
    // absBase_class_ptr->display()
    derived_class_ptr->setData();
    // y1[0] = absBase_class_ptr;
    // y1[1] = derived_class_ptr;
    // y1[0]->display();
    // y1[1]->display();


    return 0;
}