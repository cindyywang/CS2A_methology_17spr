#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   string word[250];
   int count = 0;

   //parse every word as an element in string array word  
   while( ! cin.eof())
   {
      string str;
      cin >> str;
      if(count < 250)
      {  
         //blindly change 1st char of every str to lower case
         str[0] = tolower(str[0]);
         //avoid the last str == "" before the end of the file
         if(str != "")
         {
            word[count] = str;
            count++;
         }
      }
      else
      {
         cout << "Too many words." << endl;
         exit(1);
      }
   }
   //Set count to be the max index
   count--;

   //bubble sort
   //outer loop from 0 index to the one before max index
   //right most is always biggest
   for(int i = 0; i < count; i++)
   {  
      //index(i+1) can be no bigger than the max index
      if((word[i] > word[i + 1]) && ((i + 1) <= count))
      {  
         //swap but & doesn't work for array
         string temp;
         temp = word[i + 1];
         word[i + 1] = word[i];
         word[i] = temp;
      }
      //inner loop from the one before current biggest to the left most
      for(int j = i; j > 0; j--)
      {
         //j>0->j-1>=0
         if(word[j] < word[j - 1])
         {
            string temp;
            temp = word[j - 1];
            word[j - 1] = word[j];
            word[j] = temp;
         }
      }
   }
   //print
   //first one without endl
   cout << right << setw(15) << word[0];
   cout << ":" << " x";
   //if a new word then endl before print it out
   for(int i = 1; i < count; i++)
   {
      if(word[i] != word[i - 1])
      {  
         cout << endl;
         cout << right << setw(15) << word[i];
         cout << ":" << " x";
      }
      else
      {
         cout << "x";
      }
   }
   //last one with endl
   if(word[count] != word[count - 1])
   {
      cout << endl;
      cout << right << setw(15) << word[count];
      cout << ":" << " x" << endl;
   }
   else
   {
      cout  << "x" << endl;
   }
   return 0;
}

/*
 --- Run 1 ---
 CindyWs:Assignment6 ying2ra$ ./a.out < JFK.txt
 accept: x
 and: xxxxx
 are: xxxx
 because: xxxx
 best: x
 but: x
 challenge: x
 choose: xx
 decade: x
 do: x
 easy: x
 energies: x
 go: xx
 goal: x
 hard: x
 in: x
 intend: x
 is: x
 measure: x
 moon: xx
 not: x
 of: x
 one: xxx
 organize: x
 other: x
 others: x
 our: x
 postpone: x
 serve: x
 skills: x
 that: xxx
 the: xxxxx
 they: xx
 things: x
 this: x
 to: xxxxxxxx
 too: x
 unwilling: x
 we: xxxxx
 which: x
 will: x
 willing: x
 win: x

 --- Run 2 ---
 CindyWs:Assignment6 ying2ra$ ./a.out < IHaveADream.txt
 a: xxxxxxxxxxx
 able: xx
 alabama: xx
 all: x
 american: x
 an: x
 and: xxxxxxxx
 are: x
 as: x
 at: x
 be: xxxxx
 black: xx
 boys: xx
 brotherhood: x
 brothers: x
 but: x
 by: xx
 character: x
 children: x
 color: x
 content: x
 created: x
 creed: x
 day: xxxxxx
 deeply: x
 difficulties: x
 down: xx
 dream: xxxxxxxxxx
 dripping: x
 equal: x
 even: xx
 face: x
 former: xx
 four: x
 freedom: x
 friends: x
 georgia: x
 girls: xx
 governor: x
 hands: x
 have: xxxxxxxx
 having: x
 heat: xx
 hills: x
 his: x
 hold: x
 i: xxxxxxxxx
 in: xxxx
 injustice: x
 interposition: x
 into: x
 is: x
 it: x
 its: xxx
 join: x
 judged: x
 justice: x
 lips: x
 little: xxx
 live: xx
 meaning: x
 men: x
 mississippi: x
 my: xx
 nation: xx
 not: x
 nullification: x
 oasis: x
 of: xxxxxxxxxxxxx
 on: x
 one: xxxxxx
 oppression: x
 out: x
 owners: x
 racists: x
 red: x
 right: x
 rise: x
 rooted: x
 say: x
 self-evident: x
 sisters: x
 sit: x
 skin: x
 slave: x
 slaves: x
 so: x
 sons: xx
 state: xx
 still: x
 sweltering: xx
 table: x
 that: xxxxxx
 the: xxxxxxxxxxxxx
 their: xx
 there: x
 these: x
 they: x
 this: x
 though: x
 to: xxxx
 today: xxxx
 together: x
 tomorrow: x
 transformed: x
 true: x
 truths: x
 up: x
 vicious: x
 we: xx
 where: x
 white: xx
 will: xxxxxx
 with: xxxxxx
 words: x
 you: x

 --- Run 3 ---
 CindyWs:Assignment6 ying2ra$ ./a.out < GettysburgAddress.txt
 Too many words.
 */

















                                                                                                                                 
                                                                                                                                               
                                                                                                                                               
                                                                                                                                                          
                                                                                                                                                          
                                                                                                                                                                       
                                                                                                                                                                       
                                                                                                                                                                                
                                                                                                                                                                                
                                                                                                                                                                                             
                                                                                                                                                                                             
                                                                                                                                                                                                     
                                                                                                                                                                                                     
                                                                                                                                                                                                                
                                                                                                                                                                                                               
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            
                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                                                                                                                           

