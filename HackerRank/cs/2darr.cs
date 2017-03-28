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
                int arr_i = 0;
                while((streamReader.ReadLine()) != null && arr_i < 6){
                       string[] arr_temp = streamReader.ReadLine().Split(' ');
                       arr_i++;
                       arr[arr_i] = Array.ConvertAll(arr_temp, Int32.Parse);
                }
         }
           //string[] arr_temp = Console.ReadLine().Split(' ');
           //arr[arr_i] = Array.ConvertAll(arr_temp,Int32.Parse);
    }

    static void printArr(int[][] arr){
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                Console.Write(arr[i][j].ToString() + " ");
            }
        }
        
    }
}

