#include <iostream>
using namespace std;
class Clock
{ private:
  int hours;
  int minutes;
  int seconds;
  
  public:
  Clock()
  {
  hours=12; minutes=0; seconds=0;}
  
  Clock(int h,int m,int s)
  {hours=h; minutes=m; seconds=s;}
  
  int getHours(){return hours;}
  int getMinutes(){return minutes;}
  int getSeconds(){return seconds;}
  
  void setHours(int h){ hours=h; }
  void setMinutes(int m){ minutes=m; }
  void setSeconds(int s){ seconds=s;}
  
  void tick(){ 
	seconds=seconds+1; //added conditions in tic() funtion to update minutes seconds and hours while ticking
	if(seconds>=60){
		seconds = 60-seconds;
		minutes = minutes+1;
	}
	if(minutes>=60){
		minutes = 60-minutes;
		hours = hours+1;
	}
   }
  
	void printClock(){ 
		if(hours>12){ 
			cout<<"Time:"<<hours-12<<":"<<minutes<<":"<<seconds<<"PM\n";
		}
		else{
			cout<<"Time:"<<hours<<":"<<minutes<<":"<<seconds<<"AM\n";
		}
	}
   
	Clock addClocks(Clock c2){ 
		Clock c3;
	    c3.hours=hours+c2.hours;
	    c3.minutes=minutes+c2.minutes;
	    c3.seconds=seconds+c2.seconds;
	    if(c3.seconds>=60){
			c3.seconds=c3.seconds-60;
		    c3.minutes++;
		}
	    if(c3.minutes>=60){ 
			c3.minutes=c3.minutes-60;
		    c3.hours=c3.hours+1;
	    }
	    //only this condition needs to be checked
	    if(c3.hours>12){    
	    	c3.hours = 12 + c3.hours;
	    	c3.hours = c3.hours%12;
		}
	    return c3;
  }

    
};

int main() {
    cout<<"creating first clock object using default constructor";
    Clock c1;
    c1.printClock();
    cout<<"Ticking first clock object";
    for(int i=0;i<10;i++){
		cout<<"Tick"<<i+1<<" ";
        c1.tick();
        c1.printClock();
        }
    cout<<"creating second clock object using the second constructor";
    int h; cout<<"\nEnter value for hour:"; cin>>h;
    int m; cout<<"\nEnter value for minutes:"; cin>>m;
    int s; cout<<"\nEnter value for seconds:"; cin>>s;
    Clock c2(h,m,s);
    c2.printClock();
    cout<<"\nTicking second clock object"<<endl;
    for(int i=0;i<10;i++){
		cout<<"Tick"<<i+1<<" ";
        c2.tick();
        c2.printClock();
        }
        
    cout<<"\nAdding the time in the firstClock object to the time in the secondClock object to produce the thirdClock object \n Time in third clock is:\n";
    Clock c3 = c1.addClocks(c2);
    c3.printClock();
        
    cout<<"Changing the time in firstClock object to be: \n Time:07:23:15 AM";
        
    c1.setHours(7);
    c1.setMinutes(23);
    c1.setSeconds(15);
        
    if(c1.getHours()==c2.getHours() && c1.getMinutes()==c2.getMinutes() && c1.getSeconds()==c2.getSeconds()){
		cout<<endl<<"first Clock and second Clock have same time";
		}
    else{
		cout<<endl<<"first Clock and second Clock do not have same time";
		}
    return 0;
}

