public class Main {
    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        long sum = 0;
        for(long i = 1; i <= 100000000; i++) sum += i;
        long end = System.currentTimeMillis();
        System.out.println("Tempo Java: " + (end - start) / 1000.0 + " segundos");
    }
}
