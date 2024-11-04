/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
        
//     }
// };

class Solution {
public:
    unordered_map<Node*, Node*> cloned;

    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;  // If the graph is empty, return nullptr
        return clone(node);
    }

private:
    Node* clone(Node* node) {
        // If the node has already been cloned, return the cloned node
        if (cloned.find(node) != cloned.end()) {
            return cloned[node];
        }

        // Create a new node with the same value as the original node
        Node* newNode = new Node(node->val);
        cloned[node] = newNode;  // Store this in our cloned map

        // Recursively clone all neighbors
        for (Node* neighbor : node->neighbors) {
            newNode->neighbors.push_back(clone(neighbor));
        }

        return newNode;
    }
};