import java.util.Scanner;

public class Sort{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Menu:");
            System.out.println("1. Bubble Sort");
            System.out.println("2. Selection Sort");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();

            if (choice == 3) {
                System.out.println("Exiting program...");
                break;
            }

            System.out.print("Enter the number of elements: ");
            int n = scanner.nextInt();
            int[] arr = new int[n];

            System.out.print("Enter " + n + " integers separated by spaces: ");
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            switch (choice) {
                case 1:
                    bubbleSort(arr);
                    break;
                case 2:
                    selectionSort(arr);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }

            System.out.println("Sorted array:");
            for (int num : arr) {
                System.out.print(num + " ");
            }
            System.out.println();
        }

        scanner.close();
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }
}
