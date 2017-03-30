using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        
        //variables
        int totalInputs;
        int inputs = 0;
        Stack<int> myStack = new Stack<int>();
        int[] maxValues = new int[1000000];
        int arrSize = 0;
        
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
                //add second input to stack
                case 1:
                    int newElement = int.Parse(values[1]);
                    myStack.Push(newElement);
                    //Console.Write(myStack.Peek() + "\n");
                    arrSize++;
                    maxValues[999999] = arrSize;
                    placeInMaxArray(ref maxValues, newElement);
                    printArray(maxValues);
                    break;
                //pop input from stack        
                case 2:
                    if (myStack.Count != 0){
                        Console.Write(myStack.Peek() + "\n");
                        myStack.Pop();
                    }
                    break;
                //output max value in stack        
                case 3: 
                    Console.Write(val1);
                    break;        
            }
        }
    }
    
    public static void placeInMaxArray(ref int []arr, int newNum){
        int pos = 0;
        int size = arr[999999];
        int curr = 0;
        while(newNum <= arr[curr] && curr != size - 1){
            if(newNum >= arr[curr]){
                pos = curr;
            }
            curr++;    
        }
        if(curr == size - 1){
            arr[size-1] = newNum;
            return;
        }
        else{
            for(int i = size-1; i > pos; i--){
                arr[i+1] = arr[i];
            } 
        }
        arr[pos] = newNum;
        return; 
    }   

    public static void printArray(int[] arr){
        int size = arr[999999];
        for(int i = 0; i < size; i++){
            Console.Write(arr[i] + "\n");
        } 
    }
}


