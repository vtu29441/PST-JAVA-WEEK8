}

class FoodFactory {

    public Food getFood(String order) {
        if (order.equalsIgnoreCase("pizza")) {
            return new Pizza();
        } else if (order.equalsIgnoreCase("cake")) {
            return new Cake();
        }

        return null;
    }
}

public class Solution {

    public static void main(String[] args) {
    }
    public String getType() {
        return "Someone ordered a Dessert!";
class Cake implements Food {
        Scanner sc = new Scanner(System.in);

        String order = sc.nextLine();

        FoodFactory foodFactory = new FoodFactory();

        Food food = foodFactory.getFood(order);

        System.out.println(
            "The factory returned class " +
            food.getClass().getSimpleName()
        );