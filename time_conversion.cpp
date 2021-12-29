#include <iostream>
#include <string>

using namespace std;

string to_24hr(string);

int main(){

        string time;
        cin>>time;
        cout<<to_24hr(time);
            
    return 0;
}

string to_24hr(string s){

    if (s[1] == ':' || s[4] == ':' || s[7] == ':')
        return "Please Enter in the form of HH:MM:SSAM/PM";
    
        string converted_time="",hours_inString="";  //HH:MM:SSAM format
        int hours = 00;

        hours_inString.push_back(s[0]);
        hours_inString.push_back(s[1]);

   for (int i = 0; i < s.size(); i++)
   {
       if (s[i] == 'A' || s[i] == 'P')
       {
          break;
       }else{
           converted_time.push_back(s[i]);
       }
   }
   
   hours = stoi(hours_inString);

   if(s[s.size()-2] == 'P' && hours !=12)                
        hours += 12;
   
   if(s[s.size()-2] == 'A' && hours == 12){
    
     converted_time[0] = '0';
     converted_time[1] = '0';

   }else{
   hours_inString = to_string(hours);

    if (hours_inString[1] == '\0')
    {
      char temp = hours_inString[0];
      hours_inString[0] = '0';
      hours_inString.push_back(temp);  
    }
    
   converted_time[0] = hours_inString[0];
   converted_time[1] = hours_inString[1];
   }

    return converted_time;
}