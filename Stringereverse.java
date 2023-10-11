import java.util.Scanner;

public class StringReverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] words = input.split("\\s");

        
            char[] firstWord = words[0].toCharArray();
            int j = firstWord.length;

            for (int i = 0, k = j-1; i<k; i++, k--) 
            {
                char c = firstWord[i];
                firstWord[i] = firstWord[k];
                firstWord[k] = c;
            }

            words[0] = String.valueOf(firstWord);
            String reversedString = String.join(" ", words);

            System.out.println(reversedString);
        

       
    }
}
