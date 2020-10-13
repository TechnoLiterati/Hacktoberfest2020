// Binary Search code to find if an element exists in a given array. 
// If yes, output will be that index at which the element is found else output will be -1 since no such element exists. 

import java.io.*;
import java.util.*;
class binarySearchJava{
    public static Scanner scn=new Scanner(System.in);

    public static int binarySearch(int[] arr, int x){

        int li=0;                //left iterator
        int ri=arr.length-1;     //right iterator
        while(li<=ri){
            int mid=(li+ri)/2;   

            if(arr[mid]==x)
            return mid;

            else if(arr[mid]<x)
            li=mid+1;

            else
            ri=mid-1;
        }
        //if the number to be found(x) is not present in the given array arr return -1
        return -1;
    } 


    public static void main(String[] args){
        System.out.print("Enter size of array: ");
        int n=scn.nextInt();   

        int[] arr=new int[n];
        System.out.print("Enter numbers in the array: ");
        for(int i=0 ; i<arr.length ;i++)
        arr[i]=scn.nextInt();

        System.out.print("Enter nuumber to be found: ");
        int data=scn.nextInt();

        System.out.print("Index at which data is present: ");
        int ans= binarySearch(arr,data);
        System.out.println(ans);
    }
}

