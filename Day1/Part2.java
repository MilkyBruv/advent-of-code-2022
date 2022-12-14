package Day1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Part2 {
    
    public static void main(String[] args) throws FileNotFoundException {
        
        // Get data from file
        File file = new File("Day1/data.txt");
        Scanner reader = new Scanner(file);
        String fullData = "";

        while (reader.hasNextLine()) {

            String line = reader.nextLine();
            fullData += line + "\n";

        }

        reader.close();

        String[] sets = fullData.split("\n\n");
        NumSet[] numSets = new NumSet[sets.length];
        int[] finalNums = new int[sets.length];

        int count = 0;

        for (String set : sets) {

            numSets[count] = new NumSet(set.split("\n"));

            finalNums[count] = numSets[count].total;

            count++;

        }

        Arrays.sort(finalNums);

        int finalTotal = finalNums[finalNums.length - 1] + finalNums[finalNums.length - 2] + finalNums[finalNums.length - 3];

        System.out.println(finalTotal);

    }

}

class NumSet {

    public int[] nums;
    public int total;

    public NumSet(String[] strNums) {

        List<Integer> preNums = new ArrayList<>() {};

        for (String strNum : strNums) {

            preNums.add((Integer) Integer.parseInt(strNum));

        }

        this.nums = new int[preNums.size()];

        for (int i = 0; i < preNums.size(); i++) {
            
            this.nums[i] = preNums.get(i);

        }

        for (int num : this.nums) {

            this.total += num;

        }

    }

}