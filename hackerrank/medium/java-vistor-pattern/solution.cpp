        boolean isLeaf = true;

        for (int next : graph.get(current)) {
            if (next != parent) {
                isLeaf = false;
                break;
            }
        }

        if (isLeaf) {
            return new TreeLeaf(
                    values[current],
                    colors[current],
                    depth
            );
        }

        TreeNode node = new TreeNode(
                values[current],
                colors[current],
                depth
        );

        for (int next : graph.get(current)) {
            if (next != parent) {
                node.addChild(
                        buildTree(next, current, depth + 1)
                );
            }
        }

        return node;
    }
}