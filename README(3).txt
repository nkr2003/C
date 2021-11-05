#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? counter;
   ?? n;
   ?? flag;

   raptor_prompt_variable_zzyz ="Accept a positive Interger greater than 2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   counter =2;
   flag =false;
   while (!(n % counter==0))
   {
      counter =counter+1;
      if (counter<n)
      {
      }
      else
      {
         cout << "The number is Prime" << endl;         flag =true;
      }
   }
   if (flag==true)
   {
   }
   else
   {
      cout << "Number is composite" << endl;   }

   return 0;
}