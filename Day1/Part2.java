package Day1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Part2 {
    
    public static void main(String[] args) throws FileNotFoundException {
        
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

        int count = 0;

        for (String set : sets) {

            numSets[count] = new NumSet(set.split("\n"));

            count++;

        }

        List<Integer> sortedNums = new ArrayList<>() {};

        for (NumSet numSet : numSets) {
            
            sortedNums.add(numSet.total);

        }

        Arrays.sort(sortedNums.toArray());

        int highestNum = sortedNums.get(sortedNums.size() - 1);
        int secHighestNum = sortedNums.get(sortedNums.size() - 2);
        int thiHighestNum = sortedNums.get(sortedNums.size() - 3);

        System.out.println(highestNum);
        System.out.println(secHighestNum);
        System.out.println(thiHighestNum);

        int total = highestNum + secHighestNum + thiHighestNum;

        System.out.println("Total: " + total);

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