
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author DCS
 */
public class Extract {
    public static void main(String[] args) {
        String file = args[0];
        String regex = args[1];
        String regex2 = args[2];
        Scanner scanner;
        try {
            scanner = new Scanner(new File(file));
            String[] a;
            String l = "";
            while(scanner.hasNextLine()){
                l = scanner.nextLine();
                l = l.trim();
                if(l.length()>regex.length()){
                    String s = l.substring(0, regex.length());
                    if(s.equals(regex)){
                        String r = l.substring(regex.length(), l.length());
                        if(s.length()>regex2.length()){
                            String t = r.substring(0, r.length()-regex2.length());
                            System.out.println(t);
                        }
                    }
                }
                
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Extract.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
}
