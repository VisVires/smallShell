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
        int maxSum = getMaxSumOfHourGlasses(arr);
        Console.Write(maxSum + "\n"); 
    }

    static void printArr(int[][] arr){
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                Console.Write(arr[i][j].ToString() + " ");
            }
            Console.WriteLine();
        }    
    }

    static int getMaxSumOfHourGlasses(int[][] arr){
        int maxSum = -10000;
        int currSum;
        for (int row = 1; row < 5; row++){
            for(int col = 1; col < 5; col++){
                currSum = getSumOfHourGlass(arr, row, col);
                if (currSum >= maxSum){
                    maxSum = currSum;
                }
            }
        }
        return maxSum;
    }
    
    static int getSumOfHourGlass(int[][] arr, int row, int col){
        int leftUpper, middleUpper, rightUpper, center, leftLower, middleLower, rightLower, sum;
        leftUpper = arr[row-1][col-1];
        middleUpper = arr[row-1][col];
        rightUpper = arr[row-1][col+1];   
        center = arr[row][col];
        leftLower = arr[row+1][col-1];
        middleLower = arr[row+1][col];
        rightLower = arr[row+1][col+1];
        sum = leftUpper + middleUpper + rightUpper + center + leftLower + middleLower + rightLower;
        return sum;
    }
}

