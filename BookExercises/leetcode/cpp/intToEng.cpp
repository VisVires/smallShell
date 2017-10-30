#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stack>
using namespace std;

  string addSuffix(int commas){
    switch(commas){
            case 1: return "Thousand ";
                    break;
            case 2: return "Million ";
                    break;
            case 3: return "Billion ";
                    break;
            default: return "";
    } 
}


    string hunderedToWords(deque<int> hundered, int commas){

        string w = "";
        string space = " ";


        string ones [20] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

        string tens [8] = { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"}; 

        if(hundered.size() > 2 && hundered[0] != 0){
            w += ones[hundered[0]-1] + " Hundred";
        } else if (hundered.size() < 3){
            while(hundered.size() < 3){
                hundered.push_front(0);
            }
        }

        int num = (10 * hundered[1]) + hundered[2];
        if(num == 0){
            w += space + addSuffix(commas);
            return w;
        }
        
        if(w != "")
            w += space;
        
        
        if(hundered[1] > 1){
            if(hundered[2] != 0)
                w += tens[hundered[1]-2] + space + ones[hundered[2] - 1];
            else
               w += tens[hundered[1]-2];
        } else {
                w += ones[num-1];            
        }
        
        w += space + addSuffix(commas);
        

        return w;
    }


    string numberToWords(int num){
        int commas;
        string number = to_string(num);

        unsigned int numLength = number.length();
        deque<int> n;

        if(num == 0){
            return "Zero";
        }

        //stack it up
        for(auto i = 0u; i < numLength; i++){
           int c = number.at(i) - '0';
           n.push_front(c);
        }

        //cout << n.front() << endl;
        string finalNum = "";


        if(numLength == 10){
            commas = 3;        
        } else if (numLength >= 7 && numLength < 10){
            commas = 2;
        } else if (numLength >= 4 && numLength < 7){
            commas = 1;
        } else {
            commas = 0;
        }

        deque<int> hundered;
        unsigned int remainder = n.size();

        while (commas >= 0){
            hundered.clear();
            if(n.size() > 3){
                remainder = n.size() - (3 * commas);
            } else {
                remainder = n.size();
            }

            for(auto i = 0u; i < remainder; i++){
                if(!n.empty()){
                    hundered.push_back(n.back());
                    n.pop_back();
                }
            }
     
            finalNum += hunderedToWords(hundered, commas);
            commas--;
        }
        
       finalNum.erase(std::find_if(finalNum.rbegin(), finalNum.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), finalNum.end());

        return finalNum;
}


int main() {
    cout << "Please enter a number between 0 and 2,147,483,647: ";
    int entry;
    cin >> entry;

    while (entry != -1){
        //cout << numberToWords(entry) << endl;
        string word = numberToWords(entry);
        cout << word << endl;
        cout << "Please enter a number between 0 and 2,147,483,647: ";
        cin >> entry;
    }

    return 0;
} 






