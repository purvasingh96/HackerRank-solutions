import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class findRunningMedian {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        PriorityQueue<Integer> maxHeap=new PriorityQueue<Integer>(
            new Comparator<Integer> () {
                public int compare(Integer a, Integer b) {
                return b - a;
            }
        });
        PriorityQueue<Integer> minHeap=new PriorityQueue<Integer>();
        int first=sc.nextInt();
        int second=sc.nextInt();
        if(first<second){
            maxHeap.add(first);
            minHeap.add(second);
        }
        else{
            maxHeap.add(second);
            minHeap.add(first);
        }
        System.out.println((float)first);
        System.out.println(((float)(first+second))/2);
        for(int i=0;i<n-2;i++){
            int t=sc.nextInt();
            if(t<maxHeap.peek())maxHeap.add(t);
            else minHeap.add(t);
            int diff=minHeap.size()-maxHeap.size();
            if(diff>1)maxHeap.add(minHeap.poll());
            if(diff<-1)minHeap.add(maxHeap.poll());
            diff=minHeap.size()-maxHeap.size();
            if(diff==0)System.out.println(((float)(minHeap.peek()+maxHeap.peek()))/2);
            else if(diff==1)System.out.println((float)minHeap.peek());
            else System.out.println((float)maxHeap.peek());
        }
    }
}
