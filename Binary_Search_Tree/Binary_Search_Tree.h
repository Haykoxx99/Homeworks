#pragma once
#include <iostream>
#include <queue>

template <typename T>
class Binary_Search_Tree final
{
private:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
		Node(T value) : data(value), left(nullptr), right(nullptr) {}
	};
	Node* root;
public:
	Binary_Search_Tree() : root(nullptr) {}
	~Binary_Search_Tree()
	{
		__clear(root);
	}
	void clear()
	{
		__clear(root);
	}
	void insert(const T& value)
	{
		__insert(value, root);
	}
	void inorder() const
	{
		__inorder(root);
	}
	void preorder() const
	{
		__preorder(root);
	}
	void postorder() const
	{
		__postorder(root);
	}
	void levelOrder() const
	{
		if (root == nullptr)
		{
			return;
		}

		std::queue<Node*> container;
		container.push(root);
		while (container.empty() == false)
		{
			Node* temp = container.front();
			std::cout << temp->data << ' ';
			container.pop();
			if (temp->left != nullptr)
			{
				container.push(temp->left);
			}
			if (temp->right != nullptr)
			{
				container.push(temp->right);
			}
		}
	}

private:
	void __insert(const T& value, Node* node)
	{
		if (root == nullptr)
		{
			root = new Node(value);
			return;
		}
		if (node == nullptr)
		{
			node = new Node(value);
			return;
		}
		if (value > node->data)
		{
			if (node->right == nullptr)
			{
				node->right = new Node(value);
				return;
			}
			__insert(value,node->right);
		}
		else if (value < node->data)
		{
			if (node->left == nullptr)
			{
				node->left = new Node(value);
				return;
			}
			__insert(value,node->left);
		}
	}
	void __inorder(Node* node) const
	{
		if (node == nullptr)
		{
			return;
		}
		__inorder(node->left);
		std::cout << node->data << ' ';
		__inorder(node->right);
	}
	void __preorder(Node* node) const
	{
		if (node == nullptr)
		{
			return;
		}
		std::cout << node->data << ' ';
		__preorder(node->left);
		__preorder(node->right);
	}
	void __postorder(Node* node) const
	{
		if (node == nullptr)
		{
			return;
		}
		__postorder(node->left);
		__postorder(node->right);
		std::cout << node->data << ' ';
	}
	void __clear(Node* node)
	{
		if (node == nullptr)
		{
			return;
		}
		__clear(node->left);
		__clear(node->right);
		delete node;
		root = nullptr;
	}
};



