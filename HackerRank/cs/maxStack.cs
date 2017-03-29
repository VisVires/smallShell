using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        int totalInputs;
        int inputs = 0;
        Stack<int> myStack = new Stack<int>();
        //get number of inputs from STDIN   
        totalInputs = Convert.ToInt32(Console.ReadLine());
        //get inputs from user
        while(inputs != totalInputs){
            inputs++;
            //get inputs from line
            string newInput = (Console.ReadLine());
            string[] values = newInput.Split(' ');
            int val1 = int.Parse(values[0]);
            switch(val1){
                case 1:
                    int newElement = int.Parse(values[1]);
                    myStack.Push(newElement);
                    Console.Write(myStack.Peek() + "\n");
                    break;        
                case 2:
                    if (myStack.Count != 0){
                        Console.Write(myStack.Peek() + "\n");
                        myStack.Pop();
                    }
                    break;        
                case 3: 
                    Console.Write(val1);
                    break;        
            }
        }

    }
   
}
