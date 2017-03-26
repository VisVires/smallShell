using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        string n;
        var fileStream = new FileStream(@"array.txt", FileMode.Open, FileAccess.Read);
        using (var streamReader = new StreamReader(fileStream))
        {
            n = streamReader.ReadLine();
            string[] arr_temp = streamReader.ReadLine().Split(' ');
        }
        int num = Convert.ToInt32(n);
        Console.Write(num.ToString());
        int[] arr = Array.ConvertAll(arr_temp,Int32.Parse);
        printInReverse(arr);
    }
   
    static void printInReverse(int[] arr){
        for(int i = 0; i < arr.Length; i++){
            Console.Write(arr[i] + " ");
        }
    }   

}

