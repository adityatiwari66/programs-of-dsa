#include <iostream>

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int k) : key(k), left(nullptr), right(nullptr) {}
};

TreeNode* insertIntoBST(TreeNode* root, int key) {
    if (!root) {
        return new TreeNode(key);
    }

    if (key < root->key) {
        root->left = insertIntoBST(root->left, key);
    } else if (key > root->key) {
        root->right = insertIntoBST(root->right, key);
    }

    return root;
}

TreeNode* deleteFromBST(TreeNode* root, int key) {
    if (!root) {
        return root;
    }

    if (key < root->key) {
        root->left = deleteFromBST(root->left, key);
    } else if (key > root->key) {
        root->right = deleteFromBST(root->right, key);
    } else {
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        TreeNode* minRight = root->right;
        while (minRight->left) {
            minRight = minRight->left;
        }

        root->key = minRight->key;
        root->right = deleteFromBST(root->right, minRight->key);
    }

    return root;
}

TreeNode* searchInBST(TreeNode* root, int key) {
    if (!root || root->key == key) {
        return root;
    }

    if (key < root->key) {
        return searchInBST(root->left, key);
    } else {
        return searchInBST(root->right, key);
    }
}

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        std::cout << root->key << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode* bstRoot = nullptr;
    int elementsToInsert[] = {50, 30, 70, 20, 40, 60, 80};
    int size = sizeof(elementsToInsert) / sizeof(elementsToInsert[0]);

    for (int i = 0; i < size; ++i) {
        bstRoot = insertIntoBST(bstRoot, elementsToInsert[i]);
    }

    std::cout << "Binary Search Tree after insertion:" << std::endl;
    inorderTraversal(bstRoot);
    std::cout << std::endl;

    int elementToDelete = 30;
    bstRoot = deleteFromBST(bstRoot, elementToDelete);

    std::cout << "Binary Search Tree after deletion of " << elementToDelete << ":" << std::endl;
    inorderTraversal(bstRoot);
    std::cout << std::endl;

    int keyToSearch = 40;
    TreeNode* searchResult = searchInBST(bstRoot, keyToSearch);

    if (searchResult) {
        std::cout << "Key " << keyToSearch << " found in the Binary Search Tree." << std::endl;
    } else {
        std::cout << "Key " << keyToSearch << " not found in the Binary Search Tree." << std::endl;
    }

    return 0;
}