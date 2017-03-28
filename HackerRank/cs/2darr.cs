using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int[][] arr = new int[6][];
        var fileStream = new FileStream(@"array.txt", FileMode.Open, FileAccess.Read);
        //get numbers from file
        using (var streamReader = new StreamReader(fileStream))
        {
                for(int arr_i = 0; arr_i < 6; arr_i++){
                       string[] arr_temp = streamReader.ReadLine().Split(' ');
                       arr[arr_i] = Array.ConvertAll(arr_temp, Int32.Parse);
                }
         }
        printArr(arr);
    }

    static void printArr(int[][] arr){
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                Console.Write(arr[i][j].ToString() + " ");
            }
            Console.WriteLine();
        }
        
    }
}

