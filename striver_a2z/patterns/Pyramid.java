public class Pyramid {
    public static void main(String[] args) {
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i;j++){
                System.out.print(" ");
            }
            int key = 2*i-1;
            for(int j=1;j<=key;j++)
                System.out.print("*");
            System.out.println();
        }
    }
    
}
