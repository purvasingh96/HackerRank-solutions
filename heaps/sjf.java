import java.io.*;
import java.util.*;
public class sjf {
private static class Costumer {
    Integer arrivalTime;
    Integer pizzaTime;
  }
  
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
    final int N = sc.nextInt();
    PriorityQueue<Costumer> costumers = new PriorityQueue<>(N, (a, b) -> a.arrivalTime.compareTo(b.arrivalTime));
    PriorityQueue<Costumer> waiting = new PriorityQueue<>(N, (a, b) -> a.pizzaTime.compareTo(b.pizzaTime));
    
    for (int i =0; i <= N; i++) {
      Costumer c = new Costumer();
      c.arrivalTime = sc.nextInt();
      c.pizzaTime = sc.nextInt();
      costumers.add(c);
    }
    
    long totalTime = 0L;
    long endTime = 0L;
    while (!costumers.isEmpty() || !waiting.isEmpty()) {
      // Get costumer
      Costumer next = waiting.isEmpty() ? costumers.remove() : waiting.remove();
      endTime = Math.max(endTime, next.arrivalTime ) + next.pizzaTime;
      totalTime += endTime - next.arrivalTime; 
      
      while (!costumers.isEmpty() && costumers.peek().arrivalTime <= endTime) {
        waiting.add(costumers.remove()); // Add costumers to the waiting list
      }
    }
    
    System.out.println(totalTime / N);
  }
}
