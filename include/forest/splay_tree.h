#ifndef SPLAY_TREE_H
#define SPLAY_TREE_H

namespace forest {
        template <typename key_t, typename value_t>
        class splay_tree {
        private:
                struct node {
                        node(key_t key, value_t value) {
                                this->key = key;
                                this->value = value;
                                this->parent = nullptr;
                                this->left = nullptr;
                                this->right = nullptr;
                        }
                        key_t key;
                        value_t value;
                        node *parent;
                        node *left;
                        node *right;
                };
                node *root;
        public:
                splay_tree() {
                        root = nullptr;
                }
                ~splay_tree() {

                }
                void pre_order_traversal() {

                }
                void in_order_traversal() {

                }
                void post_order_traversal() {

                }

        };
}

#endif
