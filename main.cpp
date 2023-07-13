/*Weather App
         Dhanasri S P
         Vivekanandha college of Engineering for Women
Concepts used
     1.Functions
     2.Classes
     3.Single Inheritance
     4.Multi-Dimensional Array */
#include<iostream>
using namespace std;
class myWeather
{
    public:
    void Weather()
    {    
    int i;            
    char loc[20];
    cout<<"Enter your Location \n"<<endl;
    cin>>loc;
    }
};
void Info()
{   
    cout<<"\nMain Menu "<<endl;
    cout<<"\t1. Today "<<endl;
    cout<<"\t2. Yesterday "<<endl;
    cout<<"\t3. Weekly "<<endl;
    cout<<"\t4. Monthly "<<endl;
    cout<<"\t5. Yearly "<<endl;
}
class myReport : public myWeather
{
    public:
    void YesterdayReport()
    {
        int a=3,b=3;
        string dreport[10]={"Time\t", "Thurs\t"};
        cout<<"\nYesterday Report "<<endl;
        cout<<"\n____________ "<<endl;
        cout<<"\n\tThursday \n"<<endl;
        for(int i=0;i<3;i++)
            cout<<dreport[i];
        cout<<endl;
        
        int yesterday[a][b]={{6,28},
                             {9,27},
                             {11,27},
                             {1,26},
                             {3,27},
                             {5,30},
                             {8,28}};

        for(a=0;a<7;a++)
        {
            for(b=0;b<2;b++){
                cout<<yesterday[a][b]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nHumidity: 33'"<<endl; 
        cout<<"\nClimate: Partly Cloudy"<<endl; 
        cout<<"\nPressure: 29.80 'Hg'"<<endl; 
        cout<<"\nWinds Speed: 10 to 15 km/h"<<endl;   
    }

    void TodayReport()
    {
        int a=3,b=3;
        string dreport[10]={"Time\t"," Fri\t"};
        cout<<"\nToday Report "<<endl;
        cout<<" \n___________ "<<endl;
        cout<<"\n\tFriday\n"<<endl;
        for(int i=0;i<3;i++)
            cout<<dreport[i];
        cout<<endl;
        
        int today[a][b]={{6,30},
                         {9,27},
                         {11,29},
                         {1,25},
                         {3,26},
                         {5,26},
                         {8,28}};
        
        for(a=0;a<7;a++)
        {
            for(b=0;b<2;b++){
                cout<<today[a][b]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nHumidity: 37'"<<endl; 
        cout<<"\nClimate: Dry"<<endl; 
        cout<<"\nPressure: 30.80 'Hg'"<<endl; 
        cout<<"\nWinds Speed: 10 km/h"<<endl;
    }

    void WeeklyReport()
    {
        int a=8,b=8;
        string wreport[10]={"Time\t","Sun\t","Mon\t","Tues\t","Wednes "," Thurs "," Fri "," Satur\t"};
        cout<<"\nWeekly Report "<<endl;
        cout<<"\n __________ "<<endl;
        cout<<"\n\tAugust Week4 \n"<<endl;
        for(int i=0;i<9;i++)
            cout<<wreport[i];
        cout<<endl;
        
        int today[a][b]={{6,26,26,28,29,27,30,31},
                         {9,28,29,28,26,26,27,28},
                         {11,28,29,30,29,28,29,29},
                         {1,27,26,29,28,26,25,26},
                         {3,28,27,25,24,26,26,24},
                         {5,28,28,27,26,27,26,28},
                         {8,29,28,28,26,27,28,28}};
        
        for(a=0;a<7;a++)
        {
            for(b=0;b<8;b++){
                cout<<today[a][b]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nHumidity: 33'"<<endl; 
        cout<<"\nClimate: Cloudy"<<endl; 
        cout<<"\nPressure: 27.80 'Hg'"<<endl; 
        cout<<"\nWinds Speed: 15 to 25 km/h"<<endl;        
    }

    void MonthlyReport()
    {
        int a=10,b=10;
        string mreport[10]={"Week\t","Sun\t","Mon\t","Tues\t","Wednes "," Thurs "," Fri "," Satur\t"};
        cout<<"\nMonthly Report "<<endl;
        cout<<"\n____________ "<<endl;
        cout<<"\n\tMay \n"<<endl;
        for(int i=0;i<9;i++)
            cout<<mreport[i];
        cout<<endl;
        
        int mon[a][b]={{1,28,30,31,28,29,27,30,27},
                       {2,30,28,29,27,30,31,27,27},
                       {3,28,29,27,30,28,28,26,26},
                       {4,28,28,29,27,30,28,29,28}};
        
        for(a=0;a<4;a++)
        {
            for(b=0;b<8;b++){
                cout<<mon[a][b]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nHumidity: 30'"<<endl; 
        cout<<"\nClimate: Dry"<<endl; 
        cout<<"\nPressure: 31.80 'Hg'"<<endl; 
        cout<<"\nWinds Speed: 12 km/h"<<endl;
    }

    void YearlyReport()
    {
        int a=14,b=14;
        string wreport[14]={"Year\t","Jan\t","Feb\t","Mar\t","Apr\t ","May\t","June "," July\t","Aug\t","Sept\t","Oct\t","Nov\t","Dec\t"};
        cout<<"\nYearly Report "<<endl;
        cout<<"\n_____________ "<<endl;
        cout<<"\n\t2010-2016\n"<<endl;
        for(int i=0;i<14;i++)
            cout<<wreport[i];
        cout<<endl;
        
        int today[a][b]={{2010,26,26,28,29,27,30,31,27,28,27,27,30},
                         {2011,28,30,31,27,28,28,29,28,27,30,31,29},
                         {2012,28,29,28,26,26,27,28,30,29,28,29,29},
                         {2013,27,26,28,26,26,27,28,29,28,26,25,26},
                         {2014,28,28,26,26,27,28,27,25,24,26,26,24},
                         {2015,28,28,26,26,27,28,28,27,26,27,26,28},
                         {2016,29,28,26,26,27,28,28,28,26,27,28,28}};
        
        for(a=0;a<7;a++)
        {
            for(b=0;b<13;b++){
                cout<<today[a][b]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nHumidity: 27'"<<endl; 
        cout<<"\nClimate: Rainny "<<endl; 
        cout<<"\nPressure: 26.80 'Hg'"<<endl; 
        cout<<"\nWinds Speed: 15 to 20 km/h"<<endl;        
    }
};

int main()
{
    int ch;
    myWeather w;
    w.Weather();
    myReport r;
    Info();
    
    cout<<"\n\tEnter Option: ";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
            r.TodayReport();
            break;
        case 2:
            r.YesterdayReport();
            break;
        case 3:
            r.WeeklyReport();
            break;
        case 4:
            r.MonthlyReport();
            break;
        case 5:
            r.YearlyReport();
            break;
        default:
            cout << "Invalid option." << endl;
    }

    return 0;   
}



