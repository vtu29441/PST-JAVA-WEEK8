
        while (it.hasNext()) {
            if (it.next().equals("###")) {
                break;
            }
        }

        return it;
    }

    public static void main(String[] args) {
        ArrayList mylist = new ArrayList();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        for (int i = 0; i < n; i++) {
            mylist.add(sc.nextInt());
        }

        mylist.add("###");

        for (int i = 0; i < m; i++) {
            mylist.add(sc.next());
        }

        Iterator it = func(mylist);

        while (it.hasNext()) {
            System.out.println(it.next());
        }
    }
}