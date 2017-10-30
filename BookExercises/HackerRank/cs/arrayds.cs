using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        //number reader
        string n;
        string[] arr_temp;
        //get first number
        var fileStream = new FileStream(@"array.txt", FileMode.Open, FileAccess.Read);
        //get numbers from file
        using (var streamReader = new StreamReader(fileStream))
        {
            n = streamReader.ReadLine();
            arr_temp = streamReader.ReadLine().Split(' ');
        }
        //convert original number to an int
        int num = Convert.ToInt32(n);
        Console.Write(num.ToString()+ "\n");
        //int[] arr = Array.ConvertAll(arr_temp,Int32.Parse);
        printInReverse(arr_temp);
    }
   
    //function to print the original input in reverse
    static void printInReverse(string[] arr){
        for(int i = arr.Length - 1; i >= 0; i--){
            Console.Write(arr[i] + " ");
        }
    }   

}

