public class InvertedAlpha {
    public static void main(String[] args) {
        for(int i=1;i<=5;i++){
            char ch='A';
            for(int j=5;j>=i;j--){
                System.out.print(ch);
                ch+=1;
            }
            System.out.println();
        }
        char ch = 'A';
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(ch);
            }
            System.out.println();
            ch+=1;

        }
    }
}
