using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        int totalInputs;
        int inputs = 0;
        //get number of inputs from STDIN   
        totalInputs = Convert.ToInt32(Console.ReadLine());
        //get inputs from user
        while(inputs != totalInputs){
            inputs++;
            int newInput = Convert.ToInt32(Console.ReadLine());
            switch(newInput){
                case 1:
                    Console.Write(newInput);
                    break;        
                case 2:
                    Console.Write(newInput);
                    break;        
                case 3: 
                    Console.Write(newInput);
                    break;        
            }
        }

    }
   
}
