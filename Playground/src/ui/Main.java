package ui;

import java.util.Scanner;

public class Main {

	public Main() {
		// TODO Auto-generated constructor stub
		
	}

	public static void main(String[] args) {
		/*
		 * int value = 5; square(value); System.out.println(value);
		 */
		
		IntegerAndSquare i = new IntegerAndSquare();
		i.valueToSquare = 5;
		i.square();
		System.out.println(i.valueToSquare);
		
		/*
		 * Scanner keyboard = new Scanner(System.in); String value1; String value2;
		 * 
		 * System.out.println("Please enter a string"); value1 = keyboard.nextLine();
		 * System.out.println("Please enter a string"); value2 = keyboard.nextLine();
		 * 
		 * if (value1.equals(value2)) {
		 * System.out.println("You've entered the same thing"); } else {
		 * System.out.println("You've entered something different"); } keyboard.close();
		 * System.out.println("Hi");
		 */
	}

	public static int square(IntegerAndSquare i) {
		i.valueToSquare = i.valueToSquare * i.valueToSquare;
		
		return i.valueToSquare;
		
	}
	
}
 class IntegerAndSquare {
	 int valueToSquare;
	 
	 public int square() {
		 valueToSquare = valueToSquare * valueToSquare;
		 return valueToSquare;
	 }
 }