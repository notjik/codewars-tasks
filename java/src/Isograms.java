import java.util.Set;

/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false
 */

public class Isograms {
    public static class isogram {
        public static boolean isIsogram(String str) {
            try{
                Set<String> setStr = Set.of(str.toLowerCase().split(""));
                return true;
            } catch (IllegalArgumentException e) {
                return false;
            }


        }
    }
}
