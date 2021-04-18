public class Q2P3 {
    public static void main(String[] args) {
        int i;
        int variableWithinScope = 0;

        for (i = 0; i < 5; i++) {
            int variableOutsideOfScope = 100;
            variableWithinScope = 50;
        }

        System.out.println("This will not throw an error. The value of the variable within scope is: " + variableWithinScope);
//        System.out.println("This WILL throw an error. The value of the variable outside of scope is undeterminable: " + variableOutsideOfScope);
    }
}
