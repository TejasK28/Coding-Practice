package Java;
import java.util.*;

public class comparator 
{
    public static void main(String[] args)
    {
        List<String> list = new ArrayList<>();
        list.add("Houses And Things");
        list.add("Apples");
        list.add("Zerbaaaas");
        list.add("Canafa");

        //System.out.println(list);

        Comparator<String> cmp = new Comparator<String>(){
            public int compare(String s1, String s2) {
                int s1Length = s1.length();
                int s2Length = s2.length();

                if(s1Length < s2Length)
                    return -1;
                else 
                    return 1;
            }
        };

        Collections.sort(list, (String s1, String s2)-> {
                int s1Length = s1.length();
                int s2Length = s2.length();

                if(s1Length < s2Length)
                    return -1;
                else 
                    return 1;
            });
            
        System.out.println(list);

    }
    
}
